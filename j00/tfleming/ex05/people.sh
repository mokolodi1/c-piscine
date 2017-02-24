ldapsearch -x "objectClass=apple-user" | grep uid: | cut -c6-300 | sort -f -r
