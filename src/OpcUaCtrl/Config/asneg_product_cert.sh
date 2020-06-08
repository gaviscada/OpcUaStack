
# -----------------------------------------------------------------------------
# -----------------------------------------------------------------------------
#
# create product certificate 
#
# -----------------------------------------------------------------------------
# -----------------------------------------------------------------------------

# cleanup
rm -rf asneg_product_key.pem
rm -rf asneg_product_req.pem
rm -rf asneg_product_cert.pem
rm -rf index.txt

touch index.txt
export OPENSSL_CONF=${HOME}/.ASNeG/etc/OpcUaStack4/ssl/openssl.cnf

# create csr
echo "create csr request"
openssl req -new \
        -nodes \
        -days 3650 \
        -subj '/DC=127.0.0.1/CN=ASNeG Product/O=ASNeG/C=DE/ST=Neukirchen/L=Hessen/OU=ASNeG Product' \
        -keyout asneg_product_key.pem \
        -out asneg_product_req.pem

# create intermediate certificate
echo "create intermediate certificate"
openssl ca \
        -policy policy_anything \
        -days 3650 \
	-extensions demo-extension \
        -keyfile asneg_im_key.pem \
        -cert asneg_im_cert.pem \
        -out asneg_product_cert.pem \
        -infiles asneg_product_req.pem

# show intermediate certificate
echo "show intermediate certificate"
openssl x509 -in ./asneg_product_cert.pem -text