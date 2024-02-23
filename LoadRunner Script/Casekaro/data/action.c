Action()
{

	web_set_sockets_option("SSL_VERSION", "AUTO");

	web_url("seed", 
		"URL=https://clientservices.googleapis.com/chrome-variations/seed?osname=win&channel=stable&milestone=121", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		LAST);

	web_url("www.amazon.com", 
		"URL=https://www.amazon.com/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t2.inf", 
		"Mode=HTML", 
		LAST);

	web_concurrent_start(NULL);

	web_url("41-WpIOxHtL._RC%7C71z85BIz8wL.css,41hk4fqGa9L.css,11KAm1wkQdL.css,31-P1-9TebL.css,31YZpDCYJPL.css,21pkK7OQMnL.css,41yQj5y2obL.css,110Nj+wUGYL.css,31OvHRW+XiL.css,01R53xsjpjL.css,11EKggV-DlL.css,41yKpEQVJkL.css,01YWmXMYw8L.css,11qTzxZ0Y5L.css_.css", 
		"URL=https://images-na.ssl-images-amazon.com/images/I/41-WpIOxHtL._RC%7C71z85BIz8wL.css,41hk4fqGa9L.css,11KAm1wkQdL.css,31-P1-9TebL.css,31YZpDCYJPL.css,21pkK7OQMnL.css,41yQj5y2obL.css,110Nj+wUGYL.css,31OvHRW+XiL.css,01R53xsjpjL.css,11EKggV-DlL.css,41yKpEQVJkL.css,01YWmXMYw8L.css,11qTzxZ0Y5L.css_.css?AUIClients/NavDesktopUberAsset&TiA+2wh/", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=https://www.amazon.com/", 
		"Snapshot=t3.inf", 
		LAST);

	web_url("01rGP6HIADL.js", 
		"URL=https://images-na.ssl-images-amazon.com/images/I/01rGP6HIADL.js?AUIClients/GenericObservableJS", 
		"Resource=1", 
		"RecContentType=application/x-javascript", 
		"Referer=https://www.amazon.com/", 
		"Snapshot=t4.inf", 
		LAST);

	web_url("11y85pohsPL._RC%7C41JZmnaIUdL.js_.js", 
		"URL=https://images-na.ssl-images-amazon.com/images/I/11y85pohsPL._RC%7C41JZmnaIUdL.js_.js?AUIClients/AmazonGatewayAuiAssets", 
		"Resource=1", 
		"RecContentType=application/x-javascript", 
		"Referer=https://www.amazon.com/", 
		"Snapshot=t5.inf", 
		LAST);

	web_url("31YI0nnbQAL.js", 
		"URL=https://images-na.ssl-images-amazon.com/images/I/31YI0nnbQAL.js?AUIClients/AmazonGatewayHerotatorJS", 
		"Resource=1", 
		"RecContentType=application/x-javascript", 
		"Referer=https://www.amazon.com/", 
		"Snapshot=t6.inf", 
		LAST);

	web_url("41W974vG8QL._RC%7C71p1TlwfecL.js,01QvReFeJyL.js,01phmzCOwJL.js,01eOvPdxG7L.js,71l6yeh3txL.js,41306Iio4NL.js,115pV8Rl02L.js,01+pnQJuQ0L.js,21cN4KWOfCL.js,41nqF5HJopL.js,51LATRRqTgL.js,31Pa7Gj4ZBL.js,11lEMI5MhIL.js,313ANWt5xVL.js,01LEzWzrPZL.js,01AqeWA7PKL.j", 
		"URL=https://images-na.ssl-images-amazon.com/images/I/41W974vG8QL._RC%7C71p1TlwfecL.js,01QvReFeJyL.js,01phmzCOwJL.js,01eOvPdxG7L.js,71l6yeh3txL.js,41306Iio4NL.js,115pV8Rl02L.js,01+pnQJuQ0L.js,21cN4KWOfCL.js,41nqF5HJopL.js,51LATRRqTgL.js,31Pa7Gj4ZBL.js,11lEMI5MhIL.js,313ANWt5xVL.js,01LEzWzrPZL.js,01AqeWA7PKL.js,71-pKfDl0GL.js,41k8iTU2aPL.js_.js?AUIClients/NavDesktopUberAsset&XeG1J2E3", 
		"Resource=1", 
		"RecContentType=application/x-javascript", 
		"Referer=https://www.amazon.com/", 
		"Snapshot=t7.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_set_sockets_option("TLS_SNI", "0");

	web_set_sockets_option("TLS_SNI", "1");

	web_set_sockets_option("TLS_SNI", "0");

	lr_think_time(4);

	web_custom_request("com.amazon.csm.nexusclient.prod", 
		"URL=https://unagi-na.amazon.com/1/events/com.amazon.csm.nexusclient.prod", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.amazon.com/", 
		"Snapshot=t8.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"cs\":{\"dct\":{\"#0\":\"requestId\",\"#1\":\"5AFSK1C7VNHSD7KRB97Y\",\"#2\":\"server\",\"#3\":\"www.amazon.com\",\"#4\":\"obfuscatedMarketplaceId\",\"#5\":\"ATVPDKIKX0DER\",\"#6\":\"lob\",\"#7\":\"producerId\",\"#8\":\"csm\",\"#9\":\"schemaId\",\"#10\":\"csm.CSMBaselineEvent.4\",\"#11\":\"timestamp\",\"#12\":\"messageId\",\"#13\":\"sessionId\",\"#14\":\"133-6658273-5713951\"}},\"events\":[{\"data\":{\"#0\":\"#1\",\"#2\":\"#3\",\"#4\":\"#5\",\"#6\":\"1\",\"#7\":\"#8\",\"#9\":\"#10\",\"#11\""
		":\"2024-02-07T12:04:02.475Z\",\"#12\":\"5AFSK1C7VNHSD7KRB97Y-1707307442475-2273913733\",\"#13\":\"#14\"}}]}", 
		LAST);

	web_set_sockets_option("TLS_SNI", "1");

	web_custom_request("OE", 
		"URL=https://fls-na.amazon.com/1/batch/1/OE/", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=https://www.amazon.com/", 
		"Snapshot=t9.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"rid\":\"5AFSK1C7VNHSD7KRB97Y\",\"sid\":\"133-6658273-5713951\",\"mid\":\"ATVPDKIKX0DER\",\"sn\":\"www.amazon.com\",\"reqs\":[{\"cel\":{\"k\":\"mrg\",\"n\":\"page module\",\"t\":594}},{\"cel\":{\"k\":\"pmd\",\"o\":\"https://www.amazon.com\",\"p\":\"/\",\"t\":595}},{\"cel\":{\"w\":1280,\"aw\":1280,\"h\":720,\"ah\":680,\"cd\":24,\"pd\":24,\"t\":595,\"k\":\"sci\"}},{\"cel\":{\"w\":1263,\"h\":5540,\"t\":595,\"k\":\"doi\"}},{\"cel\":{\"k\":\"mso\",\"n\":\"page module\",\"t\":595}},{\"cel\":{\"k"
		"\":\"mrg\",\"n\":\"viewport module\",\"t\":595}},{\"cel\":{\"w\":1280,\"h\":541,\"x\":0,\"y\":0,\"t\":595,\"k\":\"vpi\"}},{\"cel\":{\"k\":\"mso\",\"n\":\"viewport module\",\"t\":595}},{\"cel\":{\"k\":\"mrg\",\"n\":\"features module\",\"t\":595}},{\"cel\":{\"k\":\"mso\",\"n\":\"features module\",\"t\":596}},{\"cel\":{\"k\":\"mrg\",\"n\":\"mouse click module\",\"t\":596}},{\"cel\":{\"k\":\"mso\",\"n\":\"mouse click module\",\"t\":596}},{\"cel\":{\"k\":\"mrg\",\"n\":\"mouse move module\",\"t\":596}},"
		"{\"cel\":{\"k\":\"mso\",\"n\":\"mouse move module\",\"t\":596}},{\"cel\":{\"k\":\"hrt\",\"t\":3606}},{\"csm\":{\"k\":\"chk\",\"f\":1,\"l\":{\"cel\":15,\"csm\":1},\"s\":\"inln\"}}]}", 
		LAST);

	web_custom_request("command", 
		"URL=https://clients4.google.com/chrome-sync/command/?client=Google+Chrome&client_id=57oxOBvCz9pMOcr26yQsbg%3D%3D", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/vnd.google.octet-stream-compressible", 
		"Referer=", 
		"Snapshot=t10.inf", 
		"ContentEncoding=gzip", 
		"Mode=HTML", 
		"EncType=application/octet-stream", 
		"BodyBinary=\n\\x16nandinis7399@gmail.com\\x10c\\x18\\x02*'\\x12\\x04\\x08\\x00\\x10\\x00\\x18\\x012\\x04\\x08\\xDE\\xD8\\x122\\x13\\x08\\x81\\xF5\\x02\\x12\r \\x00\\x88\\x01\\x8F\\xBA\\xD2\\xCE\\x99\\xC2\\xD4\\xB4\\x01@\\x00H\\x07:%z00000165-a8aa-aecb-0000-00005b8f87daR\\x12\n\\x02\\x08\\x05\n\\x02\\x08\t\n\\x02\\x08\n\\x10\\x01\\x18\\x00 \\x00Z\\x81\\x01\n\\x7F\\x12}Chrome WIN 121.0.6167.140 (a5856993c61543d4acbee5f848f1750607e87ba0-refs/branch-heads/6167@{#1684}) channel(stable),gzip(gfe)"
		"b'AIzaSyBOti4mM-6x9WDnZIjIeyEU21OpBXqWBgwj\\x02\\x10\\x00", 
		LAST);

	web_url("ATVPDKIKX0DER:133-6658273-5713951:5AFSK1C7VNHSD7KRB97Y$s:wl-client-id%3DCSMTriger%2Cwl%3DUEDATA_AA_SERVERSIDE_ASSIGNMENT_CLIENTSIDE_TRIGGER_190249%2FT1:1234", 
		"URL=https://fls-na.amazon.com/1/remote-weblab-triggers/1/OE/ATVPDKIKX0DER:133-6658273-5713951:5AFSK1C7VNHSD7KRB97Y$s:wl-client-id%3DCSMTriger%2Cwl%3DUEDATA_AA_SERVERSIDE_ASSIGNMENT_CLIENTSIDE_TRIGGER_190249%2FT1:1234", 
		"Resource=1", 
		"RecContentType=text/plain", 
		"Referer=https://www.amazon.com/", 
		"Snapshot=t11.inf", 
		LAST);

	web_add_cookie("csm-hit=tb:s-5AFSK1C7VNHSD7KRB97Y|1707307442184&t:1707307444148&adb:adblk_yes; DOMAIN=www.amazon.com");

	lr_think_time(7);

	web_url("uedata", 
		"URL=https://www.amazon.com/rd/uedata?ld&v=0.277997.0&id=5AFSK1C7VNHSD7KRB97Y&sw=1280&sh=720&vw=1263&vh=541&m=1&sc=5AFSK1C7VNHSD7KRB97Y&ue=3&bb=306&ns=328&be=593&fp=424&fcp=424&pc=18224&tc=-4198&na_=-4198&ul_=-1707307441878&_ul=-1707307441878&rd_=-1707307441878&_rd=-1707307441878&fe_=-4063&lk_=-2943&_lk=-2943&co_=-2943&_co=-1388&sc_=-2836&rq_=-1386&rs_=-41&_rs=211&dl_=-7&di_=927&de_=928&_de=928&_dc=18224&ld_=18224&_ld=-1707307441878&ntd=0&ty=0&rc=0&hob=2&hoe=4&ld=18226&t=1707307460104&ctb=1&rt=__ld"
		":102-6-3-90-4-0-1&ec=51&ecf=0&csmtags=aui|aui:aui_build_date:3.24.1-2024-02-05|mutObsYes|navbar|FWCIMEnabled|fls-na-amazon-com|perfYes|ak_cdn_fr|ak_cdn_mp|aui:sw:page_proxy:no_ctrl|adblk_yes&viz=visible:3&pty=Gateway&spty=desktop&pti=desktop&tid=5AFSK1C7VNHSD7KRB97Y&aftb=1&lob=1", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.amazon.com/", 
		"Snapshot=t12.inf", 
		"Mode=HTML", 
		LAST);

	web_concurrent_start(NULL);

	web_url("31bJewCvY-L.js", 
		"URL=https://images-na.ssl-images-amazon.com/images/I/31bJewCvY-L.js", 
		"Resource=1", 
		"RecContentType=application/x-javascript", 
		"Referer=https://www.amazon.com/", 
		"Snapshot=t13.inf", 
		LAST);

	web_url("11IkBa9uTqL.js", 
		"URL=https://images-na.ssl-images-amazon.com/images/I/11IkBa9uTqL.js?xcp", 
		"Resource=1", 
		"RecContentType=application/x-javascript", 
		"Referer=https://www.amazon.com/", 
		"Snapshot=t14.inf", 
		LAST);

	web_url("11UWaAUUu6L.js", 
		"URL=https://images-na.ssl-images-amazon.com/images/I/11UWaAUUu6L.js?xcp", 
		"Resource=1", 
		"RecContentType=application/x-javascript", 
		"Referer=https://www.amazon.com/", 
		"Snapshot=t15.inf", 
		LAST);

	web_url("11332qFtqpL.js", 
		"URL=https://images-na.ssl-images-amazon.com/images/I/11332qFtqpL.js?xcp", 
		"Resource=1", 
		"RecContentType=application/x-javascript", 
		"Referer=https://www.amazon.com/", 
		"Snapshot=t16.inf", 
		LAST);

	web_url("ATVPDKIKX0DER:133-6658273-5713951:5AFSK1C7VNHSD7KRB97Y$uedata=s:%2Frd%2Fuedata%3Fld%26v%3D0.277997.0%26id%3D5AFSK1C7VNHSD7KRB97Y%26sw%3D1280%26sh%3D720%26vw%3D1263%26vh%3D541%26m%3D1%26sc%3D5AFSK1C7VNHSD7KRB97Y%26ue%3D3%26bb%3D306%26ns%3D328%26be%3D593%26f", 
		"URL=https://fls-na.amazon.com/1/batch/1/OP/ATVPDKIKX0DER:133-6658273-5713951:5AFSK1C7VNHSD7KRB97Y$uedata=s"
		":%2Frd%2Fuedata%3Fld%26v%3D0.277997.0%26id%3D5AFSK1C7VNHSD7KRB97Y%26sw%3D1280%26sh%3D720%26vw%3D1263%26vh%3D541%26m%3D1%26sc%3D5AFSK1C7VNHSD7KRB97Y%26ue%3D3%26bb%3D306%26ns%3D328%26be%3D593%26fp%3D424%26fcp%3D424%26pc%3D18224%26tc%3D-4198%26na_%3D-4198%26ul_%3D-1707307441878%26_ul%3D-1707307441878%26rd_%3D-1707307441878%26_rd%3D-1707307441878%26fe_%3D-4063%26lk_%3D-2943%26_lk%3D-2943%26co_%3D-2943%26_co%3D-1388%26sc_%3D-2836%26rq_%3D-1386%26rs_%3D-41%26_rs%3D211%26dl_%3D-7%26di_%3D927%26de_%3D928%"
		"26_de%3D928%26_dc%3D18224%26ld_%3D18224%26_ld%3D-1707307441878%26ntd%3D0%26ty%3D0%26rc%3D0%26hob%3D2%26hoe%3D4%26ld%3D18226%26t%3D1707307460104%26ctb%3D1%26rt%3D__ld%3A102-6-3-90-4-0-1%26ec%3D51%26ecf%3D0%26csmtags%3Daui%7Caui%3Aaui_build_date%3A3.24.1-2024-02-05%7CmutObsYes%7Cnavbar%7CFWCIMEnabled%7Cfls-na-amazon-com%7CperfYes%7Cak_cdn_fr%7Cak_cdn_mp%7Caui%3Asw%3Apage_proxy%3Ano_ctrl%7Cadblk_yes%26viz%3Dvisible%3A3%26pty%3DGateway%26spty%3Ddesktop%26pti%3Ddesktop%26tid%3D5AFSK1C7VNHSD7KRB97Y%26af"
		"tb%3D1%26lob%3D1:18231", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://www.amazon.com/", 
		"Snapshot=t17.inf", 
		LAST);

	web_url("ATVPDKIKX0DER:133-6658273-5713951:5AFSK1C7VNHSD7KRB97Y$uedata=s:%2Frd%2Fuedata%3Fld%26v%3D0.277997.0%26id%3D5AFSK1C7VNHSD7KRB97Y%26sc0%3Daui%3Asw%3Appft%3Acallback_ricb%26bb0%3D236%26pc0%3D936%26ld0%3D936%26t0%3D1707307442814%26sc1%3Dportal-bb%26pc1%3D15%2", 
		"URL=https://fls-na.amazon.com/1/batch/1/OP/ATVPDKIKX0DER:133-6658273-5713951:5AFSK1C7VNHSD7KRB97Y$uedata=s"
		":%2Frd%2Fuedata%3Fld%26v%3D0.277997.0%26id%3D5AFSK1C7VNHSD7KRB97Y%26sc0%3Daui%3Asw%3Appft%3Acallback_ricb%26bb0%3D236%26pc0%3D936%26ld0%3D936%26t0%3D1707307442814%26sc1%3Dportal-bb%26pc1%3D15%26ld1%3D15%26t1%3D1707307442200%26sc2%3DheroAf%26cf2%3D412%26pc2%3D412%26ld2%3D412%26t2%3D1707307442290%26sc3%3Dh1Af%26cf3%3D413%26pc3%3D413%26ld3%3D413%26t3%3D1707307442291%26sc4%3Ddesktop-banner-stripe-visible%26cf4%3D414%26pc4%3D414%26ld4%3D414%26t4%3D1707307442292%26sc5%3DnavCF%26cf5%3D514%26pc5%3D514%26l"
		"d5%3D514%26t5%3D1707307442392%26sc6%3DcsmCELLSframework%26bb6%3D595%26pc6%3D595%26ld6%3D595%26t6%3D1707307442473%26sc7%3DcsmCELLSpdm%26bb7%3D595%26pc7%3D596%26ld7%3D596%26t7%3D1707307442474%26sc8%3DcsmCELLSvpm%26bb8%3D596%26pc8%3D596%26ld8%3D596%26t8%3D1707307442474%26sc9%3DcsmCELLSfem%26bb9%3D596%26pc9%3D597%26ld9%3D597%26t9%3D1707307442475%26sc10%3Due_sushi_v1%26bb10%3D597%26pc10%3D598%26ld10%3D598%26t10%3D1707307442476%26sc11%3Ddesktop-grid-1-visible%26cf11%3D1672%26pc11%3D1672%26ld11%3D1672%26"
		"t11%3D1707307443550%26sc12%3Ddesktop-grid-4-visible%26cf12%3D1672%26pc12%3D1672%26ld12%3D1672%26t12%3D1707307443550%26sc13%3Ddesktop-grid-8-visible%26cf13%3D1672%26pc13%3D1672%26ld13%3D1672%26t13%3D1707307443550%26sc14%3Ddesktop-grid-6-visible%26cf14%3D1677%26pc14%3D1677%26ld14%3D1677%26t14%3D1707307443555%26sc15%3Ddesktop-grid-7-visible%26cf15%3D1677%26pc15%3D1677%26ld15%3D1677%26t15%3D1707307443555%26sc16%3Ddesktop-grid-2-visible%26cf16%3D1678%26pc16%3D1678%26ld16%3D1678%26t16%3D1707307443556%26"
		"sc17%3Ddesktop-grid-3-visible%26cf17%3D1678%26pc17%3D1678%26ld17%3D1678%26t17%3D1707307443556%26sc18%3Ddesktop-btf-grid-1-visible%26cf18%3D1709%26pc18%3D1710%26ld18%3D1710%26t18%3D1707307443588%26sc19%3Ddesktop-btf-grid-2-visible%26cf19%3D1720%26pc19%3D1720%26ld19%3D1720%26t19%3D1707307443598%26sc20%3Ddesktop-btf-grid-3-visible%26cf20%3D1859%26pc20%3D1859%26ld20%3D1859%26t20%3D1707307443737%26sc21%3Ddesktop-btf-grid-6-visible%26cf21%3D1922%26pc21%3D1922%26ld21%3D1922%26t21%3D1707307443800%26sc22%3"
		"Ddesktop-btf-grid-4-visible%26cf22%3D1926%26pc22%3D1926%26ld22%3D1926%26t22%3D1707307443804%26sc23%3Ddesktop-btf-grid-5-visible%26cf23%3D1927%26pc23%3D1927%26ld23%3D1927%26t23%3D1707307443805%26sc24%3Ddesktop-btf-grid-8-visible%26cf24%3D1927%26pc24%3D1927%26ld24%3D1927%26t24%3D1707307443805%26sc25%3Ddesktop-btf-grid-7-visible%26cf25%3D1927%26pc25%3D1927%26ld25%3D1927%26t25%3D1707307443805%26sc26%3Dgateway-asset-load%26cf26%3D5743%26pc26%3D5743%26ld26%3D5743%26t26%3D1707307447621%26ctb%3D1:18231", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://www.amazon.com/", 
		"Snapshot=t18.inf", 
		LAST);

	web_url("ATVPDKIKX0DER:133-6658273-5713951:5AFSK1C7VNHSD7KRB97Y$uedata=s:%2Frd%2Fuedata%3Fld%26v%3D0.277997.0%26id%3D5AFSK1C7VNHSD7KRB97Y%26ctb%3D1%26sc0%3DjQueryPageShow%26cf0%3D18266%26pc0%3D18266%26ld0%3D18266%26t0%3D1707307460144%26pty%3DGateway%26spty%3Ddeskto", 
		"URL=https://fls-na.amazon.com/1/batch/1/OP/ATVPDKIKX0DER:133-6658273-5713951:5AFSK1C7VNHSD7KRB97Y$uedata=s:%2Frd%2Fuedata%3Fld%26v%3D0.277997.0%26id%3D5AFSK1C7VNHSD7KRB97Y%26ctb%3D1%26sc0%3DjQueryPageShow%26cf0%3D18266%26pc0%3D18266%26ld0%3D18266%26t0%3D1707307460144%26pty%3DGateway%26spty%3Ddesktop%26pti%3Ddesktop%26tid%3D5AFSK1C7VNHSD7KRB97Y%26aftb%3D1%26lob%3D1:18265", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://www.amazon.com/", 
		"Snapshot=t19.inf", 
		LAST);

	web_url("ATVPDKIKX0DER:133-6658273-5713951:5AFSK1C7VNHSD7KRB97Y$uedata=s:%2Frd%2Fuedata%3Fat%26v%3D0.277997.0%26id%3D5AFSK1C7VNHSD7KRB97Y%26m%3D1%26sc%3Dcsa%3AmutObsActive%26pc%3D18543%26at%3D18544%26t%3D1707307460422%26csmtags%3DmutObsActive%26pty%3DGateway%26spty", 
		"URL=https://fls-na.amazon.com/1/batch/1/OP/ATVPDKIKX0DER:133-6658273-5713951:5AFSK1C7VNHSD7KRB97Y$uedata=s:%2Frd%2Fuedata%3Fat%26v%3D0.277997.0%26id%3D5AFSK1C7VNHSD7KRB97Y%26m%3D1%26sc%3Dcsa%3AmutObsActive%26pc%3D18543%26at%3D18544%26t%3D1707307460422%26csmtags%3DmutObsActive%26pty%3DGateway%26spty%3Ddesktop%26pti%3Ddesktop%26tid%3D5AFSK1C7VNHSD7KRB97Y%26aftb%3D1%26lob%3D1:18543", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://www.amazon.com/", 
		"Snapshot=t20.inf", 
		LAST);

	web_url("ATVPDKIKX0DER:133-6658273-5713951:5AFSK1C7VNHSD7KRB97Y$uedata=s:%2Frd%2Fuedata%3Fat%26v%3D0.277997.0%26id%3D5AFSK1C7VNHSD7KRB97Y%26m%3D1%26sc%3Dcsa%3Alcp%26lcp%3D524%26pc%3D18269%26at%3D18269%26t%3D1707307460147%26pty%3DGateway%26spty%3Ddesktop%26pti%3Ddes", 
		"URL=https://fls-na.amazon.com/1/batch/1/OP/ATVPDKIKX0DER:133-6658273-5713951:5AFSK1C7VNHSD7KRB97Y$uedata=s:%2Frd%2Fuedata%3Fat%26v%3D0.277997.0%26id%3D5AFSK1C7VNHSD7KRB97Y%26m%3D1%26sc%3Dcsa%3Alcp%26lcp%3D524%26pc%3D18269%26at%3D18269%26t%3D1707307460147%26pty%3DGateway%26spty%3Ddesktop%26pti%3Ddesktop%26tid%3D5AFSK1C7VNHSD7KRB97Y%26aftb%3D1%26lob%3D1:18268", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://www.amazon.com/", 
		"Snapshot=t21.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_custom_request("OE_2", 
		"URL=https://fls-na.amazon.com/1/batch/1/OE/", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=https://www.amazon.com/", 
		"Snapshot=t22.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"rid\":\"5AFSK1C7VNHSD7KRB97Y\",\"sid\":\"133-6658273-5713951\",\"mid\":\"ATVPDKIKX0DER\",\"sn\":\"www.amazon.com\",\"reqs\":[{\"jserr-rw\":{\"m\":\"deal-of-the-day: Image failed to load https://m.media-amazon.com/images/I/51YcLAPf4aL._AC_SY230_.jpg\",\"name\":\"Error\",\"csm\":\"v5 ueLogError stack\",\"logLevel\":\"ERROR\",\"attribution\":\"gatewayCardImageError\",\"pageURL\":\"https://www.amazon.com/\",\"f\":\"https://www.amazon.com/\",\"l\":\"172\",\"s\":[\"Error: Image failed to load "
		"https://m.media-amazon.com/images/I/51YcLAPf4aL._AC_SY230_.jpg\",\"at HTMLImageElement.d (https://www.amazon.com/:172:209)\"],\"t\":19807}},{\"csmcount\":{\"counter\":\"foresterPayloadSize\",\"t\":0,\"value\":640}}]}", 
		LAST);

	web_custom_request("OE_3", 
		"URL=https://fls-na.amazon.com/1/batch/1/OE/", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=https://www.amazon.com/", 
		"Snapshot=t23.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"rid\":\"5AFSK1C7VNHSD7KRB97Y\",\"sid\":\"133-6658273-5713951\",\"mid\":\"ATVPDKIKX0DER\",\"sn\":\"www.amazon.com\",\"reqs\":[{\"jserr-rw\":{\"m\":\"ameyal-product-shoveler: Image failed to load https://m.media-amazon.com/images/I/817Rqx4FHSL._AC_SY200_.jpg\",\"name\":\"Error\",\"csm\":\"v5 ueLogError stack\",\"logLevel\":\"ERROR\",\"attribution\":\"gatewayCardImageError\",\"pageURL\":\"https://www.amazon.com/\",\"f\":\"https://www.amazon.com/\",\"l\":\"172\",\"s\":[\"Error: Image failed to"
		" load https://m.media-amazon.com/images/I/817Rqx4FHSL._AC_SY200_.jpg\",\"at HTMLImageElement.d (https://www.amazon.com/:172:209)\"],\"t\":19807}},{\"csmcount\":{\"counter\":\"foresterPayloadSize\",\"t\":0,\"value\":648}}]}", 
		LAST);

	web_custom_request("OE_4", 
		"URL=https://fls-na.amazon.com/1/batch/1/OE/", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=https://www.amazon.com/", 
		"Snapshot=t24.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"rid\":\"5AFSK1C7VNHSD7KRB97Y\",\"sid\":\"133-6658273-5713951\",\"mid\":\"ATVPDKIKX0DER\",\"sn\":\"www.amazon.com\",\"reqs\":[{\"jserr-rw\":{\"m\":\"Hit Info\",\"csm\":\"v5 onerror\",\"logLevel\":\"INFO\",\"adb\":\"adblk_yes\"}},{\"csmcount\":{\"counter\":\"foresterPayloadSize\",\"t\":0,\"value\":260}}]}", 
		LAST);

	web_set_sockets_option("TLS_SNI", "0");

	web_custom_request("OE_5", 
		"URL=https://fls-na.amazon.com/1/batch/1/OE/", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=https://www.amazon.com/", 
		"Snapshot=t25.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"rid\":\"5AFSK1C7VNHSD7KRB97Y\",\"sid\":\"133-6658273-5713951\",\"mid\":\"ATVPDKIKX0DER\",\"sn\":\"www.amazon.com\",\"reqs\":[{\"jserr-rw\":{\"m\":\"cropped-image-link: Image failed to load https://m.media-amazon.com/images/I/61WSHXI4MjL._SX1500_.jpg\",\"name\":\"Error\",\"csm\":\"v5 ueLogError stack\",\"logLevel\":\"ERROR\",\"attribution\":\"gatewayCardImageError\",\"pageURL\":\"https://www.amazon.com/\",\"f\":\"https://www.amazon.com/\",\"l\":\"172\",\"s\":[\"Error: Image failed to load "
		"https://m.media-amazon.com/images/I/61WSHXI4MjL._SX1500_.jpg\",\"at HTMLImageElement.d (https://www.amazon.com/:172:209)\"],\"t\":19806}},{\"csmcount\":{\"counter\":\"foresterPayloadSize\",\"t\":0,\"value\":639}}]}", 
		LAST);

	web_custom_request("OE_6", 
		"URL=https://fls-na.amazon.com/1/batch/1/OE/", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=https://www.amazon.com/", 
		"Snapshot=t26.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"rid\":\"5AFSK1C7VNHSD7KRB97Y\",\"sid\":\"133-6658273-5713951\",\"mid\":\"ATVPDKIKX0DER\",\"sn\":\"www.amazon.com\",\"reqs\":[{\"jserr-rw\":{\"m\":\"ameyal-product-shoveler: Image failed to load https://m.media-amazon.com/images/I/817Rqx4FHSL._AC_SY200_.jpg\",\"name\":\"Error\",\"csm\":\"v5 ueLogError stack\",\"logLevel\":\"ERROR\",\"attribution\":\"gatewayCardImageError\",\"pageURL\":\"https://www.amazon.com/\",\"f\":\"https://www.amazon.com/\",\"l\":\"172\",\"s\":[\"Error: Image failed to"
		" load https://m.media-amazon.com/images/I/817Rqx4FHSL._AC_SY200_.jpg\",\"at HTMLImageElement.d (https://www.amazon.com/:172:209)\"],\"t\":19807}},{\"csmcount\":{\"counter\":\"foresterPayloadSize\",\"t\":0,\"value\":648}}]}", 
		LAST);

	web_custom_request("OE_7", 
		"URL=https://fls-na.amazon.com/1/batch/1/OE/", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=https://www.amazon.com/", 
		"Snapshot=t27.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"rid\":\"5AFSK1C7VNHSD7KRB97Y\",\"sid\":\"133-6658273-5713951\",\"mid\":\"ATVPDKIKX0DER\",\"sn\":\"www.amazon.com\",\"reqs\":[{\"jserr-rw\":{\"m\":\"ameyal-product-shoveler: Image failed to load https://m.media-amazon.com/images/I/817Rqx4FHSL._AC_SY200_.jpg\",\"name\":\"Error\",\"csm\":\"v5 ueLogError stack\",\"logLevel\":\"ERROR\",\"attribution\":\"gatewayCardImageError\",\"pageURL\":\"https://www.amazon.com/\",\"f\":\"https://www.amazon.com/\",\"l\":\"172\",\"s\":[\"Error: Image failed to"
		" load https://m.media-amazon.com/images/I/817Rqx4FHSL._AC_SY200_.jpg\",\"at HTMLImageElement.d (https://www.amazon.com/:172:209)\"],\"t\":19808}},{\"csmcount\":{\"counter\":\"foresterPayloadSize\",\"t\":0,\"value\":648}}]}", 
		LAST);

	web_custom_request("OE_8", 
		"URL=https://fls-na.amazon.com/1/batch/1/OE/", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=https://www.amazon.com/", 
		"Snapshot=t28.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"rid\":\"5AFSK1C7VNHSD7KRB97Y\",\"sid\":\"133-6658273-5713951\",\"mid\":\"ATVPDKIKX0DER\",\"sn\":\"www.amazon.com\",\"reqs\":[{\"jserr-rw\":{\"m\":\"ameyal-product-shoveler: Image failed to load https://m.media-amazon.com/images/I/817Rqx4FHSL._AC_SY200_.jpg\",\"name\":\"Error\",\"csm\":\"v5 ueLogError stack\",\"logLevel\":\"ERROR\",\"attribution\":\"gatewayCardImageError\",\"pageURL\":\"https://www.amazon.com/\",\"f\":\"https://www.amazon.com/\",\"l\":\"172\",\"s\":[\"Error: Image failed to"
		" load https://m.media-amazon.com/images/I/817Rqx4FHSL._AC_SY200_.jpg\",\"at HTMLImageElement.d (https://www.amazon.com/:172:209)\"],\"t\":19808}},{\"csmcount\":{\"counter\":\"foresterPayloadSize\",\"t\":0,\"value\":648}}]}", 
		LAST);

	web_custom_request("OE_9", 
		"URL=https://fls-na.amazon.com/1/batch/1/OE/", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=https://www.amazon.com/", 
		"Snapshot=t29.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"rid\":\"5AFSK1C7VNHSD7KRB97Y\",\"sid\":\"133-6658273-5713951\",\"mid\":\"ATVPDKIKX0DER\",\"sn\":\"www.amazon.com\",\"reqs\":[{\"jserr-rw\":{\"m\":\"ameyal-product-shoveler: Image failed to load https://m.media-amazon.com/images/I/817Rqx4FHSL._AC_SY200_.jpg\",\"name\":\"Error\",\"csm\":\"v5 ueLogError stack\",\"logLevel\":\"ERROR\",\"attribution\":\"gatewayCardImageError\",\"pageURL\":\"https://www.amazon.com/\",\"f\":\"https://www.amazon.com/\",\"l\":\"172\",\"s\":[\"Error: Image failed to"
		" load https://m.media-amazon.com/images/I/817Rqx4FHSL._AC_SY200_.jpg\",\"at HTMLImageElement.d (https://www.amazon.com/:172:209)\"],\"t\":19808}},{\"csmcount\":{\"counter\":\"foresterPayloadSize\",\"t\":0,\"value\":648}}]}", 
		LAST);

	web_custom_request("OE_10", 
		"URL=https://fls-na.amazon.com/1/batch/1/OE/", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=https://www.amazon.com/", 
		"Snapshot=t30.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"rid\":\"5AFSK1C7VNHSD7KRB97Y\",\"sid\":\"133-6658273-5713951\",\"mid\":\"ATVPDKIKX0DER\",\"sn\":\"www.amazon.com\",\"reqs\":[{\"jserr-rw\":{\"m\":\"ameyal-product-shoveler: Image failed to load https://m.media-amazon.com/images/I/817Rqx4FHSL._AC_SY200_.jpg\",\"name\":\"Error\",\"csm\":\"v5 ueLogError stack\",\"logLevel\":\"ERROR\",\"attribution\":\"gatewayCardImageError\",\"pageURL\":\"https://www.amazon.com/\",\"f\":\"https://www.amazon.com/\",\"l\":\"172\",\"s\":[\"Error: Image failed to"
		" load https://m.media-amazon.com/images/I/817Rqx4FHSL._AC_SY200_.jpg\",\"at HTMLImageElement.d (https://www.amazon.com/:172:209)\"],\"t\":19808}},{\"csmcount\":{\"counter\":\"foresterPayloadSize\",\"t\":0,\"value\":648}}]}", 
		LAST);

	web_custom_request("OE_11", 
		"URL=https://fls-na.amazon.com/1/batch/1/OE/", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=https://www.amazon.com/", 
		"Snapshot=t31.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"rid\":\"5AFSK1C7VNHSD7KRB97Y\",\"sid\":\"133-6658273-5713951\",\"mid\":\"ATVPDKIKX0DER\",\"sn\":\"www.amazon.com\",\"reqs\":[{\"jserr-rw\":{\"m\":\"ameyal-product-shoveler: Image failed to load https://m.media-amazon.com/images/I/817Rqx4FHSL._AC_SY200_.jpg\",\"name\":\"Error\",\"csm\":\"v5 ueLogError stack\",\"logLevel\":\"ERROR\",\"attribution\":\"gatewayCardImageError\",\"pageURL\":\"https://www.amazon.com/\",\"f\":\"https://www.amazon.com/\",\"l\":\"172\",\"s\":[\"Error: Image failed to"
		" load https://m.media-amazon.com/images/I/817Rqx4FHSL._AC_SY200_.jpg\",\"at HTMLImageElement.d (https://www.amazon.com/:172:209)\"],\"t\":19808}},{\"csmcount\":{\"counter\":\"foresterPayloadSize\",\"t\":0,\"value\":648}}]}", 
		LAST);

	web_custom_request("OE_12", 
		"URL=https://fls-na.amazon.com/1/batch/1/OE/", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=https://www.amazon.com/", 
		"Snapshot=t32.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"rid\":\"5AFSK1C7VNHSD7KRB97Y\",\"sid\":\"133-6658273-5713951\",\"mid\":\"ATVPDKIKX0DER\",\"sn\":\"www.amazon.com\",\"reqs\":[{\"jserr-rw\":{\"m\":\"ameyal-product-shoveler: Image failed to load https://m.media-amazon.com/images/I/71yC2YaA8cL._AC_SY200_.jpg\",\"name\":\"Error\",\"csm\":\"v5 ueLogError stack\",\"logLevel\":\"ERROR\",\"attribution\":\"gatewayCardImageError\",\"pageURL\":\"https://www.amazon.com/\",\"f\":\"https://www.amazon.com/\",\"l\":\"172\",\"s\":[\"Error: Image failed to"
		" load https://m.media-amazon.com/images/I/71yC2YaA8cL._AC_SY200_.jpg\",\"at HTMLImageElement.d (https://www.amazon.com/:172:209)\"],\"t\":19808}},{\"csmcount\":{\"counter\":\"foresterPayloadSize\",\"t\":0,\"value\":648}}]}", 
		LAST);

	web_custom_request("OE_13", 
		"URL=https://fls-na.amazon.com/1/batch/1/OE/", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=https://www.amazon.com/", 
		"Snapshot=t33.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"rid\":\"5AFSK1C7VNHSD7KRB97Y\",\"sid\":\"133-6658273-5713951\",\"mid\":\"ATVPDKIKX0DER\",\"sn\":\"www.amazon.com\",\"reqs\":[{\"jserr-rw\":{\"m\":\"ameyal-product-shoveler: Image failed to load https://m.media-amazon.com/images/I/71yC2YaA8cL._AC_SY200_.jpg\",\"name\":\"Error\",\"csm\":\"v5 ueLogError stack\",\"logLevel\":\"ERROR\",\"attribution\":\"gatewayCardImageError\",\"pageURL\":\"https://www.amazon.com/\",\"f\":\"https://www.amazon.com/\",\"l\":\"172\",\"s\":[\"Error: Image failed to"
		" load https://m.media-amazon.com/images/I/71yC2YaA8cL._AC_SY200_.jpg\",\"at HTMLImageElement.d (https://www.amazon.com/:172:209)\"],\"t\":19809}},{\"csmcount\":{\"counter\":\"foresterPayloadSize\",\"t\":0,\"value\":648}}]}", 
		LAST);

	web_concurrent_start(NULL);

	web_url("ATVPDKIKX0DER:133-6658273-5713951:5AFSK1C7VNHSD7KRB97Y$uedata=s:%2Frd%2Fuedata%3Fat%26v%3D0.277997.0%26id%3D5AFSK1C7VNHSD7KRB97Y%26ctb%3D1%26m%3D1%26sc%3D5AFSK1C7VNHSD7KRB97Y%26pc%3D20545%26at%3D20545%26t%3D1707307462423%26csmtags%3Dcsm-feature-touch-enabl", 
		"URL=https://fls-na.amazon.com/1/batch/1/OP/ATVPDKIKX0DER:133-6658273-5713951:5AFSK1C7VNHSD7KRB97Y$uedata=s:%2Frd%2Fuedata%3Fat%26v%3D0.277997.0%26id%3D5AFSK1C7VNHSD7KRB97Y%26ctb%3D1%26m%3D1%26sc%3D5AFSK1C7VNHSD7KRB97Y%26pc%3D20545%26at%3D20545%26t%3D1707307462423%26csmtags%3Dcsm-feature-touch-enabled%3Afalse%26pty%3DGateway%26spty%3Ddesktop%26pti%3Ddesktop%26tid%3D5AFSK1C7VNHSD7KRB97Y%26aftb%3D1%26lob%3D1:20545", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://www.amazon.com/", 
		"Snapshot=t34.inf", 
		LAST);

	web_url("ATVPDKIKX0DER:133-6658273-5713951:5AFSK1C7VNHSD7KRB97Y$uedata=s:%2Frd%2Fuedata%3Fat%26v%3D0.277997.0%26id%3D5AFSK1C7VNHSD7KRB97Y%26ctb%3D1%26m%3D1%26sc%3D5AFSK1C7VNHSD7KRB97Y%26pc%3D20577%26at%3D20577%26t%3D1707307462455%26pty%3DGateway%26spty%3Ddesktop%26", 
		"URL=https://fls-na.amazon.com/1/batch/1/OP/ATVPDKIKX0DER:133-6658273-5713951:5AFSK1C7VNHSD7KRB97Y$uedata=s:%2Frd%2Fuedata%3Fat%26v%3D0.277997.0%26id%3D5AFSK1C7VNHSD7KRB97Y%26ctb%3D1%26m%3D1%26sc%3D5AFSK1C7VNHSD7KRB97Y%26pc%3D20577%26at%3D20577%26t%3D1707307462455%26pty%3DGateway%26spty%3Ddesktop%26pti%3Ddesktop%26tid%3D5AFSK1C7VNHSD7KRB97Y%26aftb%3D1%26ui%3D2%26lob%3D1:20576", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://www.amazon.com/", 
		"Snapshot=t35.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_custom_request("OE_14", 
		"URL=https://fls-na.amazon.com/1/batch/1/OE/", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=https://www.amazon.com/", 
		"Snapshot=t36.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"rid\":\"5AFSK1C7VNHSD7KRB97Y\",\"sid\":\"133-6658273-5713951\",\"mid\":\"ATVPDKIKX0DER\",\"sn\":\"www.amazon.com\",\"reqs\":[{\"jserr-rw\":{\"m\":\"ameyal-product-shoveler: Image failed to load https://m.media-amazon.com/images/I/71yC2YaA8cL._AC_SY200_.jpg\",\"name\":\"Error\",\"csm\":\"v5 ueLogError stack\",\"logLevel\":\"ERROR\",\"attribution\":\"gatewayCardImageError\",\"pageURL\":\"https://www.amazon.com/\",\"f\":\"https://www.amazon.com/\",\"l\":\"172\",\"s\":[\"Error: Image failed to"
		" load https://m.media-amazon.com/images/I/71yC2YaA8cL._AC_SY200_.jpg\",\"at HTMLImageElement.d (https://www.amazon.com/:172:209)\"],\"t\":19809}},{\"csmcount\":{\"counter\":\"foresterPayloadSize\",\"t\":0,\"value\":648}}]}", 
		LAST);

	web_custom_request("OE_15", 
		"URL=https://fls-na.amazon.com/1/batch/1/OE/", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=https://www.amazon.com/", 
		"Snapshot=t37.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"rid\":\"5AFSK1C7VNHSD7KRB97Y\",\"sid\":\"133-6658273-5713951\",\"mid\":\"ATVPDKIKX0DER\",\"sn\":\"www.amazon.com\",\"reqs\":[{\"jserr-rw\":{\"m\":\"ameyal-product-shoveler: Image failed to load https://m.media-amazon.com/images/I/71yC2YaA8cL._AC_SY200_.jpg\",\"name\":\"Error\",\"csm\":\"v5 ueLogError stack\",\"logLevel\":\"ERROR\",\"attribution\":\"gatewayCardImageError\",\"pageURL\":\"https://www.amazon.com/\",\"f\":\"https://www.amazon.com/\",\"l\":\"172\",\"s\":[\"Error: Image failed to"
		" load https://m.media-amazon.com/images/I/71yC2YaA8cL._AC_SY200_.jpg\",\"at HTMLImageElement.d (https://www.amazon.com/:172:209)\"],\"t\":19809}},{\"csmcount\":{\"counter\":\"foresterPayloadSize\",\"t\":0,\"value\":648}}]}", 
		LAST);

	web_custom_request("OE_16", 
		"URL=https://fls-na.amazon.com/1/batch/1/OE/", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=https://www.amazon.com/", 
		"Snapshot=t38.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"rid\":\"5AFSK1C7VNHSD7KRB97Y\",\"sid\":\"133-6658273-5713951\",\"mid\":\"ATVPDKIKX0DER\",\"sn\":\"www.amazon.com\",\"reqs\":[{\"jserr-rw\":{\"m\":\"ameyal-product-shoveler: Image failed to load https://m.media-amazon.com/images/I/71yC2YaA8cL._AC_SY200_.jpg\",\"name\":\"Error\",\"csm\":\"v5 ueLogError stack\",\"logLevel\":\"ERROR\",\"attribution\":\"gatewayCardImageError\",\"pageURL\":\"https://www.amazon.com/\",\"f\":\"https://www.amazon.com/\",\"l\":\"172\",\"s\":[\"Error: Image failed to"
		" load https://m.media-amazon.com/images/I/71yC2YaA8cL._AC_SY200_.jpg\",\"at HTMLImageElement.d (https://www.amazon.com/:172:209)\"],\"t\":19809}},{\"csmcount\":{\"counter\":\"foresterPayloadSize\",\"t\":0,\"value\":648}}]}", 
		LAST);

	web_custom_request("OE_17", 
		"URL=https://fls-na.amazon.com/1/batch/1/OE/", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=https://www.amazon.com/", 
		"Snapshot=t39.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"rid\":\"5AFSK1C7VNHSD7KRB97Y\",\"sid\":\"133-6658273-5713951\",\"mid\":\"ATVPDKIKX0DER\",\"sn\":\"www.amazon.com\",\"reqs\":[{\"jserr-rw\":{\"m\":\"ameyal-product-shoveler: Image failed to load https://m.media-amazon.com/images/I/71yC2YaA8cL._AC_SY200_.jpg\",\"name\":\"Error\",\"csm\":\"v5 ueLogError stack\",\"logLevel\":\"ERROR\",\"attribution\":\"gatewayCardImageError\",\"pageURL\":\"https://www.amazon.com/\",\"f\":\"https://www.amazon.com/\",\"l\":\"172\",\"s\":[\"Error: Image failed to"
		" load https://m.media-amazon.com/images/I/71yC2YaA8cL._AC_SY200_.jpg\",\"at HTMLImageElement.d (https://www.amazon.com/:172:209)\"],\"t\":19809}},{\"csmcount\":{\"counter\":\"foresterPayloadSize\",\"t\":0,\"value\":648}}]}", 
		LAST);

	web_custom_request("OE_18", 
		"URL=https://fls-na.amazon.com/1/batch/1/OE/", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=https://www.amazon.com/", 
		"Snapshot=t40.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"rid\":\"5AFSK1C7VNHSD7KRB97Y\",\"sid\":\"133-6658273-5713951\",\"mid\":\"ATVPDKIKX0DER\",\"sn\":\"www.amazon.com\",\"reqs\":[{\"jserr-rw\":{\"m\":\"ameyal-product-shoveler: Image failed to load https://m.media-amazon.com/images/I/71yC2YaA8cL._AC_SY200_.jpg\",\"name\":\"Error\",\"csm\":\"v5 ueLogError stack\",\"logLevel\":\"ERROR\",\"attribution\":\"gatewayCardImageError\",\"pageURL\":\"https://www.amazon.com/\",\"f\":\"https://www.amazon.com/\",\"l\":\"172\",\"s\":[\"Error: Image failed to"
		" load https://m.media-amazon.com/images/I/71yC2YaA8cL._AC_SY200_.jpg\",\"at HTMLImageElement.d (https://www.amazon.com/:172:209)\"],\"t\":19809}},{\"csmcount\":{\"counter\":\"foresterPayloadSize\",\"t\":0,\"value\":648}}]}", 
		LAST);

	web_custom_request("OE_19", 
		"URL=https://fls-na.amazon.com/1/batch/1/OE/", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=https://www.amazon.com/", 
		"Snapshot=t41.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"rid\":\"5AFSK1C7VNHSD7KRB97Y\",\"sid\":\"133-6658273-5713951\",\"mid\":\"ATVPDKIKX0DER\",\"sn\":\"www.amazon.com\",\"reqs\":[{\"jserr-rw\":{\"m\":\"ameyal-product-shoveler: Image failed to load https://m.media-amazon.com/images/I/71+CaUj9EtL._AC_SY200_.jpg\",\"name\":\"Error\",\"csm\":\"v5 ueLogError stack\",\"logLevel\":\"ERROR\",\"attribution\":\"gatewayCardImageError\",\"pageURL\":\"https://www.amazon.com/\",\"f\":\"https://www.amazon.com/\",\"l\":\"172\",\"s\":[\"Error: Image failed to"
		" load https://m.media-amazon.com/images/I/71+CaUj9EtL._AC_SY200_.jpg\",\"at HTMLImageElement.d (https://www.amazon.com/:172:209)\"],\"t\":19809}},{\"csmcount\":{\"counter\":\"foresterPayloadSize\",\"t\":0,\"value\":648}}]}", 
		LAST);

	web_custom_request("com.amazon.csm.csa.prod", 
		"URL=https://unagi.amazon.com/1/events/com.amazon.csm.csa.prod", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.amazon.com/", 
		"Snapshot=t42.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"events\":[{\"data\":{\"id\":\"y45xqs-v4tsc7-d3onkb-o8oc8f\",\"producerId\":\"csa\",\"schemaId\":\"csa.PageEntity.2\",\"version\":1,\"attributes\":{\"id\":\"y45xqs-v4tsc7-d3onkb-o8oc8f\",\"requestId\":\"5AFSK1C7VNHSD7KRB97Y\",\"meaningful\":\"interactive\",\"url\":\"https://www.amazon.com/\",\"server\":\"www.amazon.com\",\"path\":\"/\",\"referrer\":\"\",\"title\":\"Amazon.com. Spend less. Smile more.\",\"transitionType\":\"hard\"},\"timestamp\":\"2024-02-07T12:04:02.204Z\",\"messageId\":\""
		"6z2c73-o5s1ss-4l9v7o-9jrmq5\",\"application\":\"Retail:Prod:www.amazon.com\",\"obfuscatedMarketplaceId\":\"ATVPDKIKX0DER\",\"lob\":\"1\"}},{\"data\":{\"transitionType\":\"hard\",\"schemaId\":\"csa.PageRender.4\",\"timestamp\":\"2024-02-07T12:04:02.204Z\",\"messageId\":\"140din-z8lr5g-4sgvdg-vhx4g0\",\"application\":\"Retail:Prod:www.amazon.com\",\"obfuscatedMarketplaceId\":\"ATVPDKIKX0DER\",\"lob\":\"1\",\"producerId\":\"csa\",\"entities\":{\"page\":{\"id\":\"y45xqs-v4tsc7-d3onkb-o8oc8f\",\""
		"requestId\":\"5AFSK1C7VNHSD7KRB97Y\",\"meaningful\":\"interactive\",\"url\":\"https://www.amazon.com/\",\"server\":\"www.amazon.com\",\"path\":\"/\",\"referrer\":\"\",\"title\":\"Amazon.com. Spend less. Smile more.\",\"transitionType\":\"hard\"},\"session\":{\"id\":\"133-6658273-5713951\"}}}},{\"data\":{\"messageId\":\"80crc5-9s2nz9-qmqvnl-ih2a9x\",\"schemaId\":\"csa.InternalCounters.3\",\"c\":{\"baselineCounter2\":{\"f\":1},\"nexusBaselineCounter\":{\"f\":1},\"CSMLibrarySize\":{\"f\":10157,\"s\""
		":111115,\"l\":81324,\"c\":4},\"aui:hiResDesktop\":{\"f\":0},\"aui:pagejs:pkgExecTime\":{\"f\":6.199999999953434},\"aui:resource_count\":{\"f\":1,\"s\":15,\"l\":5,\"c\":5},\"aui:sw:sw_message_no_ctrl\":{\"f\":1},\"csm.cookieSize\":{\"f\":88},\"gw-preload-img\":{\"f\":1},\"gatewayCardImage\":{\"f\":1,\"s\":3321,\"l\":81,\"c\":81},\"gatewayCardInstrumentationFail\":{\"f\":1},\"totalImages\":{\"f\":88},\"Event:csm.CSMBaselineEvent.4\":{\"f\":1},\"aui:sw:ppft:error:no_ctrl\":{\"f\":1},\""
		"gatewayCardImageError\":{\"f\":1,\"s\":1326,\"l\":51,\"c\":51},\"NavJS:CSM:Latency:PreloadSprite:desktop\":{\"f\":327},\"aui:resource_retry\":{\"f\":1},\"aui:resource_error\":{\"f\":1},\"postbackImageSize\":{\"f\":755}},\"timestamp\":\"2024-02-07T12:04:02.792Z\",\"application\":\"Retail:Prod:www.amazon.com\",\"obfuscatedMarketplaceId\":\"ATVPDKIKX0DER\",\"lob\":\"1\",\"producerId\":\"csa\",\"entities\":{\"page\":{\"id\":\"y45xqs-v4tsc7-d3onkb-o8oc8f\",\"requestId\":\"5AFSK1C7VNHSD7KRB97Y\"},\""
		"session\":{\"id\":\"133-6658273-5713951\"}}}},{\"data\":{\"schemaId\":\"robotdetection.RdCSI.1\",\"eventType\":\"sci\",\"clientData\":{\"h\":\"720\"},\"timestamp\":\"2024-02-07T12:04:02.474Z\",\"messageId\":\"l3ktcy-aecfxm-y5gu70-3w6vfm\",\"application\":\"Retail:Prod:www.amazon.com\",\"obfuscatedMarketplaceId\":\"ATVPDKIKX0DER\",\"producerId\":\"robotdetection\",\"entities\":{\"page\":{\"id\":\"y45xqs-v4tsc7-d3onkb-o8oc8f\",\"requestId\":\"5AFSK1C7VNHSD7KRB97Y\"},\"session\":{\"id\":\""
		"133-6658273-5713951\"}}}},{\"data\":{\"schemaId\":\"robotdetection.RdCSI.1\",\"eventType\":\"vpi\",\"clientData\":{\"t\":\"595\",\"h\":\"541\",\"y\":\"0\",\"w\":\"1280\",\"x\":\"0\"},\"timestamp\":\"2024-02-07T12:04:02.474Z\",\"messageId\":\"wareh0-wjn50f-pyw1bv-23quzk\",\"application\":\"Retail:Prod:www.amazon.com\",\"obfuscatedMarketplaceId\":\"ATVPDKIKX0DER\",\"producerId\":\"robotdetection\",\"entities\":{\"page\":{\"id\":\"y45xqs-v4tsc7-d3onkb-o8oc8f\",\"requestId\":\"5AFSK1C7VNHSD7KRB97Y\"},"
		"\"session\":{\"id\":\"133-6658273-5713951\"}}}},{\"data\":{\"id\":\"y45xqs-v4tsc7-d3onkb-o8oc8f\",\"producerId\":\"csa\",\"schemaId\":\"csa.PageEntity.2\",\"version\":2,\"attributes\":{\"id\":\"y45xqs-v4tsc7-d3onkb-o8oc8f\",\"requestId\":\"5AFSK1C7VNHSD7KRB97Y\",\"meaningful\":\"interactive\",\"url\":\"https://www.amazon.com/\",\"server\":\"www.amazon.com\",\"path\":\"/\",\"referrer\":\"\",\"title\":\"Amazon.com. Spend less. Smile more.\",\"transitionType\":\"hard\",\"pageType\":\"Gateway\",\""
		"subPageType\":\"desktop\",\"pageTypeId\":\"desktop\"},\"timestamp\":\"2024-02-07T12:04:02.477Z\",\"messageId\":\"mncqhj-qgixgu-vrp72g-at1n2v\",\"application\":\"Retail:Prod:www.amazon.com\",\"obfuscatedMarketplaceId\":\"ATVPDKIKX0DER\",\"lob\":\"1\"}},{\"data\":{\"messageId\":\"aycubl-1j1lir-lyjswz-irsmwd\",\"markers\":{\"pageVisible\":0,\"cumulativeLayoutShiftLastTimestamp\":0,\"ue\":4201,\"bodyBegin\":4504,\"ns\":4526,\"bodyEnd\":4791,\"firstPaint\":4622,\"firstContentfulPaint\":4622,\"pc\""
		":22422,\"tc\":0,\"na_\":0,\"ul_\":22429,\"_ul\":22429,\"rd_\":22429,\"_rd\":22429,\"fe_\":135,\"lk_\":1255,\"_lk\":1255,\"co_\":1255,\"_co\":2810,\"sc_\":1362,\"rq_\":2812,\"rs_\":4157,\"_rs\":4409,\"dl_\":4191,\"di_\":5125,\"de_\":5126,\"_de\":5126,\"_dc\":22422,\"ld_\":22422,\"_ld\":22429,\"ntd\":4198,\"ty\":4198,\"rc\":4198,\"hob\":4200,\"hoe\":4202,\"loaded\":22424,\"navigationStart\":0,\"fetchStart\":135,\"domainLookupStart\":1255,\"domainLookupEnd\":1255,\"connectStart\":1255,\"connectEnd\""
		":2810,\"secureConnectionStart\":1362,\"requestStart\":2812,\"responseStart\":4157,\"responseEnd\":4409,\"domLoading\":4191,\"domInteractive\":5125,\"domContentLoadedEventStart\":5126,\"domContentLoadedEventEnd\":5126,\"domComplete\":22422,\"loadEventStart\":22422},\"markerTimestamps\":{\"pageVisible\":1707307437680,\"cumulativeLayoutShiftLastTimestamp\":1707307437680,\"ue\":1707307441881,\"bodyBegin\":1707307442184,\"ns\":1707307442206,\"bodyEnd\":1707307442471,\"firstPaint\":1707307442302,\""
		"firstContentfulPaint\":1707307442302,\"pc\":1707307460102,\"tc\":1707307437680,\"na_\":1707307437680,\"ul_\":1707307460109,\"_ul\":1707307460109,\"rd_\":1707307460109,\"_rd\":1707307460109,\"fe_\":1707307437815,\"lk_\":1707307438935,\"_lk\":1707307438935,\"co_\":1707307438935,\"_co\":1707307440490,\"sc_\":1707307439042,\"rq_\":1707307440492,\"rs_\":1707307441837,\"_rs\":1707307442089,\"dl_\":1707307441871,\"di_\":1707307442805,\"de_\":1707307442806,\"_de\":1707307442806,\"_dc\":1707307460102,\""
		"ld_\":1707307460102,\"_ld\":1707307460109,\"ntd\":1707307441878,\"ty\":1707307441878,\"rc\":1707307441878,\"hob\":1707307441880,\"hoe\":1707307441882,\"loaded\":1707307460104,\"navigationStart\":1707307437680,\"fetchStart\":1707307437815,\"domainLookupStart\":1707307438935,\"domainLookupEnd\":1707307438935,\"connectStart\":1707307438935,\"connectEnd\":1707307440490,\"secureConnectionStart\":1707307439042,\"requestStart\":1707307440492,\"responseStart\":1707307441837,\"responseEnd\":1707307442089,"
		"\"domLoading\":1707307441871,\"domInteractive\":1707307442805,\"domContentLoadedEventStart\":1707307442806,\"domContentLoadedEventEnd\":1707307442806,\"domComplete\":1707307460102,\"loadEventStart\":1707307460102},\"navigationStartTimestamp\":\"2024-02-07T12:03:57.680Z\",\"schemaId\":\"csa.PageLatency.6\",\"timestamp\":\"2024-02-07T12:04:02.478Z\",\"application\":\"Retail:Prod:www.amazon.com\",\"obfuscatedMarketplaceId\":\"ATVPDKIKX0DER\",\"lob\":\"1\",\"producerId\":\"csa\",\"entities\":{\"page\""
		":{\"id\":\"y45xqs-v4tsc7-d3onkb-o8oc8f\",\"requestId\":\"5AFSK1C7VNHSD7KRB97Y\",\"pageType\":\"Gateway\",\"subPageType\":\"desktop\"},\"session\":{\"id\":\"133-6658273-5713951\"}}}},{\"data\":{\"messageId\":\"ljut8k-ln8ps1-nde0tq-g73z5t\",\"schemaId\":\"csa.Metric.4\",\"metrics\":{\"baselineMetricEvent\":1},\"dimensions\":{},\"timestamp\":\"2024-02-07T12:04:02.478Z\",\"application\":\"Retail:Prod:www.amazon.com\",\"obfuscatedMarketplaceId\":\"ATVPDKIKX0DER\",\"lob\":\"1\",\"producerId\":\"csa\",\""
		"entities\":{\"page\":{\"id\":\"y45xqs-v4tsc7-d3onkb-o8oc8f\",\"requestId\":\"5AFSK1C7VNHSD7KRB97Y\",\"pageType\":\"Gateway\",\"subPageType\":\"desktop\"},\"session\":{\"id\":\"133-6658273-5713951\"}}}},{\"data\":{\"navigation\":{\"type\":\"new-tab\",\"toTabId\":\"y45xqs-v4tsc7-d3onkb-o8oc8f\",\"toPageId\":\"y45xqs-v4tsc7-d3onkb-o8oc8f\",\"transitTime\":null},\"schemaId\":\"csa.TabbedBrowsing.3\",\"timestamp\":\"2024-02-07T12:04:02.684Z\",\"messageId\":\"hqvcx6-x299np-e3eeb9-jf35z3\",\"application"
		"\":\"Retail:Prod:www.amazon.com\",\"obfuscatedMarketplaceId\":\"ATVPDKIKX0DER\",\"lob\":\"1\",\"producerId\":\"csa\",\"entities\":{\"page\":{\"id\":\"y45xqs-v4tsc7-d3onkb-o8oc8f\",\"requestId\":\"5AFSK1C7VNHSD7KRB97Y\",\"pageType\":\"Gateway\",\"subPageType\":\"desktop\"},\"session\":{\"id\":\"133-6658273-5713951\"}}}},{\"data\":{\"network\":{\"downlink\":\"10\",\"downlinkMax\":\"null\",\"rtt\":\"200\",\"type\":\"null\",\"effectiveType\":\"4g\",\"saveData\":\"false\"},\"language\":\"en-GB\",\""
		"doNotTrack\":null,\"hardwareConcurrency\":4,\"deviceMemory\":8,\"cookieEnabled\":true,\"webdriver\":false,\"schemaId\":\"csa.Navigator.5\",\"timestamp\":\"2024-02-07T12:04:02.778Z\",\"messageId\":\"z3avos-gare2q-ddxa7d-jk6tuj\",\"application\":\"Retail:Prod:www.amazon.com\",\"obfuscatedMarketplaceId\":\"ATVPDKIKX0DER\",\"lob\":\"1\",\"producerId\":\"csa\",\"entities\":{\"page\":{\"id\":\"y45xqs-v4tsc7-d3onkb-o8oc8f\",\"requestId\":\"5AFSK1C7VNHSD7KRB97Y\",\"pageType\":\"Gateway\",\"subPageType\":"
		"\"desktop\"},\"session\":{\"id\":\"133-6658273-5713951\"}}}},{\"data\":{\"messageId\":\"t8cncj-2kw2fx-6adg4v-yh7wso\",\"schemaId\":\"csa.ContentInteractionsSummary.2\",\"w\":{\"vbopwz-oyyiqe-v63gb2-x54s73\":{\"sid\":\"Navigation-desktop-navbar\",\"ttfv\":965,\"it0\":12401,\"it50\":12401,\"it100\":12402},\"ns5rja-2pkead-n95e5e-m01txx\":{\"sid\":\"desktop-hero-order\",\"ttfv\":965,\"it0\":12401,\"it50\":12401,\"it100\":12402},\"fu7bue-wtzqip-zk9ll-9kqpu9\":{\"sid\":\"gw-ftGr-desktop-hero-1\",\"cid\""
		":\"amzn1.sym.9cbb6960-2ff9-41e4-94ff-32680c208d5a\",\"ttfv\":966,\"it0\":12400,\"it50\":12400},\"qiwags-4e0xrb-bn23gs-br61gm\":{\"sid\":\"gw-ftGr-desktop-hero-2\",\"cid\":\"amzn1.sym.c55a304a-3dad-4d6d-84b9-e7859e5a0bbb\"},\"7y4zel-v9ptvy-u2wpog-jyr7w8\":{\"sid\":\"gw-ftGr-desktop-hero-3\",\"cid\":\"amzn1.sym.6bd9a83c-3722-4f5c-a531-ccf7a3d8e6a6\"},\"avr8rd-kpv3ca-o4fo8o-odx562\":{\"sid\":\"gw-ftGr-desktop-hero-4\",\"cid\":\"amzn1.sym.73d958bd-6ca7-46ff-8084-5fcdad211985\"},\""
		"y8oqno-ty6ueo-8zvfz4-uqaqqk\":{\"sid\":\"gw-ftGr-desktop-hero-5\",\"cid\":\"amzn1.sym.35d2e3e7-d6d6-40a8-b160-754a6a92c950\"},\"e87vuj-rwq7bj-7vzmg8-m9g8fi\":{\"sid\":\"gw-ftGr-desktop-hero-6\",\"cid\":\"amzn1.sym.be1f9daf-4d19-45c4-80a8-9f43dc62cb2d\"},\"fjit4a-xp14gu-8503i0-w47emn\":{\"sid\":\"gw-ftGr-desktop-hero-7\",\"cid\":\"amzn1.sym.0044bffe-bf18-49f9-8d38-b2cc8858b52f\"},\"2w7gsr-omf8an-xskpxz-qnj8ua\":{\"sid\":\"desktop-banner-stripe\",\"cid\":\""
		"amzn1.sym.ad7e52ed-7e0b-44e3-85c1-b8a893426b20\",\"ttfv\":966,\"it0\":12400,\"it50\":12400,\"it100\":12401},\"eizs84-2yco1r-vquque-we3yzq\":{\"sid\":\"desktop-grid-1\",\"cid\":\"amzn1.sym.12129333-2117-4490-9c17-6d31baf0582a\",\"ttfv\":966,\"it0\":12400},\"z2we0i-y21n32-nrmvry-tuv69k\":{\"sid\":\"desktop-grid-2\",\"cid\":\"amzn1.sym.7acbca95-6949-4783-9691-9ac9df8021d9\",\"ttfv\":966,\"it0\":12400},\"qd56tg-ru5qqr-c7bpcz-c200y3\":{\"sid\":\"desktop-grid-3\",\"cid\":\""
		"amzn1.sym.3a6a1f11-a96c-444b-b219-97322616eb92\",\"ttfv\":966,\"it0\":12400},\"e72icp-oh4epu-5rchz3-f0pato\":{\"sid\":\"desktop-grid-4\",\"cid\":\"amzn1.sym.c0480761-6b7c-400b-bca5-28ff417248d1\",\"ttfv\":966,\"it0\":12400},\"8d03ns-96phck-62ja6t-761orr\":{\"sid\":\"desktop-grid-5\",\"cid\":\"amzn1.sym.def2f06c-d9a7-4927-8433-aa333a9fca53\"},\"bekh4n-w540w7-b6ul7p-gsalv3\":{\"sid\":\"desktop-grid-6\",\"cid\":\"amzn1.sym.44da4965-9668-4613-bec2-a3a75f0c2ad4\"},\"qoh0x5-28di6v-bhz533-8693t5\":{\""
		"sid\":\"desktop-grid-7\",\"cid\":\"amzn1.sym.3508909d-dd9f-4fa2-80be-54ce8f44ff31\"},\"i4kbfu-1mvham-rntsq9-elmhy4\":{\"sid\":\"desktop-grid-8\",\"cid\":\"amzn1.sym.bebfcdc6-3b0c-41d3-9614-a84df9834c05\"},\"xz1ujr-r9buvo-lfhnzg-x8rtql\":{\"sid\":\"desktop-1\",\"cid\":\"amzn1.sym.7106ac9d-8af2-40c0-8368-9e5c34686062\"},\"ime3gr-f0f18n-z3gq96-615ltp\":{\"sid\":\"desktop-2\",\"cid\":\"amzn1.sym.ba25a0fb-eeb9-4762-9c76-8ca869df5234\"},\"ef7k4w-7osebo-29jtqa-f1mhmc\":{\"sid\":\"desktop-btf-grid-1\",\""
		"cid\":\"amzn1.sym.33f8f65b-b95c-44af-8b89-e59e69e79828\"},\"9l5hag-mp40ae-4jlx8b-nslw5s\":{\"sid\":\"desktop-btf-grid-2\",\"cid\":\"amzn1.sym.09483392-9ac6-434a-a3d7-39d83662f54a\"},\"8856q7-6qcl9e-ntfqzj-8fvrdl\":{\"sid\":\"desktop-btf-grid-3\",\"cid\":\"amzn1.sym.4b335ede-a344-46a5-af28-95a1242a7034\"},\"j683j8-wcz529-q3iig1-gz13qm\":{\"sid\":\"desktop-btf-grid-4\",\"cid\":\"amzn1.sym.6fb11530-aa4d-4809-af57-61c93f9fed0b\"},\"1d760i-upgmz4-8bwe8n-i2q15u\":{\"sid\":\"desktop-3\",\"cid\":\""
		"amzn1.sym.9929d3ab-edb7-4ef5-a232-26d90f828fa5\"},\"n9w2l7-abwtqp-po9o46-pqwnrg\":{\"sid\":\"desktop-4\",\"cid\":\"amzn1.sym.81a68cec-8afc-4296-99f7-78cf5ddc15b5\"},\"1ti0i7-vz066s-xat062-uj86d1\":{\"sid\":\"desktop-btf-grid-5\",\"cid\":\"amzn1.sym.7d5cde1d-b3d4-4ca8-a1cf-489ba1530c6b\"},\"n16zyj-1ehnkh-9dg92n-fxb552\":{\"sid\":\"desktop-btf-grid-6\",\"cid\":\"amzn1.sym.6150d902-4be3-4eda-9f76-402f3751bee6\"},\"y4coxm-eyhzpu-v7jji8-oehzvg\":{\"sid\":\"desktop-btf-grid-7\",\"cid\":\""
		"amzn1.sym.133c76c2-17c5-4fe7-be87-8177a87f7092\"},\"xkpiny-vr30zc-4mlt7-5513y6\":{\"sid\":\"desktop-btf-grid-8\",\"cid\":\"amzn1.sym.7d3e5960-aaeb-465f-b3c6-e125eab0c973\"},\"3cyqi-4osy6c-enwlzc-zc44oo\":{\"sid\":\"desktop-5\",\"cid\":\"amzn1.sym.9929d3ab-edb7-4ef5-a232-26d90f828fa5\"},\"bfvtbw-f9qfno-e6w21n-va631k\":{\"sid\":\"desktop-6\",\"cid\":\"amzn1.sym.9929d3ab-edb7-4ef5-a232-26d90f828fa5\"},\"ucrnvl-psdcht-qb9bs0-245zau\":{\"sid\":\"desktop-7\",\"cid\":\""
		"amzn1.sym.9929d3ab-edb7-4ef5-a232-26d90f828fa5\"},\"nicpwd-9edqef-dj2dmz-lenrk9\":{\"sid\":\"nav-link-accountList\",\"cid\":\"nav_ya_signin\",\"ttfv\":966,\"it0\":12400,\"it50\":12400,\"it100\":12401},\"ahx9vz-h4gjmd-art5kv-gv96eq\":{\"sid\":\"HamburgerMenuDesktop\",\"ttfv\":966,\"it0\":12400,\"it50\":12400,\"it100\":12401},\"rp0dtf-aqn4zy-adpzy7-7uns1u\":{\"sid\":\"nav_cs_0\",\"cid\":\"nav_cs_gb\",\"ttfv\":966,\"it0\":12400,\"it50\":12400,\"it100\":12401},\"9bxgb2-rk4ugy-8xrcud-41ek63\":{\"sid\""
		":\"nav_cs_1\",\"cid\":\"nav_cs_customerservice\",\"ttfv\":966,\"it0\":12400,\"it50\":12400,\"it100\":12401},\"laex1h-pn7wle-altnz6-ui8oov\":{\"sid\":\"nav_cs_2\",\"cid\":\"nav_cs_registry\",\"ttfv\":966,\"it0\":12400,\"it50\":12400,\"it100\":12401},\"e2wxv3-pf2bif-mjr5hq-lasosr\":{\"sid\":\"nav_cs_3\",\"cid\":\"nav_cs_gc\",\"ttfv\":973,\"it0\":12393,\"it50\":12393,\"it100\":12394},\"mw7ee5-saiwhk-a7why0-th47fv\":{\"sid\":\"nav_cs_4\",\"cid\":\"nav_cs_sell\",\"ttfv\":974,\"it0\":12392,\"it50\""
		":12392,\"it100\":12393},\"yqd2tz-eslsxn-kgglc5-o4fgkr\":{\"sid\":\"nav_cs_5\"}},\"timestamp\":\"2024-02-07T12:04:02.787Z\",\"application\":\"Retail:Prod:www.amazon.com\",\"obfuscatedMarketplaceId\":\"ATVPDKIKX0DER\",\"lob\":\"1\",\"producerId\":\"csa\",\"entities\":{\"page\":{\"id\":\"y45xqs-v4tsc7-d3onkb-o8oc8f\",\"requestId\":\"5AFSK1C7VNHSD7KRB97Y\"},\"session\":{\"id\":\"133-6658273-5713951\"}}}},{\"data\":{\"schemaId\":\"csa.ContentRender.3\",\"timestamp\":\"2024-02-07T12:04:02.682Z\",\""
		"width\":1263,\"height\":230,\"positionX\":0,\"positionY\":99,\"messageId\":\"6asoxq-u47yw-w679ak-1w7ai6\",\"application\":\"Retail:Prod:www.amazon.com\",\"obfuscatedMarketplaceId\":\"ATVPDKIKX0DER\",\"lob\":\"1\",\"producerId\":\"csa\",\"entities\":{\"page\":{\"id\":\"y45xqs-v4tsc7-d3onkb-o8oc8f\",\"requestId\":\"5AFSK1C7VNHSD7KRB97Y\",\"pageType\":\"Gateway\",\"subPageType\":\"desktop\"},\"session\":{\"id\":\"133-6658273-5713951\"},\"element\":{\"id\":\"ns5rja-2pkead-n95e5e-m01txx\",\"type\":\""
		"widget\",\"slotId\":\"desktop-hero-order\",\"iSlotId\":\"desktop-hero-order\",\"class\":\"celwidget\",\"legacyId\":\"desktop-hero-order\"}}}},{\"data\":{\"schemaId\":\"csa.ContentRender.3\",\"timestamp\":\"2024-02-07T12:04:02.682Z\",\"width\":1223,\"height\":600,\"positionX\":40,\"positionY\":135,\"messageId\":\"6ddflm-wfqi17-2piqc7-3gksgt\",\"application\":\"Retail:Prod:www.amazon.com\",\"obfuscatedMarketplaceId\":\"ATVPDKIKX0DER\",\"lob\":\"1\",\"producerId\":\"csa\",\"entities\":{\"page\":{\""
		"id\":\"y45xqs-v4tsc7-d3onkb-o8oc8f\",\"requestId\":\"5AFSK1C7VNHSD7KRB97Y\",\"pageType\":\"Gateway\",\"subPageType\":\"desktop\"},\"session\":{\"id\":\"133-6658273-5713951\"},\"element\":{\"id\":\"fu7bue-wtzqip-zk9ll-9kqpu9\",\"type\":\"widget\",\"slotId\":\"gw-ftGr-desktop-hero-1\",\"contentId\":\"amzn1.sym.9cbb6960-2ff9-41e4-94ff-32680c208d5a\",\"painter\":\"cropped-image-link\",\"iSlotId\":\"gw-ftGr-desktop-hero-1\",\"class\":\"gw-ftGr-desktop-hero gw-critical-content "
		"csm-placement-id-9cbb6960-2ff9-41e4-94ff-32680c208d5a desktop-gateway-hero_5a847718-8687-47ec-ba03-57a43d59aad1 celwidget pd_rd_wg-KV7Cy pd_rd_w-UYpeQ pd_rd_r-12687d5e-92e0-4165-9b79-7259bc96c652\",\"legacyId\":\"gw-ftGr-desktop-hero-1\",\"parentId\":\"ns5rja-2pkead-n95e5e-m01txx\"}}}},{\"data\":{\"schemaId\":\"csa.ContentRender.3\",\"timestamp\":\"2024-02-07T12:04:02.682Z\",\"width\":1223,\"height\":20,\"positionX\":40,\"positionY\":735,\"messageId\":\"obl40z-aznwu2-cdrxvq-mbplcb\",\"application"
		"\":\"Retail:Prod:www.amazon.com\",\"obfuscatedMarketplaceId\":\"ATVPDKIKX0DER\",\"lob\":\"1\",\"producerId\":\"csa\",\"entities\":{\"page\":{\"id\":\"y45xqs-v4tsc7-d3onkb-o8oc8f\",\"requestId\":\"5AFSK1C7VNHSD7KRB97Y\",\"pageType\":\"Gateway\",\"subPageType\":\"desktop\"},\"session\":{\"id\":\"133-6658273-5713951\"},\"element\":{\"id\":\"qiwags-4e0xrb-bn23gs-br61gm\",\"type\":\"widget\",\"slotId\":\"gw-ftGr-desktop-hero-2\",\"contentId\":\"amzn1.sym.c55a304a-3dad-4d6d-84b9-e7859e5a0bbb\",\""
		"painter\":\"cropped-image-link\",\"iSlotId\":\"gw-ftGr-desktop-hero-2\",\"class\":\"a-lazy-loaded gw-ftGr-desktop-hero csm-placement-id-c55a304a-3dad-4d6d-84b9-e7859e5a0bbb desktop-gateway-hero_da97d167-b153-46dc-8247-eb3126339d5a celwidget pd_rd_wg-KV7Cy pd_rd_w-WAFdL pd_rd_r-12687d5e-92e0-4165-9b79-7259bc96c652\",\"legacyId\":\"gw-ftGr-desktop-hero-2\",\"parentId\":\"ns5rja-2pkead-n95e5e-m01txx\"}}}},{\"data\":{\"schemaId\":\"csa.ContentRender.3\",\"timestamp\":\"2024-02-07T12:04:02.682Z\",\""
		"width\":1223,\"height\":20,\"positionX\":40,\"positionY\":755,\"messageId\":\"agmudr-5rdk8x-uhdwli-dapq5p\",\"application\":\"Retail:Prod:www.amazon.com\",\"obfuscatedMarketplaceId\":\"ATVPDKIKX0DER\",\"lob\":\"1\",\"producerId\":\"csa\",\"entities\":{\"page\":{\"id\":\"y45xqs-v4tsc7-d3onkb-o8oc8f\",\"requestId\":\"5AFSK1C7VNHSD7KRB97Y\",\"pageType\":\"Gateway\",\"subPageType\":\"desktop\"},\"session\":{\"id\":\"133-6658273-5713951\"},\"element\":{\"id\":\"7y4zel-v9ptvy-u2wpog-jyr7w8\",\"type\":\""
		"widget\",\"slotId\":\"gw-ftGr-desktop-hero-3\",\"contentId\":\"amzn1.sym.6bd9a83c-3722-4f5c-a531-ccf7a3d8e6a6\",\"painter\":\"cropped-image-link\",\"iSlotId\":\"gw-ftGr-desktop-hero-3\",\"class\":\"a-lazy-loaded gw-ftGr-desktop-hero csm-placement-id-6bd9a83c-3722-4f5c-a531-ccf7a3d8e6a6 desktop-gateway-hero_00418d0c-4468-4310-9380-9cfaa7fa7067 celwidget pd_rd_wg-KV7Cy pd_rd_w-xKptf pd_rd_r-12687d5e-92e0-4165-9b79-7259bc96c652\",\"legacyId\":\"gw-ftGr-desktop-hero-3\",\"parentId\":\""
		"ns5rja-2pkead-n95e5e-m01txx\"}}}},{\"data\":{\"schemaId\":\"csa.ContentRender.3\",\"timestamp\":\"2024-02-07T12:04:02.682Z\",\"width\":1223,\"height\":20,\"positionX\":40,\"positionY\":775,\"messageId\":\"axlney-u10fd6-yungy9-m286yt\",\"application\":\"Retail:Prod:www.amazon.com\",\"obfuscatedMarketplaceId\":\"ATVPDKIKX0DER\",\"lob\":\"1\",\"producerId\":\"csa\",\"entities\":{\"page\":{\"id\":\"y45xqs-v4tsc7-d3onkb-o8oc8f\",\"requestId\":\"5AFSK1C7VNHSD7KRB97Y\",\"pageType\":\"Gateway\",\""
		"subPageType\":\"desktop\"},\"session\":{\"id\":\"133-6658273-5713951\"},\"element\":{\"id\":\"avr8rd-kpv3ca-o4fo8o-odx562\",\"type\":\"widget\",\"slotId\":\"gw-ftGr-desktop-hero-4\",\"contentId\":\"amzn1.sym.73d958bd-6ca7-46ff-8084-5fcdad211985\",\"painter\":\"cropped-image-link\",\"iSlotId\":\"gw-ftGr-desktop-hero-4\",\"class\":\"a-lazy-loaded gw-ftGr-desktop-hero csm-placement-id-73d958bd-6ca7-46ff-8084-5fcdad211985 desktop-gateway-hero_fd6dea67-ed2e-4ae5-95c9-e044027cc69c celwidget "
		"pd_rd_wg-KV7Cy pd_rd_w-FdEDc pd_rd_r-12687d5e-92e0-4165-9b79-7259bc96c652\",\"legacyId\":\"gw-ftGr-desktop-hero-4\",\"parentId\":\"ns5rja-2pkead-n95e5e-m01txx\"}}}},{\"data\":{\"schemaId\":\"csa.ContentRender.3\",\"timestamp\":\"2024-02-07T12:04:02.682Z\",\"width\":1223,\"height\":20,\"positionX\":40,\"positionY\":795,\"messageId\":\"rk8ehr-9nkk64-ez3tw8-xlz1ut\",\"application\":\"Retail:Prod:www.amazon.com\",\"obfuscatedMarketplaceId\":\"ATVPDKIKX0DER\",\"lob\":\"1\",\"producerId\":\"csa\",\""
		"entities\":{\"page\":{\"id\":\"y45xqs-v4tsc7-d3onkb-o8oc8f\",\"requestId\":\"5AFSK1C7VNHSD7KRB97Y\",\"pageType\":\"Gateway\",\"subPageType\":\"desktop\"},\"session\":{\"id\":\"133-6658273-5713951\"},\"element\":{\"id\":\"y8oqno-ty6ueo-8zvfz4-uqaqqk\",\"type\":\"widget\",\"slotId\":\"gw-ftGr-desktop-hero-5\",\"contentId\":\"amzn1.sym.35d2e3e7-d6d6-40a8-b160-754a6a92c950\",\"painter\":\"cropped-image-link\",\"iSlotId\":\"gw-ftGr-desktop-hero-5\",\"class\":\"a-lazy-loaded gw-ftGr-desktop-hero "
		"csm-placement-id-35d2e3e7-d6d6-40a8-b160-754a6a92c950 desktop-gateway-hero_364d2858-a1d6-44b8-8d7f-57074fdca8bb celwidget pd_rd_wg-KV7Cy pd_rd_w-tvR79 pd_rd_r-12687d5e-92e0-4165-9b79-7259bc96c652\",\"legacyId\":\"gw-ftGr-desktop-hero-5\",\"parentId\":\"ns5rja-2pkead-n95e5e-m01txx\"}}}},{\"data\":{\"schemaId\":\"csa.ContentRender.3\",\"timestamp\":\"2024-02-07T12:04:02.682Z\",\"width\":1223,\"height\":20,\"positionX\":40,\"positionY\":815,\"messageId\":\"ci0zb9-eoyi4-qcsm3q-4y75b0\",\"application\""
		":\"Retail:Prod:www.amazon.com\",\"obfuscatedMarketplaceId\":\"ATVPDKIKX0DER\",\"lob\":\"1\",\"producerId\":\"csa\",\"entities\":{\"page\":{\"id\":\"y45xqs-v4tsc7-d3onkb-o8oc8f\",\"requestId\":\"5AFSK1C7VNHSD7KRB97Y\",\"pageType\":\"Gateway\",\"subPageType\":\"desktop\"},\"session\":{\"id\":\"133-6658273-5713951\"},\"element\":{\"id\":\"e87vuj-rwq7bj-7vzmg8-m9g8fi\",\"type\":\"widget\",\"slotId\":\"gw-ftGr-desktop-hero-6\",\"contentId\":\"amzn1.sym.be1f9daf-4d19-45c4-80a8-9f43dc62cb2d\",\"painter\""
		":\"cropped-image-link\",\"iSlotId\":\"gw-ftGr-desktop-hero-6\",\"class\":\"a-lazy-loaded gw-ftGr-desktop-hero csm-placement-id-be1f9daf-4d19-45c4-80a8-9f43dc62cb2d desktop-gateway-hero_2125dafb-468c-4015-a4c9-c38bad8a9403 celwidget pd_rd_wg-KV7Cy pd_rd_w-ePlrW pd_rd_r-12687d5e-92e0-4165-9b79-7259bc96c652\",\"legacyId\":\"gw-ftGr-desktop-hero-6\",\"parentId\":\"ns5rja-2pkead-n95e5e-m01txx\"}}}},{\"data\":{\"schemaId\":\"csa.ContentRender.3\",\"timestamp\":\"2024-02-07T12:04:02.682Z\",\"width\":1223"
		",\"height\":20,\"positionX\":40,\"positionY\":835,\"messageId\":\"4q1d8l-y0wop6-6reu55-oww68b\",\"application\":\"Retail:Prod:www.amazon.com\",\"obfuscatedMarketplaceId\":\"ATVPDKIKX0DER\",\"lob\":\"1\",\"producerId\":\"csa\",\"entities\":{\"page\":{\"id\":\"y45xqs-v4tsc7-d3onkb-o8oc8f\",\"requestId\":\"5AFSK1C7VNHSD7KRB97Y\",\"pageType\":\"Gateway\",\"subPageType\":\"desktop\"},\"session\":{\"id\":\"133-6658273-5713951\"},\"element\":{\"id\":\"fjit4a-xp14gu-8503i0-w47emn\",\"type\":\"widget\",\""
		"slotId\":\"gw-ftGr-desktop-hero-7\",\"contentId\":\"amzn1.sym.0044bffe-bf18-49f9-8d38-b2cc8858b52f\",\"painter\":\"cropped-image-link\",\"iSlotId\":\"gw-ftGr-desktop-hero-7\",\"class\":\"a-lazy-loaded gw-ftGr-desktop-hero csm-placement-id-0044bffe-bf18-49f9-8d38-b2cc8858b52f desktop-gateway-hero_29a73bf9-2d80-4a33-aaf8-12cd5c13ee11 celwidget pd_rd_wg-KV7Cy pd_rd_w-nUgXT pd_rd_r-12687d5e-92e0-4165-9b79-7259bc96c652\",\"legacyId\":\"gw-ftGr-desktop-hero-7\",\"parentId\":\""
		"ns5rja-2pkead-n95e5e-m01txx\"}}}},{\"data\":{\"schemaId\":\"csa.ContentRender.3\",\"timestamp\":\"2024-02-07T12:04:02.682Z\",\"width\":1243,\"height\":20,\"positionX\":10,\"positionY\":349,\"messageId\":\"qqjl8l-lfj1ez-wzqw4i-ob5m8f\",\"application\":\"Retail:Prod:www.amazon.com\",\"obfuscatedMarketplaceId\":\"ATVPDKIKX0DER\",\"lob\":\"1\",\"producerId\":\"csa\",\"entities\":{\"page\":{\"id\":\"y45xqs-v4tsc7-d3onkb-o8oc8f\",\"requestId\":\"5AFSK1C7VNHSD7KRB97Y\",\"pageType\":\"Gateway\",\""
		"subPageType\":\"desktop\"},\"session\":{\"id\":\"133-6658273-5713951\"},\"element\":{\"id\":\"2w7gsr-omf8an-xskpxz-qnj8ua\",\"type\":\"widget\",\"slotId\":\"desktop-banner-stripe\",\"contentId\":\"amzn1.sym.ad7e52ed-7e0b-44e3-85c1-b8a893426b20\",\"painter\":\"text-link-stripe-v2\",\"iSlotId\":\"desktop-banner-stripe\",\"class\":\"desktop-stripe csm-placement-id-ad7e52ed-7e0b-44e3-85c1-b8a893426b20 desktop-gateway-atf_a02468d5-861c-403a-87e5-b4b83843220f celwidget pd_rd_wg-epykp pd_rd_w-BjEpo "
		"pd_rd_r-cc19505d-c0eb-4ddb-a7af-01fc82604681\",\"legacyId\":\"desktop-banner-stripe\"}}}},{\"data\":{\"schemaId\":\"csa.ContentRender.3\",\"timestamp\":\"2024-02-07T12:04:02.682Z\",\"width\":311,\"height\":420,\"positionX\":10,\"positionY\":389,\"messageId\":\"m7rk0u-u2m6zd-w8m1sg-a1hnd3\",\"application\":\"Retail:Prod:www.amazon.com\",\"obfuscatedMarketplaceId\":\"ATVPDKIKX0DER\",\"lob\":\"1\",\"producerId\":\"csa\",\"entities\":{\"page\":{\"id\":\"y45xqs-v4tsc7-d3onkb-o8oc8f\",\"requestId\":\""
		"5AFSK1C7VNHSD7KRB97Y\",\"pageType\":\"Gateway\",\"subPageType\":\"desktop\"},\"session\":{\"id\":\"133-6658273-5713951\"},\"element\":{\"id\":\"eizs84-2yco1r-vquque-we3yzq\",\"type\":\"widget\",\"slotId\":\"desktop-grid-1\",\"contentId\":\"amzn1.sym.12129333-2117-4490-9c17-6d31baf0582a\",\"painter\":\"fluid-quad-image-label-v2\",\"iSlotId\":\"desktop-grid-1\",\"class\":\"gw-col csm-placement-id-12129333-2117-4490-9c17-6d31baf0582a desktop-gateway-atf_839e00e4-7ec3-4d41-8af3-638cd55ecdc7 celwidget "
		"pd_rd_wg-epykp pd_rd_w-mt0Gv pd_rd_r-cc19505d-c0eb-4ddb-a7af-01fc82604681\",\"legacyId\":\"desktop-grid-1\"}}}},{\"data\":{\"schemaId\":\"csa.ContentRender.3\",\"timestamp\":\"2024-02-07T12:04:02.682Z\",\"width\":311,\"height\":420,\"positionX\":321,\"positionY\":389,\"messageId\":\"daiebl-blsmgr-fzxk76-ki6de4\",\"application\":\"Retail:Prod:www.amazon.com\",\"obfuscatedMarketplaceId\":\"ATVPDKIKX0DER\",\"lob\":\"1\",\"producerId\":\"csa\",\"entities\":{\"page\":{\"id\":\""
		"y45xqs-v4tsc7-d3onkb-o8oc8f\",\"requestId\":\"5AFSK1C7VNHSD7KRB97Y\",\"pageType\":\"Gateway\",\"subPageType\":\"desktop\"},\"session\":{\"id\":\"133-6658273-5713951\"},\"element\":{\"id\":\"z2we0i-y21n32-nrmvry-tuv69k\",\"type\":\"widget\",\"slotId\":\"desktop-grid-2\",\"contentId\":\"amzn1.sym.7acbca95-6949-4783-9691-9ac9df8021d9\",\"painter\":\"fluid-fat-image-link-v2\",\"iSlotId\":\"desktop-grid-2\",\"class\":\"gw-col csm-placement-id-7acbca95-6949-4783-9691-9ac9df8021d9 "
		"desktop-gateway-atf_005cef6d-6734-4108-af95-4931d86ee621 celwidget pd_rd_wg-epykp pd_rd_w-Awkjl pd_rd_r-cc19505d-c0eb-4ddb-a7af-01fc82604681\",\"legacyId\":\"desktop-grid-2\"}}}},{\"data\":{\"schemaId\":\"csa.ContentRender.3\",\"timestamp\":\"2024-02-07T12:04:02.682Z\",\"width\":311,\"height\":420,\"positionX\":632,\"positionY\":389,\"messageId\":\"g243n2-w0x2pk-gmw5cu-awe68y\",\"application\":\"Retail:Prod:www.amazon.com\",\"obfuscatedMarketplaceId\":\"ATVPDKIKX0DER\",\"lob\":\"1\",\"producerId\""
		":\"csa\",\"entities\":{\"page\":{\"id\":\"y45xqs-v4tsc7-d3onkb-o8oc8f\",\"requestId\":\"5AFSK1C7VNHSD7KRB97Y\",\"pageType\":\"Gateway\",\"subPageType\":\"desktop\"},\"session\":{\"id\":\"133-6658273-5713951\"},\"element\":{\"id\":\"qd56tg-ru5qqr-c7bpcz-c200y3\",\"type\":\"widget\",\"slotId\":\"desktop-grid-3\",\"contentId\":\"amzn1.sym.3a6a1f11-a96c-444b-b219-97322616eb92\",\"painter\":\"fluid-fat-image-link-v2\",\"iSlotId\":\"desktop-grid-3\",\"class\":\"gw-col "
		"csm-placement-id-3a6a1f11-a96c-444b-b219-97322616eb92 desktop-gateway-atf_53e62ccb-d2a2-4db4-8376-c9bc073e5b02 celwidget pd_rd_wg-epykp pd_rd_w-6iVpq pd_rd_r-cc19505d-c0eb-4ddb-a7af-01fc82604681\",\"legacyId\":\"desktop-grid-3\"}}}},{\"data\":{\"schemaId\":\"csa.ContentRender.3\",\"timestamp\":\"2024-02-07T12:04:02.682Z\",\"width\":311,\"height\":420,\"positionX\":942,\"positionY\":389,\"messageId\":\"awyws7-vl19uj-bkyhha-rrqjju\",\"application\":\"Retail:Prod:www.amazon.com\",\""
		"obfuscatedMarketplaceId\":\"ATVPDKIKX0DER\",\"lob\":\"1\",\"producerId\":\"csa\",\"entities\":{\"page\":{\"id\":\"y45xqs-v4tsc7-d3onkb-o8oc8f\",\"requestId\":\"5AFSK1C7VNHSD7KRB97Y\",\"pageType\":\"Gateway\",\"subPageType\":\"desktop\"},\"session\":{\"id\":\"133-6658273-5713951\"},\"element\":{\"id\":\"e72icp-oh4epu-5rchz3-f0pato\",\"type\":\"widget\",\"slotId\":\"desktop-grid-4\",\"contentId\":\"amzn1.sym.c0480761-6b7c-400b-bca5-28ff417248d1\",\"painter\":\"fluid-quad-image-label-v2\",\"iSlotId\""
		":\"desktop-grid-4\",\"class\":\"gw-col csm-placement-id-c0480761-6b7c-400b-bca5-28ff417248d1 desktop-gateway-atf_985bafb1-ea4d-441e-b1af-4e86601d4129 celwidget pd_rd_wg-epykp pd_rd_w-crvNC pd_rd_r-cc19505d-c0eb-4ddb-a7af-01fc82604681\",\"legacyId\":\"desktop-grid-4\"}}}},{\"data\":{\"schemaId\":\"csa.ContentRender.3\",\"timestamp\":\"2024-02-07T12:04:02.682Z\",\"width\":311,\"height\":420,\"positionX\":10,\"positionY\":829,\"messageId\":\"w4575v-bdz2pu-2mmfmx-dvwkbe\",\"application\":\"Retail:Prod"
		":www.amazon.com\",\"obfuscatedMarketplaceId\":\"ATVPDKIKX0DER\",\"lob\":\"1\",\"producerId\":\"csa\",\"entities\":{\"page\":{\"id\":\"y45xqs-v4tsc7-d3onkb-o8oc8f\",\"requestId\":\"5AFSK1C7VNHSD7KRB97Y\",\"pageType\":\"Gateway\",\"subPageType\":\"desktop\"},\"session\":{\"id\":\"133-6658273-5713951\"},\"element\":{\"id\":\"8d03ns-96phck-62ja6t-761orr\",\"type\":\"widget\",\"slotId\":\"desktop-grid-5\",\"contentId\":\"amzn1.sym.def2f06c-d9a7-4927-8433-aa333a9fca53\",\"painter\":\"deal-of-the-day\","
		"\"iSlotId\":\"desktop-grid-5\",\"class\":\"gw-col csm-placement-id-def2f06c-d9a7-4927-8433-aa333a9fca53 desktop-gateway-atf_deals-p13n-e8f666eb-c2f1-4a11-92a6-c771032d0914 celwidget pd_rd_wg-epykp pd_rd_w-DGDjU pd_rd_r-cc19505d-c0eb-4ddb-a7af-01fc82604681\",\"legacyId\":\"desktop-grid-5\"}}}},{\"data\":{\"schemaId\":\"csa.ContentRender.3\",\"timestamp\":\"2024-02-07T12:04:02.682Z\",\"width\":311,\"height\":420,\"positionX\":321,\"positionY\":829,\"messageId\":\"unke3b-kpygnm-9v33zn-ed1ydo\",\""
		"application\":\"Retail:Prod:www.amazon.com\",\"obfuscatedMarketplaceId\":\"ATVPDKIKX0DER\",\"lob\":\"1\",\"producerId\":\"csa\",\"entities\":{\"page\":{\"id\":\"y45xqs-v4tsc7-d3onkb-o8oc8f\",\"requestId\":\"5AFSK1C7VNHSD7KRB97Y\",\"pageType\":\"Gateway\",\"subPageType\":\"desktop\"},\"session\":{\"id\":\"133-6658273-5713951\"},\"element\":{\"id\":\"bekh4n-w540w7-b6ul7p-gsalv3\",\"type\":\"widget\",\"slotId\":\"desktop-grid-6\",\"contentId\":\"amzn1.sym.44da4965-9668-4613-bec2-a3a75f0c2ad4\",\""
		"painter\":\"fluid-fat-image-link-v2\",\"iSlotId\":\"desktop-grid-6\",\"class\":\"gw-col csm-placement-id-44da4965-9668-4613-bec2-a3a75f0c2ad4 desktop-gateway-atf_cb7ae3f4-4bfc-447f-8007-224d69470c90 celwidget pd_rd_wg-epykp pd_rd_w-009QB pd_rd_r-cc19505d-c0eb-4ddb-a7af-01fc82604681\",\"legacyId\":\"desktop-grid-6\"}}}},{\"data\":{\"schemaId\":\"csa.ContentRender.3\",\"timestamp\":\"2024-02-07T12:04:02.682Z\",\"width\":311,\"height\":420,\"positionX\":632,\"positionY\":829,\"messageId\":\""
		"iqpsix-aujgz4-s93cp0-itll4\",\"application\":\"Retail:Prod:www.amazon.com\",\"obfuscatedMarketplaceId\":\"ATVPDKIKX0DER\",\"lob\":\"1\",\"producerId\":\"csa\",\"entities\":{\"page\":{\"id\":\"y45xqs-v4tsc7-d3onkb-o8oc8f\",\"requestId\":\"5AFSK1C7VNHSD7KRB97Y\",\"pageType\":\"Gateway\",\"subPageType\":\"desktop\"},\"session\":{\"id\":\"133-6658273-5713951\"},\"element\":{\"id\":\"qoh0x5-28di6v-bhz533-8693t5\",\"type\":\"widget\",\"slotId\":\"desktop-grid-7\",\"contentId\":\""
		"amzn1.sym.3508909d-dd9f-4fa2-80be-54ce8f44ff31\",\"painter\":\"fluid-fat-image-link-v2\",\"iSlotId\":\"desktop-grid-7\",\"class\":\"gw-col csm-placement-id-3508909d-dd9f-4fa2-80be-54ce8f44ff31 desktop-gateway-atf_a986b73d-64b1-4420-aa6c-2b1a11ee4e46 celwidget pd_rd_wg-epykp pd_rd_w-3t5nW pd_rd_r-cc19505d-c0eb-4ddb-a7af-01fc82604681\",\"legacyId\":\"desktop-grid-7\"}}}},{\"data\":{\"schemaId\":\"csa.ContentRender.3\",\"timestamp\":\"2024-02-07T12:04:02.682Z\",\"width\":311,\"height\":420,\""
		"positionX\":942,\"positionY\":829,\"messageId\":\"u8qakx-n9jtz6-ik5fh-qatbmj\",\"application\":\"Retail:Prod:www.amazon.com\",\"obfuscatedMarketplaceId\":\"ATVPDKIKX0DER\",\"lob\":\"1\",\"producerId\":\"csa\",\"entities\":{\"page\":{\"id\":\"y45xqs-v4tsc7-d3onkb-o8oc8f\",\"requestId\":\"5AFSK1C7VNHSD7KRB97Y\",\"pageType\":\"Gateway\",\"subPageType\":\"desktop\"},\"session\":{\"id\":\"133-6658273-5713951\"},\"element\":{\"id\":\"i4kbfu-1mvham-rntsq9-elmhy4\",\"type\":\"widget\",\"slotId\":\""
		"desktop-grid-8\",\"contentId\":\"amzn1.sym.bebfcdc6-3b0c-41d3-9614-a84df9834c05\",\"painter\":\"fluid-quad-image-label-v2\",\"iSlotId\":\"desktop-grid-8\",\"class\":\"gw-col csm-placement-id-bebfcdc6-3b0c-41d3-9614-a84df9834c05 desktop-gateway-atf_bbfde90f-09de-43fd-b8bf-ffe1df937343 celwidget pd_rd_wg-epykp pd_rd_w-Vz3ye pd_rd_r-cc19505d-c0eb-4ddb-a7af-01fc82604681\",\"legacyId\":\"desktop-grid-8\"}}}},{\"data\":{\"schemaId\":\"csa.ContentRender.3\",\"timestamp\":\"2024-02-07T12:04:02.682Z\",\""
		"width\":0,\"height\":0,\"positionX\":0,\"positionY\":0,\"messageId\":\"yyc24b-1vry2z-9e4pqk-b7e2n4\",\"application\":\"Retail:Prod:www.amazon.com\",\"obfuscatedMarketplaceId\":\"ATVPDKIKX0DER\",\"lob\":\"1\",\"producerId\":\"csa\",\"entities\":{\"page\":{\"id\":\"y45xqs-v4tsc7-d3onkb-o8oc8f\",\"requestId\":\"5AFSK1C7VNHSD7KRB97Y\",\"pageType\":\"Gateway\",\"subPageType\":\"desktop\"},\"session\":{\"id\":\"133-6658273-5713951\"},\"element\":{\"id\":\"objbi8-60po8e-ry1v7y-57go1z\",\"type\":\"widget"
		"\",\"class\":\"gw-col celwidget\",\"slotId\":\"\",\"legacyId\":\"\"}}}},{\"data\":{\"schemaId\":\"csa.ContentRender.3\",\"timestamp\":\"2024-02-07T12:04:02.682Z\",\"width\":1263,\"height\":321,\"positionX\":10,\"positionY\":1289,\"messageId\":\"5d25l8-322obl-dgqzwx-umhahh\",\"application\":\"Retail:Prod:www.amazon.com\",\"obfuscatedMarketplaceId\":\"ATVPDKIKX0DER\",\"lob\":\"1\",\"producerId\":\"csa\",\"entities\":{\"page\":{\"id\":\"y45xqs-v4tsc7-d3onkb-o8oc8f\",\"requestId\":\""
		"5AFSK1C7VNHSD7KRB97Y\",\"pageType\":\"Gateway\",\"subPageType\":\"desktop\"},\"session\":{\"id\":\"133-6658273-5713951\"},\"element\":{\"id\":\"xz1ujr-r9buvo-lfhnzg-x8rtql\",\"type\":\"widget\",\"slotId\":\"desktop-1\",\"contentId\":\"amzn1.sym.7106ac9d-8af2-40c0-8368-9e5c34686062\",\"painter\":\"ameyal-product-shoveler\",\"iSlotId\":\"desktop-1\",\"class\":\"gw-col desktop-row gwi-row gw-widget-instrument gw-auto-height csm-placement-id-7106ac9d-8af2-40c0-8368-9e5c34686062 "
		"desktop-gateway-btf_c97d29da-2401-42f6-903a-71ec551522a1 celwidget pd_rd_wg-9GXLg pd_rd_w-IXmnq pd_rd_r-e769952f-6868-4c8b-b6d9-380cafc33db2\",\"legacyId\":\"desktop-1\"}}}},{\"data\":{\"schemaId\":\"csa.ContentRender.3\",\"timestamp\":\"2024-02-07T12:04:02.682Z\",\"width\":1263,\"height\":321,\"positionX\":10,\"positionY\":1630,\"messageId\":\"k8e76b-sx3e5e-8rgmf2-ys13iv\",\"application\":\"Retail:Prod:www.amazon.com\",\"obfuscatedMarketplaceId\":\"ATVPDKIKX0DER\",\"lob\":\"1\",\"producerId\":\""
		"csa\",\"entities\":{\"page\":{\"id\":\"y45xqs-v4tsc7-d3onkb-o8oc8f\",\"requestId\":\"5AFSK1C7VNHSD7KRB97Y\",\"pageType\":\"Gateway\",\"subPageType\":\"desktop\"},\"session\":{\"id\":\"133-6658273-5713951\"},\"element\":{\"id\":\"ime3gr-f0f18n-z3gq96-615ltp\",\"type\":\"widget\",\"slotId\":\"desktop-2\",\"contentId\":\"amzn1.sym.ba25a0fb-eeb9-4762-9c76-8ca869df5234\",\"painter\":\"ameyal-product-shoveler\",\"iSlotId\":\"desktop-2\",\"class\":\"gw-col desktop-row gwi-row gw-widget-instrument "
		"gw-auto-height csm-placement-id-ba25a0fb-eeb9-4762-9c76-8ca869df5234 desktop-gateway-btf_exports-top-seller-in-books-unrec celwidget pd_rd_wg-9GXLg pd_rd_w-0T3hy pd_rd_r-e769952f-6868-4c8b-b6d9-380cafc33db2\",\"legacyId\":\"desktop-2\"}}}},{\"data\":{\"schemaId\":\"csa.ContentRender.3\",\"timestamp\":\"2024-02-07T12:04:02.682Z\",\"width\":311,\"height\":420,\"positionX\":10,\"positionY\":1972,\"messageId\":\"k1vtey-xndyzs-43htaa-vi9q19\",\"application\":\"Retail:Prod:www.amazon.com\",\""
		"obfuscatedMarketplaceId\":\"ATVPDKIKX0DER\",\"lob\":\"1\",\"producerId\":\"csa\",\"entities\":{\"page\":{\"id\":\"y45xqs-v4tsc7-d3onkb-o8oc8f\",\"requestId\":\"5AFSK1C7VNHSD7KRB97Y\",\"pageType\":\"Gateway\",\"subPageType\":\"desktop\"},\"session\":{\"id\":\"133-6658273-5713951\"},\"element\":{\"id\":\"ef7k4w-7osebo-29jtqa-f1mhmc\",\"type\":\"widget\",\"slotId\":\"desktop-btf-grid-1\",\"contentId\":\"amzn1.sym.33f8f65b-b95c-44af-8b89-e59e69e79828\",\"painter\":\"fluid-fat-image-link-v2\",\""
		"iSlotId\":\"desktop-btf-grid-1\",\"class\":\"gw-col csm-placement-id-33f8f65b-b95c-44af-8b89-e59e69e79828 desktop-gateway-btf_287d1d4c-16bd-4ed3-8cd5-96b58d2b52bc celwidget pd_rd_wg-9GXLg pd_rd_w-FTric pd_rd_r-e769952f-6868-4c8b-b6d9-380cafc33db2\",\"legacyId\":\"desktop-btf-grid-1\"}}}},{\"data\":{\"schemaId\":\"csa.ContentRender.3\",\"timestamp\":\"2024-02-07T12:04:02.682Z\",\"width\":311,\"height\":420,\"positionX\":321,\"positionY\":1972,\"messageId\":\"1q9lv6-5osvnf-231h3r-37atrn\",\""
		"application\":\"Retail:Prod:www.amazon.com\",\"obfuscatedMarketplaceId\":\"ATVPDKIKX0DER\",\"lob\":\"1\",\"producerId\":\"csa\",\"entities\":{\"page\":{\"id\":\"y45xqs-v4tsc7-d3onkb-o8oc8f\",\"requestId\":\"5AFSK1C7VNHSD7KRB97Y\",\"pageType\":\"Gateway\",\"subPageType\":\"desktop\"},\"session\":{\"id\":\"133-6658273-5713951\"},\"element\":{\"id\":\"9l5hag-mp40ae-4jlx8b-nslw5s\",\"type\":\"widget\",\"slotId\":\"desktop-btf-grid-2\",\"contentId\":\"amzn1.sym.09483392-9ac6-434a-a3d7-39d83662f54a\",\""
		"painter\":\"fluid-quad-image-label-v2\",\"iSlotId\":\"desktop-btf-grid-2\",\"class\":\"gw-col csm-placement-id-09483392-9ac6-434a-a3d7-39d83662f54a desktop-gateway-btf_6a7f6e8e-2af5-4f1e-808f-be31cba46511 celwidget pd_rd_wg-9GXLg pd_rd_w-0iPDv pd_rd_r-e769952f-6868-4c8b-b6d9-380cafc33db2\",\"legacyId\":\"desktop-btf-grid-2\"}}}},{\"data\":{\"schemaId\":\"csa.ContentRender.3\",\"timestamp\":\"2024-02-07T12:04:02.682Z\",\"width\":311,\"height\":420,\"positionX\":632,\"positionY\":1972,\"messageId\""
		":\"90esm0-z4qkb8-t44zfv-ttu1a3\",\"application\":\"Retail:Prod:www.amazon.com\",\"obfuscatedMarketplaceId\":\"ATVPDKIKX0DER\",\"lob\":\"1\",\"producerId\":\"csa\",\"entities\":{\"page\":{\"id\":\"y45xqs-v4tsc7-d3onkb-o8oc8f\",\"requestId\":\"5AFSK1C7VNHSD7KRB97Y\",\"pageType\":\"Gateway\",\"subPageType\":\"desktop\"},\"session\":{\"id\":\"133-6658273-5713951\"},\"element\":{\"id\":\"8856q7-6qcl9e-ntfqzj-8fvrdl\",\"type\":\"widget\",\"slotId\":\"desktop-btf-grid-3\",\"contentId\":\""
		"amzn1.sym.4b335ede-a344-46a5-af28-95a1242a7034\",\"painter\":\"fluid-fat-image-link-v2\",\"iSlotId\":\"desktop-btf-grid-3\",\"class\":\"gw-col csm-placement-id-4b335ede-a344-46a5-af28-95a1242a7034 desktop-gateway-btf_ff7f051a-6101-47e8-a63e-e4e60c303a63 celwidget pd_rd_wg-9GXLg pd_rd_w-tN5Mo pd_rd_r-e769952f-6868-4c8b-b6d9-380cafc33db2\",\"legacyId\":\"desktop-btf-grid-3\"}}}},{\"data\":{\"schemaId\":\"csa.ContentRender.3\",\"timestamp\":\"2024-02-07T12:04:02.682Z\",\"width\":311,\"height\":420,\""
		"positionX\":942,\"positionY\":1972,\"messageId\":\"rmjz5v-ypzvh1-n54twl-qx3q03\",\"application\":\"Retail:Prod:www.amazon.com\",\"obfuscatedMarketplaceId\":\"ATVPDKIKX0DER\",\"lob\":\"1\",\"producerId\":\"csa\",\"entities\":{\"page\":{\"id\":\"y45xqs-v4tsc7-d3onkb-o8oc8f\",\"requestId\":\"5AFSK1C7VNHSD7KRB97Y\",\"pageType\":\"Gateway\",\"subPageType\":\"desktop\"},\"session\":{\"id\":\"133-6658273-5713951\"},\"element\":{\"id\":\"j683j8-wcz529-q3iig1-gz13qm\",\"type\":\"widget\",\"slotId\":\""
		"desktop-btf-grid-4\",\"contentId\":\"amzn1.sym.6fb11530-aa4d-4809-af57-61c93f9fed0b\",\"painter\":\"fluid-fat-image-link-v2\",\"iSlotId\":\"desktop-btf-grid-4\",\"class\":\"gw-col csm-placement-id-6fb11530-aa4d-4809-af57-61c93f9fed0b desktop-gateway-btf_fee9b2d0-54f2-48e9-9251-f2bf2099950d celwidget pd_rd_wg-9GXLg pd_rd_w-5uGDM pd_rd_r-e769952f-6868-4c8b-b6d9-380cafc33db2\",\"legacyId\":\"desktop-btf-grid-4\"}}}},{\"data\":{\"schemaId\":\"csa.ContentRender.3\",\"timestamp\":\"2024-02-07T12:04"
		":02.682Z\",\"width\":1263,\"height\":321,\"positionX\":10,\"positionY\":2412,\"messageId\":\"gwmjvi-eg8p1v-n4rvnq-tnbfjv\",\"application\":\"Retail:Prod:www.amazon.com\",\"obfuscatedMarketplaceId\":\"ATVPDKIKX0DER\",\"lob\":\"1\",\"producerId\":\"csa\",\"entities\":{\"page\":{\"id\":\"y45xqs-v4tsc7-d3onkb-o8oc8f\",\"requestId\":\"5AFSK1C7VNHSD7KRB97Y\",\"pageType\":\"Gateway\",\"subPageType\":\"desktop\"},\"session\":{\"id\":\"133-6658273-5713951\"},\"element\":{\"id\":\""
		"1d760i-upgmz4-8bwe8n-i2q15u\",\"type\":\"widget\",\"slotId\":\"desktop-3\",\"contentId\":\"amzn1.sym.9929d3ab-edb7-4ef5-a232-26d90f828fa5\",\"painter\":\"ameyal-product-shoveler\",\"iSlotId\":\"desktop-3\",\"class\":\"gw-col desktop-row gwi-row gw-widget-instrument gw-auto-height csm-placement-id-9929d3ab-edb7-4ef5-a232-26d90f828fa5 desktop-gateway-btf_crs_zg_ts-3760911 celwidget pd_rd_wg-9GXLg pd_rd_w-LBmK5 pd_rd_r-e769952f-6868-4c8b-b6d9-380cafc33db2\",\"legacyId\":\"desktop-3\"}}}},{\"data\":{"
		"\"schemaId\":\"csa.ContentRender.3\",\"timestamp\":\"2024-02-07T12:04:02.682Z\",\"width\":1263,\"height\":321,\"positionX\":10,\"positionY\":2753,\"messageId\":\"2juk4j-wlncgk-lhvtya-2f5bc0\",\"application\":\"Retail:Prod:www.amazon.com\",\"obfuscatedMarketplaceId\":\"ATVPDKIKX0DER\",\"lob\":\"1\",\"producerId\":\"csa\",\"entities\":{\"page\":{\"id\":\"y45xqs-v4tsc7-d3onkb-o8oc8f\",\"requestId\":\"5AFSK1C7VNHSD7KRB97Y\",\"pageType\":\"Gateway\",\"subPageType\":\"desktop\"},\"session\":{\"id\":\""
		"133-6658273-5713951\"},\"element\":{\"id\":\"n9w2l7-abwtqp-po9o46-pqwnrg\",\"type\":\"widget\",\"slotId\":\"desktop-4\",\"contentId\":\"amzn1.sym.81a68cec-8afc-4296-99f7-78cf5ddc15b5\",\"painter\":\"deals-shoveler-v2\",\"iSlotId\":\"desktop-4\",\"class\":\"gw-col desktop-row gwi-row gw-widget-instrument gw-auto-height csm-placement-id-81a68cec-8afc-4296-99f7-78cf5ddc15b5 desktop-gateway-btf_deals-p13n-aac36b41-be09-40e1-a81c-3472b641a618 celwidget pd_rd_wg-9GXLg pd_rd_w-2yvT9 "
		"pd_rd_r-e769952f-6868-4c8b-b6d9-380cafc33db2\",\"legacyId\":\"desktop-4\"}}}},{\"data\":{\"schemaId\":\"csa.ContentRender.3\",\"timestamp\":\"2024-02-07T12:04:02.682Z\",\"width\":311,\"height\":420,\"positionX\":10,\"positionY\":3094,\"messageId\":\"4917je-ntrvx9-t9hlsp-eq3ggl\",\"application\":\"Retail:Prod:www.amazon.com\",\"obfuscatedMarketplaceId\":\"ATVPDKIKX0DER\",\"lob\":\"1\",\"producerId\":\"csa\",\"entities\":{\"page\":{\"id\":\"y45xqs-v4tsc7-d3onkb-o8oc8f\",\"requestId\":\""
		"5AFSK1C7VNHSD7KRB97Y\",\"pageType\":\"Gateway\",\"subPageType\":\"desktop\"},\"session\":{\"id\":\"133-6658273-5713951\"},\"element\":{\"id\":\"1ti0i7-vz066s-xat062-uj86d1\",\"type\":\"widget\",\"slotId\":\"desktop-btf-grid-5\",\"contentId\":\"amzn1.sym.7d5cde1d-b3d4-4ca8-a1cf-489ba1530c6b\",\"painter\":\"fluid-fat-image-link-v2\",\"iSlotId\":\"desktop-btf-grid-5\",\"class\":\"gw-col csm-placement-id-7d5cde1d-b3d4-4ca8-a1cf-489ba1530c6b desktop-gateway-btf_5f90c86e-9699-4246-9686-cf8e63fea9d2 "
		"celwidget pd_rd_wg-9GXLg pd_rd_w-NPXwi pd_rd_r-e769952f-6868-4c8b-b6d9-380cafc33db2\",\"legacyId\":\"desktop-btf-grid-5\"}}}},{\"data\":{\"schemaId\":\"csa.ContentRender.3\",\"timestamp\":\"2024-02-07T12:04:02.682Z\",\"width\":311,\"height\":420,\"positionX\":321,\"positionY\":3094,\"messageId\":\"v5peft-gsrk6t-yffdcz-o9zu41\",\"application\":\"Retail:Prod:www.amazon.com\",\"obfuscatedMarketplaceId\":\"ATVPDKIKX0DER\",\"lob\":\"1\",\"producerId\":\"csa\",\"entities\":{\"page\":{\"id\":\""
		"y45xqs-v4tsc7-d3onkb-o8oc8f\",\"requestId\":\"5AFSK1C7VNHSD7KRB97Y\",\"pageType\":\"Gateway\",\"subPageType\":\"desktop\"},\"session\":{\"id\":\"133-6658273-5713951\"},\"element\":{\"id\":\"n16zyj-1ehnkh-9dg92n-fxb552\",\"type\":\"widget\",\"slotId\":\"desktop-btf-grid-6\",\"contentId\":\"amzn1.sym.6150d902-4be3-4eda-9f76-402f3751bee6\",\"painter\":\"fluid-quad-image-label-v2\",\"iSlotId\":\"desktop-btf-grid-6\",\"class\":\"gw-col csm-placement-id-6150d902-4be3-4eda-9f76-402f3751bee6 "
		"desktop-gateway-btf_95d48140-9274-42a1-8519-4b0fb7b8df42 celwidget pd_rd_wg-9GXLg pd_rd_w-zuKWT pd_rd_r-e769952f-6868-4c8b-b6d9-380cafc33db2\",\"legacyId\":\"desktop-btf-grid-6\"}}}},{\"data\":{\"schemaId\":\"csa.ContentRender.3\",\"timestamp\":\"2024-02-07T12:04:02.682Z\",\"width\":311,\"height\":420,\"positionX\":632,\"positionY\":3094,\"messageId\":\"22k6l6-4319rx-ca4blg-ywq01r\",\"application\":\"Retail:Prod:www.amazon.com\",\"obfuscatedMarketplaceId\":\"ATVPDKIKX0DER\",\"lob\":\"1\",\""
		"producerId\":\"csa\",\"entities\":{\"page\":{\"id\":\"y45xqs-v4tsc7-d3onkb-o8oc8f\",\"requestId\":\"5AFSK1C7VNHSD7KRB97Y\",\"pageType\":\"Gateway\",\"subPageType\":\"desktop\"},\"session\":{\"id\":\"133-6658273-5713951\"},\"element\":{\"id\":\"y4coxm-eyhzpu-v7jji8-oehzvg\",\"type\":\"widget\",\"slotId\":\"desktop-btf-grid-7\",\"contentId\":\"amzn1.sym.133c76c2-17c5-4fe7-be87-8177a87f7092\",\"painter\":\"fluid-fat-image-link-v2\",\"iSlotId\":\"desktop-btf-grid-7\",\"class\":\"gw-col "
		"csm-placement-id-133c76c2-17c5-4fe7-be87-8177a87f7092 desktop-gateway-btf_1133fcb2-84a7-4f29-9b6d-63c8c7c00b15 celwidget pd_rd_wg-9GXLg pd_rd_w-4OpKN pd_rd_r-e769952f-6868-4c8b-b6d9-380cafc33db2\",\"legacyId\":\"desktop-btf-grid-7\"}}}},{\"data\":{\"schemaId\":\"csa.ContentRender.3\",\"timestamp\":\"2024-02-07T12:04:02.682Z\",\"width\":311,\"height\":420,\"positionX\":942,\"positionY\":3094,\"messageId\":\"g7hlbb-337asm-p526l5-x2srea\",\"application\":\"Retail:Prod:www.amazon.com\",\""
		"obfuscatedMarketplaceId\":\"ATVPDKIKX0DER\",\"lob\":\"1\",\"producerId\":\"csa\",\"entities\":{\"page\":{\"id\":\"y45xqs-v4tsc7-d3onkb-o8oc8f\",\"requestId\":\"5AFSK1C7VNHSD7KRB97Y\",\"pageType\":\"Gateway\",\"subPageType\":\"desktop\"},\"session\":{\"id\":\"133-6658273-5713951\"},\"element\":{\"id\":\"xkpiny-vr30zc-4mlt7-5513y6\",\"type\":\"widget\",\"slotId\":\"desktop-btf-grid-8\",\"contentId\":\"amzn1.sym.7d3e5960-aaeb-465f-b3c6-e125eab0c973\",\"painter\":\"fluid-fat-image-link-v2\",\"iSlotId"
		"\":\"desktop-btf-grid-8\",\"class\":\"gw-col csm-placement-id-7d3e5960-aaeb-465f-b3c6-e125eab0c973 desktop-gateway-btf_e1cb31ab-9225-48f7-b9bc-6ecac5536148 celwidget pd_rd_wg-9GXLg pd_rd_w-bVQth pd_rd_r-e769952f-6868-4c8b-b6d9-380cafc33db2\",\"legacyId\":\"desktop-btf-grid-8\"}}}},{\"data\":{\"schemaId\":\"csa.ContentRender.3\",\"timestamp\":\"2024-02-07T12:04:02.682Z\",\"width\":1263,\"height\":321,\"positionX\":10,\"positionY\":3534,\"messageId\":\"ph5r10-dd68jq-mbovpm-oxgjgu\",\"application\":"
		"\"Retail:Prod:www.amazon.com\",\"obfuscatedMarketplaceId\":\"ATVPDKIKX0DER\",\"lob\":\"1\",\"producerId\":\"csa\",\"entities\":{\"page\":{\"id\":\"y45xqs-v4tsc7-d3onkb-o8oc8f\",\"requestId\":\"5AFSK1C7VNHSD7KRB97Y\",\"pageType\":\"Gateway\",\"subPageType\":\"desktop\"},\"session\":{\"id\":\"133-6658273-5713951\"},\"element\":{\"id\":\"3cyqi-4osy6c-enwlzc-zc44oo\",\"type\":\"widget\",\"slotId\":\"desktop-5\",\"contentId\":\"amzn1.sym.9929d3ab-edb7-4ef5-a232-26d90f828fa5\",\"painter\":\""
		"ameyal-product-shoveler\",\"iSlotId\":\"desktop-5\",\"class\":\"gw-col desktop-row gwi-row gw-widget-instrument gw-auto-height csm-placement-id-9929d3ab-edb7-4ef5-a232-26d90f828fa5 desktop-gateway-btf_crs_zg_ts-284507 celwidget pd_rd_wg-9GXLg pd_rd_w-QdEji pd_rd_r-e769952f-6868-4c8b-b6d9-380cafc33db2\",\"legacyId\":\"desktop-5\"}}}},{\"data\":{\"schemaId\":\"csa.ContentRender.3\",\"timestamp\":\"2024-02-07T12:04:02.682Z\",\"width\":1263,\"height\":321,\"positionX\":10,\"positionY\":3876,\""
		"messageId\":\"93g5si-cjxsuv-hjg1ut-oysfbt\",\"application\":\"Retail:Prod:www.amazon.com\",\"obfuscatedMarketplaceId\":\"ATVPDKIKX0DER\",\"lob\":\"1\",\"producerId\":\"csa\",\"entities\":{\"page\":{\"id\":\"y45xqs-v4tsc7-d3onkb-o8oc8f\",\"requestId\":\"5AFSK1C7VNHSD7KRB97Y\",\"pageType\":\"Gateway\",\"subPageType\":\"desktop\"},\"session\":{\"id\":\"133-6658273-5713951\"},\"element\":{\"id\":\"bfvtbw-f9qfno-e6w21n-va631k\",\"type\":\"widget\",\"slotId\":\"desktop-6\",\"contentId\":\""
		"amzn1.sym.9929d3ab-edb7-4ef5-a232-26d90f828fa5\",\"painter\":\"ameyal-product-shoveler\",\"iSlotId\":\"desktop-6\",\"class\":\"gw-col desktop-row gwi-row gw-widget-instrument gw-auto-height csm-placement-id-9929d3ab-edb7-4ef5-a232-26d90f828fa5 desktop-gateway-btf_crs_zg_ts-3375251 celwidget pd_rd_wg-9GXLg pd_rd_w-B0Pzl pd_rd_r-e769952f-6868-4c8b-b6d9-380cafc33db2\",\"legacyId\":\"desktop-6\"}}}},{\"data\":{\"schemaId\":\"csa.ContentRender.3\",\"timestamp\":\"2024-02-07T12:04:02.682Z\",\"width\""
		":1263,\"height\":321,\"positionX\":10,\"positionY\":4217,\"messageId\":\"ugmygb-vnc9l9-d61dur-23i3ed\",\"application\":\"Retail:Prod:www.amazon.com\",\"obfuscatedMarketplaceId\":\"ATVPDKIKX0DER\",\"lob\":\"1\",\"producerId\":\"csa\",\"entities\":{\"page\":{\"id\":\"y45xqs-v4tsc7-d3onkb-o8oc8f\",\"requestId\":\"5AFSK1C7VNHSD7KRB97Y\",\"pageType\":\"Gateway\",\"subPageType\":\"desktop\"},\"session\":{\"id\":\"133-6658273-5713951\"},\"element\":{\"id\":\"ucrnvl-psdcht-qb9bs0-245zau\",\"type\":\""
		"widget\",\"slotId\":\"desktop-7\",\"contentId\":\"amzn1.sym.9929d3ab-edb7-4ef5-a232-26d90f828fa5\",\"painter\":\"ameyal-product-shoveler\",\"iSlotId\":\"desktop-7\",\"class\":\"gw-col desktop-row gwi-row gw-widget-instrument gw-auto-height csm-placement-id-9929d3ab-edb7-4ef5-a232-26d90f828fa5 desktop-gateway-btf_crs_zg_ts-541966 celwidget pd_rd_wg-9GXLg pd_rd_w-XAPWh pd_rd_r-e769952f-6868-4c8b-b6d9-380cafc33db2\",\"legacyId\":\"desktop-7\"}}}},{\"data\":{\"schemaId\":\"csa.ContentView.4\",\""
		"timeToViewed\":120,\"pageFirstPaintToElementViewed\":5122,\"timestamp\":\"2024-02-07T12:04:02.802Z\",\"messageId\":\"k0ne4f-dfg16o-p4ln0c-vd25o\",\"application\":\"Retail:Prod:www.amazon.com\",\"obfuscatedMarketplaceId\":\"ATVPDKIKX0DER\",\"lob\":\"1\",\"producerId\":\"csa\",\"entities\":{\"page\":{\"id\":\"y45xqs-v4tsc7-d3onkb-o8oc8f\",\"requestId\":\"5AFSK1C7VNHSD7KRB97Y\",\"pageType\":\"Gateway\",\"subPageType\":\"desktop\"},\"session\":{\"id\":\"133-6658273-5713951\"},\"element\":{\"id\":\""
		"vbopwz-oyyiqe-v63gb2-x54s73\",\"class\":\"nav-sprite-v1 celwidget nav-bluebeacon nav-a11y-t1 bold-focus-hover layout2 nav-flex layout3 layout3-alt nav-packard-glow hamburger nav-progressive-attribute\",\"slotId\":\"Navigation-desktop-navbar\",\"legacyId\":\"Navigation-desktop-navbar\",\"type\":\"widget\"}}}},{\"data\":{\"schemaId\":\"csa.ContentView.4\",\"timeToViewed\":120,\"pageFirstPaintToElementViewed\":5122,\"timestamp\":\"2024-02-07T12:04:02.802Z\",\"messageId\":\""
		"s8xn5y-d87edu-48fhjg-qsiphc\",\"application\":\"Retail:Prod:www.amazon.com\",\"obfuscatedMarketplaceId\":\"ATVPDKIKX0DER\",\"lob\":\"1\",\"producerId\":\"csa\",\"entities\":{\"page\":{\"id\":\"y45xqs-v4tsc7-d3onkb-o8oc8f\",\"requestId\":\"5AFSK1C7VNHSD7KRB97Y\",\"pageType\":\"Gateway\",\"subPageType\":\"desktop\"},\"session\":{\"id\":\"133-6658273-5713951\"},\"element\":{\"id\":\"ns5rja-2pkead-n95e5e-m01txx\",\"type\":\"widget\",\"slotId\":\"desktop-hero-order\",\"iSlotId\":\"desktop-hero-order\","
		"\"class\":\"celwidget\",\"legacyId\":\"desktop-hero-order\"}}}},{\"data\":{\"schemaId\":\"csa.ContentView.4\",\"timeToViewed\":121,\"pageFirstPaintToElementViewed\":5123,\"timestamp\":\"2024-02-07T12:04:02.803Z\",\"messageId\":\"qzap0f-l9fg63-6to1gp-bpcnwl\",\"application\":\"Retail:Prod:www.amazon.com\",\"obfuscatedMarketplaceId\":\"ATVPDKIKX0DER\",\"lob\":\"1\",\"producerId\":\"csa\",\"entities\":{\"page\":{\"id\":\"y45xqs-v4tsc7-d3onkb-o8oc8f\",\"requestId\":\"5AFSK1C7VNHSD7KRB97Y\",\"pageType"
		"\":\"Gateway\",\"subPageType\":\"desktop\"},\"session\":{\"id\":\"133-6658273-5713951\"},\"element\":{\"id\":\"fu7bue-wtzqip-zk9ll-9kqpu9\",\"type\":\"widget\",\"slotId\":\"gw-ftGr-desktop-hero-1\",\"contentId\":\"amzn1.sym.9cbb6960-2ff9-41e4-94ff-32680c208d5a\",\"painter\":\"cropped-image-link\",\"iSlotId\":\"gw-ftGr-desktop-hero-1\",\"class\":\"gw-ftGr-desktop-hero gw-critical-content csm-placement-id-9cbb6960-2ff9-41e4-94ff-32680c208d5a desktop-gateway-hero_5a847718-8687-47ec-ba03-57a43d59aad1 "
		"celwidget pd_rd_wg-KV7Cy pd_rd_w-UYpeQ pd_rd_r-12687d5e-92e0-4165-9b79-7259bc96c652\",\"legacyId\":\"gw-ftGr-desktop-hero-1\",\"parentId\":\"ns5rja-2pkead-n95e5e-m01txx\"}}}},{\"data\":{\"schemaId\":\"csa.ContentView.4\",\"timeToViewed\":121,\"pageFirstPaintToElementViewed\":5123,\"timestamp\":\"2024-02-07T12:04:02.803Z\",\"messageId\":\"mqk4s9-rn0yxd-jf2hao-rstldo\",\"application\":\"Retail:Prod:www.amazon.com\",\"obfuscatedMarketplaceId\":\"ATVPDKIKX0DER\",\"lob\":\"1\",\"producerId\":\"csa\",\""
		"entities\":{\"page\":{\"id\":\"y45xqs-v4tsc7-d3onkb-o8oc8f\",\"requestId\":\"5AFSK1C7VNHSD7KRB97Y\",\"pageType\":\"Gateway\",\"subPageType\":\"desktop\"},\"session\":{\"id\":\"133-6658273-5713951\"},\"element\":{\"id\":\"2w7gsr-omf8an-xskpxz-qnj8ua\",\"type\":\"widget\",\"slotId\":\"desktop-banner-stripe\",\"contentId\":\"amzn1.sym.ad7e52ed-7e0b-44e3-85c1-b8a893426b20\",\"painter\":\"text-link-stripe-v2\",\"iSlotId\":\"desktop-banner-stripe\",\"class\":\"desktop-stripe "
		"csm-placement-id-ad7e52ed-7e0b-44e3-85c1-b8a893426b20 desktop-gateway-atf_a02468d5-861c-403a-87e5-b4b83843220f celwidget pd_rd_wg-epykp pd_rd_w-BjEpo pd_rd_r-cc19505d-c0eb-4ddb-a7af-01fc82604681\",\"legacyId\":\"desktop-banner-stripe\"}}}},{\"data\":{\"schemaId\":\"csa.ContentView.4\",\"timeToViewed\":121,\"pageFirstPaintToElementViewed\":5123,\"timestamp\":\"2024-02-07T12:04:02.803Z\",\"messageId\":\"odxrmb-72qx0t-i476qr-7kb9ty\",\"application\":\"Retail:Prod:www.amazon.com\",\""
		"obfuscatedMarketplaceId\":\"ATVPDKIKX0DER\",\"lob\":\"1\",\"producerId\":\"csa\",\"entities\":{\"page\":{\"id\":\"y45xqs-v4tsc7-d3onkb-o8oc8f\",\"requestId\":\"5AFSK1C7VNHSD7KRB97Y\",\"pageType\":\"Gateway\",\"subPageType\":\"desktop\"},\"session\":{\"id\":\"133-6658273-5713951\"},\"element\":{\"id\":\"eizs84-2yco1r-vquque-we3yzq\",\"type\":\"widget\",\"slotId\":\"desktop-grid-1\",\"contentId\":\"amzn1.sym.12129333-2117-4490-9c17-6d31baf0582a\",\"painter\":\"fluid-quad-image-label-v2\",\"iSlotId\""
		":\"desktop-grid-1\",\"class\":\"gw-col csm-placement-id-12129333-2117-4490-9c17-6d31baf0582a desktop-gateway-atf_839e00e4-7ec3-4d41-8af3-638cd55ecdc7 celwidget pd_rd_wg-epykp pd_rd_w-mt0Gv pd_rd_r-cc19505d-c0eb-4ddb-a7af-01fc82604681\",\"legacyId\":\"desktop-grid-1\"}}}},{\"data\":{\"schemaId\":\"csa.ContentView.4\",\"timeToViewed\":121,\"pageFirstPaintToElementViewed\":5123,\"timestamp\":\"2024-02-07T12:04:02.803Z\",\"messageId\":\"8u7xiu-95mgtz-mbotnl-c9l0vt\",\"application\":\"Retail:Prod"
		":www.amazon.com\",\"obfuscatedMarketplaceId\":\"ATVPDKIKX0DER\",\"lob\":\"1\",\"producerId\":\"csa\",\"entities\":{\"page\":{\"id\":\"y45xqs-v4tsc7-d3onkb-o8oc8f\",\"requestId\":\"5AFSK1C7VNHSD7KRB97Y\",\"pageType\":\"Gateway\",\"subPageType\":\"desktop\"},\"session\":{\"id\":\"133-6658273-5713951\"},\"element\":{\"id\":\"z2we0i-y21n32-nrmvry-tuv69k\",\"type\":\"widget\",\"slotId\":\"desktop-grid-2\",\"contentId\":\"amzn1.sym.7acbca95-6949-4783-9691-9ac9df8021d9\",\"painter\":\""
		"fluid-fat-image-link-v2\",\"iSlotId\":\"desktop-grid-2\",\"class\":\"gw-col csm-placement-id-7acbca95-6949-4783-9691-9ac9df8021d9 desktop-gateway-atf_005cef6d-6734-4108-af95-4931d86ee621 celwidget pd_rd_wg-epykp pd_rd_w-Awkjl pd_rd_r-cc19505d-c0eb-4ddb-a7af-01fc82604681\",\"legacyId\":\"desktop-grid-2\"}}}},{\"data\":{\"schemaId\":\"csa.ContentView.4\",\"timeToViewed\":121,\"pageFirstPaintToElementViewed\":5123,\"timestamp\":\"2024-02-07T12:04:02.803Z\",\"messageId\":\"gi7634-3l2o5k-5o9os8-4d6ucw"
		"\",\"application\":\"Retail:Prod:www.amazon.com\",\"obfuscatedMarketplaceId\":\"ATVPDKIKX0DER\",\"lob\":\"1\",\"producerId\":\"csa\",\"entities\":{\"page\":{\"id\":\"y45xqs-v4tsc7-d3onkb-o8oc8f\",\"requestId\":\"5AFSK1C7VNHSD7KRB97Y\",\"pageType\":\"Gateway\",\"subPageType\":\"desktop\"},\"session\":{\"id\":\"133-6658273-5713951\"},\"element\":{\"id\":\"qd56tg-ru5qqr-c7bpcz-c200y3\",\"type\":\"widget\",\"slotId\":\"desktop-grid-3\",\"contentId\":\"amzn1.sym.3a6a1f11-a96c-444b-b219-97322616eb92\","
		"\"painter\":\"fluid-fat-image-link-v2\",\"iSlotId\":\"desktop-grid-3\",\"class\":\"gw-col csm-placement-id-3a6a1f11-a96c-444b-b219-97322616eb92 desktop-gateway-atf_53e62ccb-d2a2-4db4-8376-c9bc073e5b02 celwidget pd_rd_wg-epykp pd_rd_w-6iVpq pd_rd_r-cc19505d-c0eb-4ddb-a7af-01fc82604681\",\"legacyId\":\"desktop-grid-3\"}}}},{\"data\":{\"schemaId\":\"csa.ContentView.4\",\"timeToViewed\":121,\"pageFirstPaintToElementViewed\":5123,\"timestamp\":\"2024-02-07T12:04:02.803Z\",\"messageId\":\""
		"94vlop-jv1elq-od79cu-81no7k\",\"application\":\"Retail:Prod:www.amazon.com\",\"obfuscatedMarketplaceId\":\"ATVPDKIKX0DER\",\"lob\":\"1\",\"producerId\":\"csa\",\"entities\":{\"page\":{\"id\":\"y45xqs-v4tsc7-d3onkb-o8oc8f\",\"requestId\":\"5AFSK1C7VNHSD7KRB97Y\",\"pageType\":\"Gateway\",\"subPageType\":\"desktop\"},\"session\":{\"id\":\"133-6658273-5713951\"},\"element\":{\"id\":\"e72icp-oh4epu-5rchz3-f0pato\",\"type\":\"widget\",\"slotId\":\"desktop-grid-4\",\"contentId\":\""
		"amzn1.sym.c0480761-6b7c-400b-bca5-28ff417248d1\",\"painter\":\"fluid-quad-image-label-v2\",\"iSlotId\":\"desktop-grid-4\",\"class\":\"gw-col csm-placement-id-c0480761-6b7c-400b-bca5-28ff417248d1 desktop-gateway-atf_985bafb1-ea4d-441e-b1af-4e86601d4129 celwidget pd_rd_wg-epykp pd_rd_w-crvNC pd_rd_r-cc19505d-c0eb-4ddb-a7af-01fc82604681\",\"legacyId\":\"desktop-grid-4\"}}}},{\"data\":{\"schemaId\":\"csa.ContentView.4\",\"timeToViewed\":121,\"pageFirstPaintToElementViewed\":5123,\"timestamp\":\""
		"2024-02-07T12:04:02.803Z\",\"messageId\":\"xr1vty-kcp0a1-gpxkpn-yiw5jo\",\"application\":\"Retail:Prod:www.amazon.com\",\"obfuscatedMarketplaceId\":\"ATVPDKIKX0DER\",\"lob\":\"1\",\"producerId\":\"csa\",\"entities\":{\"page\":{\"id\":\"y45xqs-v4tsc7-d3onkb-o8oc8f\",\"requestId\":\"5AFSK1C7VNHSD7KRB97Y\",\"pageType\":\"Gateway\",\"subPageType\":\"desktop\"},\"session\":{\"id\":\"133-6658273-5713951\"},\"element\":{\"id\":\"nicpwd-9edqef-dj2dmz-lenrk9\",\"type\":\"link\",\"slotId\":\""
		"nav-link-accountList\",\"contentId\":\"nav_ya_signin\",\"iSlotId\":\"nav-link-accountList\",\"href\":\"https://www.amazon.com/ap/signin?openid.pape.max_auth_age=0&openid.return_to=https%3A%2F%2Fwww.amazon.com%2F%3F_encoding%3DUTF8%26ref_%3Dnav_ya_signin&openid.identity=http%3A%2F%2Fspecs.openid.net%2Fauth%2F2.0%2Fidentifier_select&openid.assoc_handle=usflex&openid.mode=checkid_setup&openid.claimed_id=http%3A%2F%2Fspecs.openid.net%2Fauth%2F2.0%2Fidentifier_select&openid.ns="
		"http%3A%2F%2Fspecs.openid.net%2Fauth%2F2.0\",\"class\":\"nav-a nav-a-2   nav-progressive-attribute\",\"parentId\":\"vbopwz-oyyiqe-v63gb2-x54s73\"}}}},{\"data\":{\"schemaId\":\"csa.ContentView.4\",\"timeToViewed\":121,\"pageFirstPaintToElementViewed\":5123,\"timestamp\":\"2024-02-07T12:04:02.803Z\",\"messageId\":\"uox4da-8874tc-dwkubo-qgpf4z\",\"application\":\"Retail:Prod:www.amazon.com\",\"obfuscatedMarketplaceId\":\"ATVPDKIKX0DER\",\"lob\":\"1\",\"producerId\":\"csa\",\"entities\":{\"page\":{\""
		"id\":\"y45xqs-v4tsc7-d3onkb-o8oc8f\",\"requestId\":\"5AFSK1C7VNHSD7KRB97Y\",\"pageType\":\"Gateway\",\"subPageType\":\"desktop\"},\"session\":{\"id\":\"133-6658273-5713951\"},\"element\":{\"id\":\"ahx9vz-h4gjmd-art5kv-gv96eq\",\"type\":\"widget\",\"slotId\":\"HamburgerMenuDesktop\",\"interactionEvents\":\"click\",\"iSlotId\":\"HamburgerMenuDesktop\",\"href\":\"javascript: void(0)\",\"parentId\":\"vbopwz-oyyiqe-v63gb2-x54s73\"}}}},{\"data\":{\"schemaId\":\"csa.ContentView.4\",\"timeToViewed\":121,"
		"\"pageFirstPaintToElementViewed\":5123,\"timestamp\":\"2024-02-07T12:04:02.803Z\",\"messageId\":\"gvkmn7-agg9df-ld50vc-wzafjw\",\"application\":\"Retail:Prod:www.amazon.com\",\"obfuscatedMarketplaceId\":\"ATVPDKIKX0DER\",\"lob\":\"1\",\"producerId\":\"csa\",\"entities\":{\"page\":{\"id\":\"y45xqs-v4tsc7-d3onkb-o8oc8f\",\"requestId\":\"5AFSK1C7VNHSD7KRB97Y\",\"pageType\":\"Gateway\",\"subPageType\":\"desktop\"},\"session\":{\"id\":\"133-6658273-5713951\"},\"element\":{\"id\":\""
		"rp0dtf-aqn4zy-adpzy7-7uns1u\",\"type\":\"link\",\"slotId\":\"nav_cs_0\",\"contentId\":\"nav_cs_gb\",\"iSlotId\":\"nav_cs_0\",\"href\":\"/gp/goldbox?ref_=nav_cs_gb\",\"class\":\"nav-a  \",\"parentId\":\"vbopwz-oyyiqe-v63gb2-x54s73\"}}}},{\"data\":{\"schemaId\":\"csa.ContentView.4\",\"timeToViewed\":121,\"pageFirstPaintToElementViewed\":5123,\"timestamp\":\"2024-02-07T12:04:02.803Z\",\"messageId\":\"j9a131-vmlw92-psad68-n85v5o\",\"application\":\"Retail:Prod:www.amazon.com\",\""
		"obfuscatedMarketplaceId\":\"ATVPDKIKX0DER\",\"lob\":\"1\",\"producerId\":\"csa\",\"entities\":{\"page\":{\"id\":\"y45xqs-v4tsc7-d3onkb-o8oc8f\",\"requestId\":\"5AFSK1C7VNHSD7KRB97Y\",\"pageType\":\"Gateway\",\"subPageType\":\"desktop\"},\"session\":{\"id\":\"133-6658273-5713951\"},\"element\":{\"id\":\"9bxgb2-rk4ugy-8xrcud-41ek63\",\"type\":\"link\",\"slotId\":\"nav_cs_1\",\"contentId\":\"nav_cs_customerservice\",\"iSlotId\":\"nav_cs_1\",\"href\":\"/gp/help/customer/display.html?nodeId=508510&ref_"
		"=nav_cs_customerservice\",\"class\":\"nav-a  \",\"parentId\":\"vbopwz-oyyiqe-v63gb2-x54s73\"}}}},{\"data\":{\"schemaId\":\"csa.ContentView.4\",\"timeToViewed\":121,\"pageFirstPaintToElementViewed\":5123,\"timestamp\":\"2024-02-07T12:04:02.803Z\",\"messageId\":\"cev54o-dfrt0g-439tct-wgvq8n\",\"application\":\"Retail:Prod:www.amazon.com\",\"obfuscatedMarketplaceId\":\"ATVPDKIKX0DER\",\"lob\":\"1\",\"producerId\":\"csa\",\"entities\":{\"page\":{\"id\":\"y45xqs-v4tsc7-d3onkb-o8oc8f\",\"requestId\":\""
		"5AFSK1C7VNHSD7KRB97Y\",\"pageType\":\"Gateway\",\"subPageType\":\"desktop\"},\"session\":{\"id\":\"133-6658273-5713951\"},\"element\":{\"id\":\"laex1h-pn7wle-altnz6-ui8oov\",\"type\":\"link\",\"slotId\":\"nav_cs_2\",\"contentId\":\"nav_cs_registry\",\"iSlotId\":\"nav_cs_2\",\"href\":\"/gp/browse.html?node=16115931011&ref_=nav_cs_registry\",\"class\":\"nav-a  \",\"parentId\":\"vbopwz-oyyiqe-v63gb2-x54s73\"}}}},{\"data\":{\"renderedToMeaningful\":601,\"renderedToViewed\":601,\"schemaId\":\""
		"csa.PageView.5\",\"timestamp\":\"2024-02-07T12:04:02.805Z\",\"messageId\":\"3qfeek-qaied6-hue8d3-eiyobu\",\"application\":\"Retail:Prod:www.amazon.com\",\"obfuscatedMarketplaceId\":\"ATVPDKIKX0DER\",\"lob\":\"1\",\"producerId\":\"csa\",\"entities\":{\"page\":{\"id\":\"y45xqs-v4tsc7-d3onkb-o8oc8f\",\"requestId\":\"5AFSK1C7VNHSD7KRB97Y\",\"meaningful\":\"interactive\",\"url\":\"https://www.amazon.com/\",\"server\":\"www.amazon.com\",\"path\":\"/\",\"referrer\":\"\",\"title\":\"Amazon.com. Spend "
		"less. Smile more.\",\"transitionType\":\"hard\",\"pageType\":\"Gateway\",\"subPageType\":\"desktop\",\"pageTypeId\":\"desktop\"},\"session\":{\"id\":\"133-6658273-5713951\"}}}},{\"data\":{\"schemaId\":\"csa.ContentView.4\",\"timeToViewed\":129,\"pageFirstPaintToElementViewed\":5131,\"timestamp\":\"2024-02-07T12:04:02.811Z\",\"messageId\":\"i1uo2z-v9cwdv-hjzk6b-bl76sz\",\"application\":\"Retail:Prod:www.amazon.com\",\"obfuscatedMarketplaceId\":\"ATVPDKIKX0DER\",\"lob\":\"1\",\"producerId\":\"csa\","
		"\"entities\":{\"page\":{\"id\":\"y45xqs-v4tsc7-d3onkb-o8oc8f\",\"requestId\":\"5AFSK1C7VNHSD7KRB97Y\",\"pageType\":\"Gateway\",\"subPageType\":\"desktop\"},\"session\":{\"id\":\"133-6658273-5713951\"},\"element\":{\"id\":\"e2wxv3-pf2bif-mjr5hq-lasosr\",\"type\":\"link\",\"slotId\":\"nav_cs_3\",\"contentId\":\"nav_cs_gc\",\"iSlotId\":\"nav_cs_3\",\"href\":\"/gift-cards/b/?ie=UTF8&node=2238192011&ref_=nav_cs_gc\",\"class\":\"nav-a  \",\"parentId\":\"vbopwz-oyyiqe-v63gb2-x54s73\"}}}},{\"data\":{\""
		"schemaId\":\"csa.ContentView.4\",\"timeToViewed\":129,\"pageFirstPaintToElementViewed\":5131,\"timestamp\":\"2024-02-07T12:04:02.811Z\",\"messageId\":\"u3q6mh-2p9vvc-gkaf24-b9l7w5\",\"application\":\"Retail:Prod:www.amazon.com\",\"obfuscatedMarketplaceId\":\"ATVPDKIKX0DER\",\"lob\":\"1\",\"producerId\":\"csa\",\"entities\":{\"page\":{\"id\":\"y45xqs-v4tsc7-d3onkb-o8oc8f\",\"requestId\":\"5AFSK1C7VNHSD7KRB97Y\",\"pageType\":\"Gateway\",\"subPageType\":\"desktop\"},\"session\":{\"id\":\""
		"133-6658273-5713951\"},\"element\":{\"id\":\"mw7ee5-saiwhk-a7why0-th47fv\",\"type\":\"link\",\"slotId\":\"nav_cs_4\",\"contentId\":\"nav_cs_sell\",\"iSlotId\":\"nav_cs_4\",\"href\":\"/b/?_encoding=UTF8&ld=AZUSSOA-sell&node=12766669011&ref_=nav_cs_sell\",\"class\":\"nav-a  \",\"parentId\":\"vbopwz-oyyiqe-v63gb2-x54s73\"}}}},{\"data\":{\"network\":{\"downlink\":\"6\",\"downlinkMax\":\"null\",\"rtt\":\"50\",\"type\":\"null\",\"effectiveType\":\"4g\",\"saveData\":\"false\"},\"language\":\"en-GB\",\""
		"doNotTrack\":null,\"hardwareConcurrency\":4,\"deviceMemory\":8,\"cookieEnabled\":true,\"webdriver\":false,\"schemaId\":\"csa.Navigator.5\",\"timestamp\":\"2024-02-07T12:04:03.558Z\",\"messageId\":\"tu71f-ea5y5w-huvorg-a7gqxe\",\"application\":\"Retail:Prod:www.amazon.com\",\"obfuscatedMarketplaceId\":\"ATVPDKIKX0DER\",\"lob\":\"1\",\"producerId\":\"csa\",\"entities\":{\"page\":{\"id\":\"y45xqs-v4tsc7-d3onkb-o8oc8f\",\"requestId\":\"5AFSK1C7VNHSD7KRB97Y\",\"pageType\":\"Gateway\",\"subPageType\":\""
		"desktop\"},\"session\":{\"id\":\"133-6658273-5713951\"}}}},{\"data\":{\"schemaId\":\"csa.ContentImpressed.3\",\"timeToImpressed\":1124,\"pageFirstPaintToElementImpressed\":6126,\"timestamp\":\"2024-02-07T12:04:03.806Z\",\"messageId\":\"fqmwqv-4islwn-fcg9e-csapa7\",\"application\":\"Retail:Prod:www.amazon.com\",\"obfuscatedMarketplaceId\":\"ATVPDKIKX0DER\",\"lob\":\"1\",\"producerId\":\"csa\",\"entities\":{\"page\":{\"id\":\"y45xqs-v4tsc7-d3onkb-o8oc8f\",\"requestId\":\"5AFSK1C7VNHSD7KRB97Y\",\""
		"pageType\":\"Gateway\",\"subPageType\":\"desktop\"},\"session\":{\"id\":\"133-6658273-5713951\"},\"element\":{\"id\":\"vbopwz-oyyiqe-v63gb2-x54s73\",\"class\":\"nav-sprite-v1 celwidget nav-bluebeacon nav-a11y-t1 bold-focus-hover layout2 nav-flex layout3 layout3-alt nav-packard-glow hamburger nav-progressive-attribute\",\"slotId\":\"Navigation-desktop-navbar\",\"legacyId\":\"Navigation-desktop-navbar\",\"type\":\"widget\"}}}},{\"data\":{\"schemaId\":\"csa.ContentImpressed.3\",\"timeToImpressed\""
		":1124,\"pageFirstPaintToElementImpressed\":6126,\"timestamp\":\"2024-02-07T12:04:03.806Z\",\"messageId\":\"mlic5b-b2bq6o-yumsyf-k4jodh\",\"application\":\"Retail:Prod:www.amazon.com\",\"obfuscatedMarketplaceId\":\"ATVPDKIKX0DER\",\"lob\":\"1\",\"producerId\":\"csa\",\"entities\":{\"page\":{\"id\":\"y45xqs-v4tsc7-d3onkb-o8oc8f\",\"requestId\":\"5AFSK1C7VNHSD7KRB97Y\",\"pageType\":\"Gateway\",\"subPageType\":\"desktop\"},\"session\":{\"id\":\"133-6658273-5713951\"},\"element\":{\"id\":\""
		"ns5rja-2pkead-n95e5e-m01txx\",\"type\":\"widget\",\"slotId\":\"desktop-hero-order\",\"iSlotId\":\"desktop-hero-order\",\"class\":\"celwidget\",\"legacyId\":\"desktop-hero-order\"}}}},{\"data\":{\"schemaId\":\"csa.ContentImpressed.3\",\"timeToImpressed\":1124,\"pageFirstPaintToElementImpressed\":6126,\"timestamp\":\"2024-02-07T12:04:03.806Z\",\"messageId\":\"ovynmu-wbjsng-dfjydg-udrlpo\",\"application\":\"Retail:Prod:www.amazon.com\",\"obfuscatedMarketplaceId\":\"ATVPDKIKX0DER\",\"lob\":\"1\",\""
		"producerId\":\"csa\",\"entities\":{\"page\":{\"id\":\"y45xqs-v4tsc7-d3onkb-o8oc8f\",\"requestId\":\"5AFSK1C7VNHSD7KRB97Y\",\"pageType\":\"Gateway\",\"subPageType\":\"desktop\"},\"session\":{\"id\":\"133-6658273-5713951\"},\"element\":{\"id\":\"fu7bue-wtzqip-zk9ll-9kqpu9\",\"type\":\"widget\",\"slotId\":\"gw-ftGr-desktop-hero-1\",\"contentId\":\"amzn1.sym.9cbb6960-2ff9-41e4-94ff-32680c208d5a\",\"painter\":\"cropped-image-link\",\"iSlotId\":\"gw-ftGr-desktop-hero-1\",\"class\":\"gw-ftGr-desktop-hero"
		" gw-critical-content csm-placement-id-9cbb6960-2ff9-41e4-94ff-32680c208d5a desktop-gateway-hero_5a847718-8687-47ec-ba03-57a43d59aad1 celwidget pd_rd_wg-KV7Cy pd_rd_w-UYpeQ pd_rd_r-12687d5e-92e0-4165-9b79-7259bc96c652\",\"legacyId\":\"gw-ftGr-desktop-hero-1\",\"parentId\":\"ns5rja-2pkead-n95e5e-m01txx\"}}}},{\"data\":{\"schemaId\":\"csa.ContentImpressed.3\",\"timeToImpressed\":1124,\"pageFirstPaintToElementImpressed\":6126,\"timestamp\":\"2024-02-07T12:04:03.806Z\",\"messageId\":\""
		"ugr13z-wp88oc-s4sao4-6nqfhq\",\"application\":\"Retail:Prod:www.amazon.com\",\"obfuscatedMarketplaceId\":\"ATVPDKIKX0DER\",\"lob\":\"1\",\"producerId\":\"csa\",\"entities\":{\"page\":{\"id\":\"y45xqs-v4tsc7-d3onkb-o8oc8f\",\"requestId\":\"5AFSK1C7VNHSD7KRB97Y\",\"pageType\":\"Gateway\",\"subPageType\":\"desktop\"},\"session\":{\"id\":\"133-6658273-5713951\"},\"element\":{\"id\":\"2w7gsr-omf8an-xskpxz-qnj8ua\",\"type\":\"widget\",\"slotId\":\"desktop-banner-stripe\",\"contentId\":\""
		"amzn1.sym.ad7e52ed-7e0b-44e3-85c1-b8a893426b20\",\"painter\":\"text-link-stripe-v2\",\"iSlotId\":\"desktop-banner-stripe\",\"class\":\"desktop-stripe csm-placement-id-ad7e52ed-7e0b-44e3-85c1-b8a893426b20 desktop-gateway-atf_a02468d5-861c-403a-87e5-b4b83843220f celwidget pd_rd_wg-epykp pd_rd_w-BjEpo pd_rd_r-cc19505d-c0eb-4ddb-a7af-01fc82604681\",\"legacyId\":\"desktop-banner-stripe\"}}}},{\"data\":{\"schemaId\":\"csa.ContentImpressed.3\",\"timeToImpressed\":1124,\"pageFirstPaintToElementImpressed\""
		":6126,\"timestamp\":\"2024-02-07T12:04:03.806Z\",\"messageId\":\"pg6zpr-x7ozo9-i2ozq2-kbqa6a\",\"application\":\"Retail:Prod:www.amazon.com\",\"obfuscatedMarketplaceId\":\"ATVPDKIKX0DER\",\"lob\":\"1\",\"producerId\":\"csa\",\"entities\":{\"page\":{\"id\":\"y45xqs-v4tsc7-d3onkb-o8oc8f\",\"requestId\":\"5AFSK1C7VNHSD7KRB97Y\",\"pageType\":\"Gateway\",\"subPageType\":\"desktop\"},\"session\":{\"id\":\"133-6658273-5713951\"},\"element\":{\"id\":\"nicpwd-9edqef-dj2dmz-lenrk9\",\"type\":\"link\",\""
		"slotId\":\"nav-link-accountList\",\"contentId\":\"nav_ya_signin\",\"iSlotId\":\"nav-link-accountList\",\"href\":\"https://www.amazon.com/ap/signin?openid.pape.max_auth_age=0&openid.return_to=https%3A%2F%2Fwww.amazon.com%2F%3F_encoding%3DUTF8%26ref_%3Dnav_ya_signin&openid.identity=http%3A%2F%2Fspecs.openid.net%2Fauth%2F2.0%2Fidentifier_select&openid.assoc_handle=usflex&openid.mode=checkid_setup&openid.claimed_id=http%3A%2F%2Fspecs.openid.net%2Fauth%2F2.0%2Fidentifier_select&openid.ns="
		"http%3A%2F%2Fspecs.openid.net%2Fauth%2F2.0\",\"class\":\"nav-a nav-a-2   nav-progressive-attribute\",\"parentId\":\"vbopwz-oyyiqe-v63gb2-x54s73\"}}}},{\"data\":{\"schemaId\":\"csa.ContentImpressed.3\",\"timeToImpressed\":1124,\"pageFirstPaintToElementImpressed\":6126,\"timestamp\":\"2024-02-07T12:04:03.806Z\",\"messageId\":\"m32rn5-tcz6cf-qzmlql-y784d5\",\"application\":\"Retail:Prod:www.amazon.com\",\"obfuscatedMarketplaceId\":\"ATVPDKIKX0DER\",\"lob\":\"1\",\"producerId\":\"csa\",\"entities\":{"
		"\"page\":{\"id\":\"y45xqs-v4tsc7-d3onkb-o8oc8f\",\"requestId\":\"5AFSK1C7VNHSD7KRB97Y\",\"pageType\":\"Gateway\",\"subPageType\":\"desktop\"},\"session\":{\"id\":\"133-6658273-5713951\"},\"element\":{\"id\":\"ahx9vz-h4gjmd-art5kv-gv96eq\",\"type\":\"widget\",\"slotId\":\"HamburgerMenuDesktop\",\"interactionEvents\":\"click\",\"iSlotId\":\"HamburgerMenuDesktop\",\"href\":\"javascript: void(0)\",\"parentId\":\"vbopwz-oyyiqe-v63gb2-x54s73\"}}}},{\"data\":{\"schemaId\":\"csa.ContentImpressed.3\",\""
		"timeToImpressed\":1124,\"pageFirstPaintToElementImpressed\":6126,\"timestamp\":\"2024-02-07T12:04:03.806Z\",\"messageId\":\"eks8tg-hpqc4h-pj2jzi-mtmaho\",\"application\":\"Retail:Prod:www.amazon.com\",\"obfuscatedMarketplaceId\":\"ATVPDKIKX0DER\",\"lob\":\"1\",\"producerId\":\"csa\",\"entities\":{\"page\":{\"id\":\"y45xqs-v4tsc7-d3onkb-o8oc8f\",\"requestId\":\"5AFSK1C7VNHSD7KRB97Y\",\"pageType\":\"Gateway\",\"subPageType\":\"desktop\"},\"session\":{\"id\":\"133-6658273-5713951\"},\"element\":{\""
		"id\":\"rp0dtf-aqn4zy-adpzy7-7uns1u\",\"type\":\"link\",\"slotId\":\"nav_cs_0\",\"contentId\":\"nav_cs_gb\",\"iSlotId\":\"nav_cs_0\",\"href\":\"/gp/goldbox?ref_=nav_cs_gb\",\"class\":\"nav-a  \",\"parentId\":\"vbopwz-oyyiqe-v63gb2-x54s73\"}}}},{\"data\":{\"schemaId\":\"csa.ContentImpressed.3\",\"timeToImpressed\":1124,\"pageFirstPaintToElementImpressed\":6126,\"timestamp\":\"2024-02-07T12:04:03.806Z\",\"messageId\":\"1kkfmh-4pu06s-2lczlp-y7egnb\",\"application\":\"Retail:Prod:www.amazon.com\",\""
		"obfuscatedMarketplaceId\":\"ATVPDKIKX0DER\",\"lob\":\"1\",\"producerId\":\"csa\",\"entities\":{\"page\":{\"id\":\"y45xqs-v4tsc7-d3onkb-o8oc8f\",\"requestId\":\"5AFSK1C7VNHSD7KRB97Y\",\"pageType\":\"Gateway\",\"subPageType\":\"desktop\"},\"session\":{\"id\":\"133-6658273-5713951\"},\"element\":{\"id\":\"9bxgb2-rk4ugy-8xrcud-41ek63\",\"type\":\"link\",\"slotId\":\"nav_cs_1\",\"contentId\":\"nav_cs_customerservice\",\"iSlotId\":\"nav_cs_1\",\"href\":\"/gp/help/customer/display.html?nodeId=508510&ref_"
		"=nav_cs_customerservice\",\"class\":\"nav-a  \",\"parentId\":\"vbopwz-oyyiqe-v63gb2-x54s73\"}}}},{\"data\":{\"schemaId\":\"csa.ContentImpressed.3\",\"timeToImpressed\":1124,\"pageFirstPaintToElementImpressed\":6126,\"timestamp\":\"2024-02-07T12:04:03.806Z\",\"messageId\":\"hz089-e92dn9-7jjiol-p81peu\",\"application\":\"Retail:Prod:www.amazon.com\",\"obfuscatedMarketplaceId\":\"ATVPDKIKX0DER\",\"lob\":\"1\",\"producerId\":\"csa\",\"entities\":{\"page\":{\"id\":\"y45xqs-v4tsc7-d3onkb-o8oc8f\",\""
		"requestId\":\"5AFSK1C7VNHSD7KRB97Y\",\"pageType\":\"Gateway\",\"subPageType\":\"desktop\"},\"session\":{\"id\":\"133-6658273-5713951\"},\"element\":{\"id\":\"laex1h-pn7wle-altnz6-ui8oov\",\"type\":\"link\",\"slotId\":\"nav_cs_2\",\"contentId\":\"nav_cs_registry\",\"iSlotId\":\"nav_cs_2\",\"href\":\"/gp/browse.html?node=16115931011&ref_=nav_cs_registry\",\"class\":\"nav-a  \",\"parentId\":\"vbopwz-oyyiqe-v63gb2-x54s73\"}}}},{\"data\":{\"renderedToMeaningful\":601,\"renderedToViewed\":601,\""
		"renderedToImpressed\":1602,\"schemaId\":\"csa.PageImpressed.3\",\"timestamp\":\"2024-02-07T12:04:03.806Z\",\"messageId\":\"zduc8u-c52l25-lw1scs-pzpswe\",\"application\":\"Retail:Prod:www.amazon.com\",\"obfuscatedMarketplaceId\":\"ATVPDKIKX0DER\",\"lob\":\"1\",\"producerId\":\"csa\",\"entities\":{\"page\":{\"id\":\"y45xqs-v4tsc7-d3onkb-o8oc8f\",\"requestId\":\"5AFSK1C7VNHSD7KRB97Y\",\"meaningful\":\"interactive\",\"url\":\"https://www.amazon.com/\",\"server\":\"www.amazon.com\",\"path\":\"/\",\""
		"referrer\":\"\",\"title\":\"Amazon.com. Spend less. Smile more.\",\"transitionType\":\"hard\",\"pageType\":\"Gateway\",\"subPageType\":\"desktop\",\"pageTypeId\":\"desktop\"},\"session\":{\"id\":\"133-6658273-5713951\"}}}},{\"data\":{\"schemaId\":\"csa.ContentImpressed.3\",\"timeToImpressed\":1139,\"pageFirstPaintToElementImpressed\":6141,\"timestamp\":\"2024-02-07T12:04:03.821Z\",\"messageId\":\"1sufvb-5hoqjz-2w6kle-c678nu\",\"application\":\"Retail:Prod:www.amazon.com\",\""
		"obfuscatedMarketplaceId\":\"ATVPDKIKX0DER\",\"lob\":\"1\",\"producerId\":\"csa\",\"entities\":{\"page\":{\"id\":\"y45xqs-v4tsc7-d3onkb-o8oc8f\",\"requestId\":\"5AFSK1C7VNHSD7KRB97Y\",\"pageType\":\"Gateway\",\"subPageType\":\"desktop\"},\"session\":{\"id\":\"133-6658273-5713951\"},\"element\":{\"id\":\"e2wxv3-pf2bif-mjr5hq-lasosr\",\"type\":\"link\",\"slotId\":\"nav_cs_3\",\"contentId\":\"nav_cs_gc\",\"iSlotId\":\"nav_cs_3\",\"href\":\"/gift-cards/b/?ie=UTF8&node=2238192011&ref_=nav_cs_gc\",\""
		"class\":\"nav-a  \",\"parentId\":\"vbopwz-oyyiqe-v63gb2-x54s73\"}}}},{\"data\":{\"schemaId\":\"csa.ContentImpressed.3\",\"timeToImpressed\":1139,\"pageFirstPaintToElementImpressed\":6141,\"timestamp\":\"2024-02-07T12:04:03.821Z\",\"messageId\":\"ixicl2-7x65nf-o5bdoj-ik6lit\",\"application\":\"Retail:Prod:www.amazon.com\",\"obfuscatedMarketplaceId\":\"ATVPDKIKX0DER\",\"lob\":\"1\",\"producerId\":\"csa\",\"entities\":{\"page\":{\"id\":\"y45xqs-v4tsc7-d3onkb-o8oc8f\",\"requestId\":\""
		"5AFSK1C7VNHSD7KRB97Y\",\"pageType\":\"Gateway\",\"subPageType\":\"desktop\"},\"session\":{\"id\":\"133-6658273-5713951\"},\"element\":{\"id\":\"mw7ee5-saiwhk-a7why0-th47fv\",\"type\":\"link\",\"slotId\":\"nav_cs_4\",\"contentId\":\"nav_cs_sell\",\"iSlotId\":\"nav_cs_4\",\"href\":\"/b/?_encoding=UTF8&ld=AZUSSOA-sell&node=12766669011&ref_=nav_cs_sell\",\"class\":\"nav-a  \",\"parentId\":\"vbopwz-oyyiqe-v63gb2-x54s73\"}}}},{\"data\":{\"messageId\":\"dpjxoq-qv1wko-nt69s8-jy8kd7\",\"schemaId\":\""
		"csa.Metric.4\",\"metrics\":{\"documentCumulativeLayoutShift\":0},\"dimensions\":{},\"timestamp\":\"2024-02-07T12:04:07.814Z\",\"application\":\"Retail:Prod:www.amazon.com\",\"obfuscatedMarketplaceId\":\"ATVPDKIKX0DER\",\"lob\":\"1\",\"producerId\":\"csa\",\"entities\":{\"page\":{\"id\":\"y45xqs-v4tsc7-d3onkb-o8oc8f\",\"requestId\":\"5AFSK1C7VNHSD7KRB97Y\",\"pageType\":\"Gateway\",\"subPageType\":\"desktop\"},\"session\":{\"id\":\"133-6658273-5713951\"}}}}]}", 
		LAST);

	web_custom_request("OE_20", 
		"URL=https://fls-na.amazon.com/1/batch/1/OE/", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=https://www.amazon.com/", 
		"Snapshot=t43.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"rid\":\"5AFSK1C7VNHSD7KRB97Y\",\"sid\":\"133-6658273-5713951\",\"mid\":\"ATVPDKIKX0DER\",\"sn\":\"www.amazon.com\",\"reqs\":[{\"jserr-rw\":{\"m\":\"ameyal-product-shoveler: Image failed to load https://m.media-amazon.com/images/I/71+CaUj9EtL._AC_SY200_.jpg\",\"name\":\"Error\",\"csm\":\"v5 ueLogError stack\",\"logLevel\":\"ERROR\",\"attribution\":\"gatewayCardImageError\",\"pageURL\":\"https://www.amazon.com/\",\"f\":\"https://www.amazon.com/\",\"l\":\"172\",\"s\":[\"Error: Image failed to"
		" load https://m.media-amazon.com/images/I/71+CaUj9EtL._AC_SY200_.jpg\",\"at HTMLImageElement.d (https://www.amazon.com/:172:209)\"],\"t\":19810}},{\"csmcount\":{\"counter\":\"foresterPayloadSize\",\"t\":0,\"value\":648}}]}", 
		LAST);

	web_custom_request("OE_21", 
		"URL=https://fls-na.amazon.com/1/batch/1/OE/", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=https://www.amazon.com/", 
		"Snapshot=t44.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"rid\":\"5AFSK1C7VNHSD7KRB97Y\",\"sid\":\"133-6658273-5713951\",\"mid\":\"ATVPDKIKX0DER\",\"sn\":\"www.amazon.com\",\"reqs\":[{\"jserr-rw\":{\"m\":\"ameyal-product-shoveler: Image failed to load https://m.media-amazon.com/images/I/71+CaUj9EtL._AC_SY200_.jpg\",\"name\":\"Error\",\"csm\":\"v5 ueLogError stack\",\"logLevel\":\"ERROR\",\"attribution\":\"gatewayCardImageError\",\"pageURL\":\"https://www.amazon.com/\",\"f\":\"https://www.amazon.com/\",\"l\":\"172\",\"s\":[\"Error: Image failed to"
		" load https://m.media-amazon.com/images/I/71+CaUj9EtL._AC_SY200_.jpg\",\"at HTMLImageElement.d (https://www.amazon.com/:172:209)\"],\"t\":19810}},{\"csmcount\":{\"counter\":\"foresterPayloadSize\",\"t\":0,\"value\":648}}]}", 
		LAST);

	web_concurrent_start(NULL);

	web_url("ATVPDKIKX0DER:133-6658273-5713951:5AFSK1C7VNHSD7KRB97Y$uedata=s:%2Frd%2Fuedata%3Fat%26v%3D0.277997.0%26id%3D5AFSK1C7VNHSD7KRB97Y%26m%3D1%26sc%3Dcsa%3AbrowserQuiteMut%26pc%3D21045%26at%3D21045%26t%3D1707307462923%26csmtags%3DbrowserQuiteMut%26pty%3DGateway%", 
		"URL=https://fls-na.amazon.com/1/batch/1/OP/ATVPDKIKX0DER:133-6658273-5713951:5AFSK1C7VNHSD7KRB97Y$uedata=s:%2Frd%2Fuedata%3Fat%26v%3D0.277997.0%26id%3D5AFSK1C7VNHSD7KRB97Y%26m%3D1%26sc%3Dcsa%3AbrowserQuiteMut%26pc%3D21045%26at%3D21045%26t%3D1707307462923%26csmtags%3DbrowserQuiteMut%26pty%3DGateway%26spty%3Ddesktop%26pti%3Ddesktop%26tid%3D5AFSK1C7VNHSD7KRB97Y%26aftb%3D1%26lob%3D1:21044", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://www.amazon.com/", 
		"Snapshot=t45.inf", 
		LAST);

	web_url("ATVPDKIKX0DER:133-6658273-5713951:5AFSK1C7VNHSD7KRB97Y$uedata=s:%2Frd%2Fuedata%3Fat%26v%3D0.277997.0%26id%3D5AFSK1C7VNHSD7KRB97Y%26m%3D1%26sc%3Dcsa%3AstartVL%26pc%3D21055%26at%3D21055%26t%3D1707307462933%26csmtags%3DstartVL%26pty%3DGateway%26spty%3Ddesktop", 
		"URL=https://fls-na.amazon.com/1/batch/1/OP/ATVPDKIKX0DER:133-6658273-5713951:5AFSK1C7VNHSD7KRB97Y$uedata=s:%2Frd%2Fuedata%3Fat%26v%3D0.277997.0%26id%3D5AFSK1C7VNHSD7KRB97Y%26m%3D1%26sc%3Dcsa%3AstartVL%26pc%3D21055%26at%3D21055%26t%3D1707307462933%26csmtags%3DstartVL%26pty%3DGateway%26spty%3Ddesktop%26pti%3Ddesktop%26tid%3D5AFSK1C7VNHSD7KRB97Y%26aftb%3D1%26lob%3D1:21054", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://www.amazon.com/", 
		"Snapshot=t46.inf", 
		LAST);

	web_url("ATVPDKIKX0DER:133-6658273-5713951:5AFSK1C7VNHSD7KRB97Y$uedata=s:%2Frd%2Fuedata%3Fat%26v%3D0.277997.0%26id%3D5AFSK1C7VNHSD7KRB97Y%26m%3D1%26sc%3Dcsa%3Avl50%26vl50%3D1668%26pc%3D21055%26at%3D21055%26t%3D1707307462933%26pty%3DGateway%26spty%3Ddesktop%26pti%3D", 
		"URL=https://fls-na.amazon.com/1/batch/1/OP/ATVPDKIKX0DER:133-6658273-5713951:5AFSK1C7VNHSD7KRB97Y$uedata=s:%2Frd%2Fuedata%3Fat%26v%3D0.277997.0%26id%3D5AFSK1C7VNHSD7KRB97Y%26m%3D1%26sc%3Dcsa%3Avl50%26vl50%3D1668%26pc%3D21055%26at%3D21055%26t%3D1707307462933%26pty%3DGateway%26spty%3Ddesktop%26pti%3Ddesktop%26tid%3D5AFSK1C7VNHSD7KRB97Y%26aftb%3D1%26lob%3D1:21055", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://www.amazon.com/", 
		"Snapshot=t47.inf", 
		LAST);

	web_url("ATVPDKIKX0DER:133-6658273-5713951:5AFSK1C7VNHSD7KRB97Y$uedata=s:%2Frd%2Fuedata%3Fat%26v%3D0.277997.0%26id%3D5AFSK1C7VNHSD7KRB97Y%26m%3D1%26sc%3Dcsa%3Avl90%26vl90%3D1668%26pc%3D21056%26at%3D21056%26t%3D1707307462934%26pty%3DGateway%26spty%3Ddesktop%26pti%3D", 
		"URL=https://fls-na.amazon.com/1/batch/1/OP/ATVPDKIKX0DER:133-6658273-5713951:5AFSK1C7VNHSD7KRB97Y$uedata=s:%2Frd%2Fuedata%3Fat%26v%3D0.277997.0%26id%3D5AFSK1C7VNHSD7KRB97Y%26m%3D1%26sc%3Dcsa%3Avl90%26vl90%3D1668%26pc%3D21056%26at%3D21056%26t%3D1707307462934%26pty%3DGateway%26spty%3Ddesktop%26pti%3Ddesktop%26tid%3D5AFSK1C7VNHSD7KRB97Y%26aftb%3D1%26lob%3D1:21055", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://www.amazon.com/", 
		"Snapshot=t48.inf", 
		LAST);

	web_url("ATVPDKIKX0DER:133-6658273-5713951:5AFSK1C7VNHSD7KRB97Y$uedata=s:%2Frd%2Fuedata%3Fat%26v%3D0.277997.0%26id%3D5AFSK1C7VNHSD7KRB97Y%26m%3D1%26sc%3Dcsa%3Avl100%26vl100%3D1668%26pc%3D21056%26at%3D21056%26t%3D1707307462934%26pty%3DGateway%26spty%3Ddesktop%26pti%", 
		"URL=https://fls-na.amazon.com/1/batch/1/OP/ATVPDKIKX0DER:133-6658273-5713951:5AFSK1C7VNHSD7KRB97Y$uedata=s:%2Frd%2Fuedata%3Fat%26v%3D0.277997.0%26id%3D5AFSK1C7VNHSD7KRB97Y%26m%3D1%26sc%3Dcsa%3Avl100%26vl100%3D1668%26pc%3D21056%26at%3D21056%26t%3D1707307462934%26pty%3DGateway%26spty%3Ddesktop%26pti%3Ddesktop%26tid%3D5AFSK1C7VNHSD7KRB97Y%26aftb%3D1%26lob%3D1:21055", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://www.amazon.com/", 
		"Snapshot=t49.inf", 
		LAST);

	web_url("ATVPDKIKX0DER:133-6658273-5713951:5AFSK1C7VNHSD7KRB97Y$uedata=s:%2Frd%2Fuedata%3Fat%26v%3D0.277997.0%26id%3D5AFSK1C7VNHSD7KRB97Y%26m%3D1%26sc%3Dcsa%3AendVL%26pc%3D21056%26at%3D21056%26t%3D1707307462934%26csmtags%3DendVL%26pty%3DGateway%26spty%3Ddesktop%26p", 
		"URL=https://fls-na.amazon.com/1/batch/1/OP/ATVPDKIKX0DER:133-6658273-5713951:5AFSK1C7VNHSD7KRB97Y$uedata=s:%2Frd%2Fuedata%3Fat%26v%3D0.277997.0%26id%3D5AFSK1C7VNHSD7KRB97Y%26m%3D1%26sc%3Dcsa%3AendVL%26pc%3D21056%26at%3D21056%26t%3D1707307462934%26csmtags%3DendVL%26pty%3DGateway%26spty%3Ddesktop%26pti%3Ddesktop%26tid%3D5AFSK1C7VNHSD7KRB97Y%26aftb%3D1%26lob%3D1:21055", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://www.amazon.com/", 
		"Snapshot=t50.inf", 
		LAST);

	web_url("ATVPDKIKX0DER:133-6658273-5713951:5AFSK1C7VNHSD7KRB97Y$uedata=s:%2Frd%2Fuedata%3Fat%26v%3D0.277997.0%26id%3D5AFSK1C7VNHSD7KRB97Y%26m%3D1%26sc%3Dcsa%3Asi%26si%3D1539%26pc%3D21056%26at%3D21056%26t%3D1707307462934%26pty%3DGateway%26spty%3Ddesktop%26pti%3Ddesk", 
		"URL=https://fls-na.amazon.com/1/batch/1/OP/ATVPDKIKX0DER:133-6658273-5713951:5AFSK1C7VNHSD7KRB97Y$uedata=s:%2Frd%2Fuedata%3Fat%26v%3D0.277997.0%26id%3D5AFSK1C7VNHSD7KRB97Y%26m%3D1%26sc%3Dcsa%3Asi%26si%3D1539%26pc%3D21056%26at%3D21056%26t%3D1707307462934%26pty%3DGateway%26spty%3Ddesktop%26pti%3Ddesktop%26tid%3D5AFSK1C7VNHSD7KRB97Y%26aftb%3D1%26lob%3D1:21055", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://www.amazon.com/", 
		"Snapshot=t51.inf", 
		LAST);

	web_url("ATVPDKIKX0DER:133-6658273-5713951:5AFSK1C7VNHSD7KRB97Y$uedata=s:%2Frd%2Fuedata%3Fat%26v%3D0.277997.0%26id%3D5AFSK1C7VNHSD7KRB97Y%26m%3D1%26sc%3Dcsa%3Aatfsi%26atfsi%3D1539%26pc%3D21056%26at%3D21056%26t%3D1707307462934%26pty%3DGateway%26spty%3Ddesktop%26pti%", 
		"URL=https://fls-na.amazon.com/1/batch/1/OP/ATVPDKIKX0DER:133-6658273-5713951:5AFSK1C7VNHSD7KRB97Y$uedata=s:%2Frd%2Fuedata%3Fat%26v%3D0.277997.0%26id%3D5AFSK1C7VNHSD7KRB97Y%26m%3D1%26sc%3Dcsa%3Aatfsi%26atfsi%3D1539%26pc%3D21056%26at%3D21056%26t%3D1707307462934%26pty%3DGateway%26spty%3Ddesktop%26pti%3Ddesktop%26tid%3D5AFSK1C7VNHSD7KRB97Y%26aftb%3D1%26lob%3D1:21056", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://www.amazon.com/", 
		"Snapshot=t52.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_custom_request("OE_22", 
		"URL=https://fls-na.amazon.com/1/batch/1/OE/", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=https://www.amazon.com/", 
		"Snapshot=t53.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"rid\":\"5AFSK1C7VNHSD7KRB97Y\",\"sid\":\"133-6658273-5713951\",\"mid\":\"ATVPDKIKX0DER\",\"sn\":\"www.amazon.com\",\"reqs\":[{\"jserr-rw\":{\"m\":\"ameyal-product-shoveler: Image failed to load https://m.media-amazon.com/images/I/71+CaUj9EtL._AC_SY200_.jpg\",\"name\":\"Error\",\"csm\":\"v5 ueLogError stack\",\"logLevel\":\"ERROR\",\"attribution\":\"gatewayCardImageError\",\"pageURL\":\"https://www.amazon.com/\",\"f\":\"https://www.amazon.com/\",\"l\":\"172\",\"s\":[\"Error: Image failed to"
		" load https://m.media-amazon.com/images/I/71+CaUj9EtL._AC_SY200_.jpg\",\"at HTMLImageElement.d (https://www.amazon.com/:172:209)\"],\"t\":19810}},{\"csmcount\":{\"counter\":\"foresterPayloadSize\",\"t\":0,\"value\":648}}]}", 
		LAST);

	web_custom_request("OE_23", 
		"URL=https://fls-na.amazon.com/1/batch/1/OE/", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=https://www.amazon.com/", 
		"Snapshot=t54.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"rid\":\"5AFSK1C7VNHSD7KRB97Y\",\"sid\":\"133-6658273-5713951\",\"mid\":\"ATVPDKIKX0DER\",\"sn\":\"www.amazon.com\",\"reqs\":[{\"jserr-rw\":{\"m\":\"ameyal-product-shoveler: Image failed to load https://m.media-amazon.com/images/I/71+CaUj9EtL._AC_SY200_.jpg\",\"name\":\"Error\",\"csm\":\"v5 ueLogError stack\",\"logLevel\":\"ERROR\",\"attribution\":\"gatewayCardImageError\",\"pageURL\":\"https://www.amazon.com/\",\"f\":\"https://www.amazon.com/\",\"l\":\"172\",\"s\":[\"Error: Image failed to"
		" load https://m.media-amazon.com/images/I/71+CaUj9EtL._AC_SY200_.jpg\",\"at HTMLImageElement.d (https://www.amazon.com/:172:209)\"],\"t\":19810}},{\"csmcount\":{\"counter\":\"foresterPayloadSize\",\"t\":0,\"value\":648}}]}", 
		LAST);

	web_custom_request("OE_24", 
		"URL=https://fls-na.amazon.com/1/batch/1/OE/", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=https://www.amazon.com/", 
		"Snapshot=t55.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"rid\":\"5AFSK1C7VNHSD7KRB97Y\",\"sid\":\"133-6658273-5713951\",\"mid\":\"ATVPDKIKX0DER\",\"sn\":\"www.amazon.com\",\"reqs\":[{\"jserr-rw\":{\"m\":\"ameyal-product-shoveler: Image failed to load https://m.media-amazon.com/images/I/71+CaUj9EtL._AC_SY200_.jpg\",\"name\":\"Error\",\"csm\":\"v5 ueLogError stack\",\"logLevel\":\"ERROR\",\"attribution\":\"gatewayCardImageError\",\"pageURL\":\"https://www.amazon.com/\",\"f\":\"https://www.amazon.com/\",\"l\":\"172\",\"s\":[\"Error: Image failed to"
		" load https://m.media-amazon.com/images/I/71+CaUj9EtL._AC_SY200_.jpg\",\"at HTMLImageElement.d (https://www.amazon.com/:172:209)\"],\"t\":19810}},{\"csmcount\":{\"counter\":\"foresterPayloadSize\",\"t\":0,\"value\":648}}]}", 
		LAST);

	web_custom_request("OE_25", 
		"URL=https://fls-na.amazon.com/1/batch/1/OE/", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=https://www.amazon.com/", 
		"Snapshot=t56.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"rid\":\"5AFSK1C7VNHSD7KRB97Y\",\"sid\":\"133-6658273-5713951\",\"mid\":\"ATVPDKIKX0DER\",\"sn\":\"www.amazon.com\",\"reqs\":[{\"jserr-rw\":{\"m\":\"ameyal-product-shoveler: Image failed to load https://m.media-amazon.com/images/I/71+CaUj9EtL._AC_SY200_.jpg\",\"name\":\"Error\",\"csm\":\"v5 ueLogError stack\",\"logLevel\":\"ERROR\",\"attribution\":\"gatewayCardImageError\",\"pageURL\":\"https://www.amazon.com/\",\"f\":\"https://www.amazon.com/\",\"l\":\"172\",\"s\":[\"Error: Image failed to"
		" load https://m.media-amazon.com/images/I/71+CaUj9EtL._AC_SY200_.jpg\",\"at HTMLImageElement.d (https://www.amazon.com/:172:209)\"],\"t\":19810}},{\"csmcount\":{\"counter\":\"foresterPayloadSize\",\"t\":0,\"value\":648}}]}", 
		LAST);

	web_custom_request("OE_26", 
		"URL=https://fls-na.amazon.com/1/batch/1/OE/", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=https://www.amazon.com/", 
		"Snapshot=t57.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"rid\":\"5AFSK1C7VNHSD7KRB97Y\",\"sid\":\"133-6658273-5713951\",\"mid\":\"ATVPDKIKX0DER\",\"sn\":\"www.amazon.com\",\"reqs\":[{\"jserr-rw\":{\"m\":\"deals-shoveler-v2: Image failed to load https://m.media-amazon.com/images/I/51EhkT3Ae8L._AC_SY200_.jpg\",\"name\":\"Error\",\"csm\":\"v5 ueLogError stack\",\"logLevel\":\"ERROR\",\"attribution\":\"gatewayCardImageError\",\"pageURL\":\"https://www.amazon.com/\",\"f\":\"https://www.amazon.com/\",\"l\":\"172\",\"s\":[\"Error: Image failed to load "
		"https://m.media-amazon.com/images/I/51EhkT3Ae8L._AC_SY200_.jpg\",\"at HTMLImageElement.d (https://www.amazon.com/:172:209)\"],\"t\":19810}},{\"csmcount\":{\"counter\":\"foresterPayloadSize\",\"t\":0,\"value\":642}}]}", 
		LAST);

	web_custom_request("OE_27", 
		"URL=https://fls-na.amazon.com/1/batch/1/OE/", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=https://www.amazon.com/", 
		"Snapshot=t58.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"rid\":\"5AFSK1C7VNHSD7KRB97Y\",\"sid\":\"133-6658273-5713951\",\"mid\":\"ATVPDKIKX0DER\",\"sn\":\"www.amazon.com\",\"reqs\":[{\"jserr-rw\":{\"m\":\"deals-shoveler-v2: Image failed to load https://m.media-amazon.com/images/I/51EhkT3Ae8L._AC_SY200_.jpg\",\"name\":\"Error\",\"csm\":\"v5 ueLogError stack\",\"logLevel\":\"ERROR\",\"attribution\":\"gatewayCardImageError\",\"pageURL\":\"https://www.amazon.com/\",\"f\":\"https://www.amazon.com/\",\"l\":\"172\",\"s\":[\"Error: Image failed to load "
		"https://m.media-amazon.com/images/I/51EhkT3Ae8L._AC_SY200_.jpg\",\"at HTMLImageElement.d (https://www.amazon.com/:172:209)\"],\"t\":19810}},{\"csmcount\":{\"counter\":\"foresterPayloadSize\",\"t\":0,\"value\":642}}]}", 
		LAST);

	web_custom_request("OE_28", 
		"URL=https://fls-na.amazon.com/1/batch/1/OE/", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=https://www.amazon.com/", 
		"Snapshot=t59.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"rid\":\"5AFSK1C7VNHSD7KRB97Y\",\"sid\":\"133-6658273-5713951\",\"mid\":\"ATVPDKIKX0DER\",\"sn\":\"www.amazon.com\",\"reqs\":[{\"jserr-rw\":{\"m\":\"deals-shoveler-v2: Image failed to load https://m.media-amazon.com/images/I/51EhkT3Ae8L._AC_SY200_.jpg\",\"name\":\"Error\",\"csm\":\"v5 ueLogError stack\",\"logLevel\":\"ERROR\",\"attribution\":\"gatewayCardImageError\",\"pageURL\":\"https://www.amazon.com/\",\"f\":\"https://www.amazon.com/\",\"l\":\"172\",\"s\":[\"Error: Image failed to load "
		"https://m.media-amazon.com/images/I/51EhkT3Ae8L._AC_SY200_.jpg\",\"at HTMLImageElement.d (https://www.amazon.com/:172:209)\"],\"t\":19810}},{\"csmcount\":{\"counter\":\"foresterPayloadSize\",\"t\":0,\"value\":642}}]}", 
		LAST);

	web_custom_request("OE_29", 
		"URL=https://fls-na.amazon.com/1/batch/1/OE/", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=https://www.amazon.com/", 
		"Snapshot=t60.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"rid\":\"5AFSK1C7VNHSD7KRB97Y\",\"sid\":\"133-6658273-5713951\",\"mid\":\"ATVPDKIKX0DER\",\"sn\":\"www.amazon.com\",\"reqs\":[{\"jserr-rw\":{\"m\":\"deals-shoveler-v2: Image failed to load https://m.media-amazon.com/images/I/51EhkT3Ae8L._AC_SY200_.jpg\",\"name\":\"Error\",\"csm\":\"v5 ueLogError stack\",\"logLevel\":\"ERROR\",\"attribution\":\"gatewayCardImageError\",\"pageURL\":\"https://www.amazon.com/\",\"f\":\"https://www.amazon.com/\",\"l\":\"172\",\"s\":[\"Error: Image failed to load "
		"https://m.media-amazon.com/images/I/51EhkT3Ae8L._AC_SY200_.jpg\",\"at HTMLImageElement.d (https://www.amazon.com/:172:209)\"],\"t\":19811}},{\"csmcount\":{\"counter\":\"foresterPayloadSize\",\"t\":0,\"value\":642}}]}", 
		LAST);

	web_custom_request("OE_30", 
		"URL=https://fls-na.amazon.com/1/batch/1/OE/", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=https://www.amazon.com/", 
		"Snapshot=t61.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"rid\":\"5AFSK1C7VNHSD7KRB97Y\",\"sid\":\"133-6658273-5713951\",\"mid\":\"ATVPDKIKX0DER\",\"sn\":\"www.amazon.com\",\"reqs\":[{\"jserr-rw\":{\"m\":\"deals-shoveler-v2: Image failed to load https://m.media-amazon.com/images/I/51EhkT3Ae8L._AC_SY200_.jpg\",\"name\":\"Error\",\"csm\":\"v5 ueLogError stack\",\"logLevel\":\"ERROR\",\"attribution\":\"gatewayCardImageError\",\"pageURL\":\"https://www.amazon.com/\",\"f\":\"https://www.amazon.com/\",\"l\":\"172\",\"s\":[\"Error: Image failed to load "
		"https://m.media-amazon.com/images/I/51EhkT3Ae8L._AC_SY200_.jpg\",\"at HTMLImageElement.d (https://www.amazon.com/:172:209)\"],\"t\":19811}},{\"csmcount\":{\"counter\":\"foresterPayloadSize\",\"t\":0,\"value\":642}}]}", 
		LAST);

	web_custom_request("OE_31", 
		"URL=https://fls-na.amazon.com/1/batch/1/OE/", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=https://www.amazon.com/", 
		"Snapshot=t62.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"rid\":\"5AFSK1C7VNHSD7KRB97Y\",\"sid\":\"133-6658273-5713951\",\"mid\":\"ATVPDKIKX0DER\",\"sn\":\"www.amazon.com\",\"reqs\":[{\"jserr-rw\":{\"m\":\"deals-shoveler-v2: Image failed to load https://m.media-amazon.com/images/I/51EhkT3Ae8L._AC_SY200_.jpg\",\"name\":\"Error\",\"csm\":\"v5 ueLogError stack\",\"logLevel\":\"ERROR\",\"attribution\":\"gatewayCardImageError\",\"pageURL\":\"https://www.amazon.com/\",\"f\":\"https://www.amazon.com/\",\"l\":\"172\",\"s\":[\"Error: Image failed to load "
		"https://m.media-amazon.com/images/I/51EhkT3Ae8L._AC_SY200_.jpg\",\"at HTMLImageElement.d (https://www.amazon.com/:172:209)\"],\"t\":19811}},{\"csmcount\":{\"counter\":\"foresterPayloadSize\",\"t\":0,\"value\":642}}]}", 
		LAST);

	web_custom_request("OE_32", 
		"URL=https://fls-na.amazon.com/1/batch/1/OE/", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=https://www.amazon.com/", 
		"Snapshot=t63.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"rid\":\"5AFSK1C7VNHSD7KRB97Y\",\"sid\":\"133-6658273-5713951\",\"mid\":\"ATVPDKIKX0DER\",\"sn\":\"www.amazon.com\",\"reqs\":[{\"jserr-rw\":{\"m\":\"ameyal-product-shoveler: Image failed to load https://m.media-amazon.com/images/I/61POocZniqL._AC_SY200_.jpg\",\"name\":\"Error\",\"csm\":\"v5 ueLogError stack\",\"logLevel\":\"ERROR\",\"attribution\":\"gatewayCardImageError\",\"pageURL\":\"https://www.amazon.com/\",\"f\":\"https://www.amazon.com/\",\"l\":\"172\",\"s\":[\"Error: Image failed to"
		" load https://m.media-amazon.com/images/I/61POocZniqL._AC_SY200_.jpg\",\"at HTMLImageElement.d (https://www.amazon.com/:172:209)\"],\"t\":19811}},{\"csmcount\":{\"counter\":\"foresterPayloadSize\",\"t\":0,\"value\":648}}]}", 
		LAST);

	web_custom_request("OE_33", 
		"URL=https://fls-na.amazon.com/1/batch/1/OE/", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=https://www.amazon.com/", 
		"Snapshot=t64.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"rid\":\"5AFSK1C7VNHSD7KRB97Y\",\"sid\":\"133-6658273-5713951\",\"mid\":\"ATVPDKIKX0DER\",\"sn\":\"www.amazon.com\",\"reqs\":[{\"jserr-rw\":{\"m\":\"deals-shoveler-v2: Image failed to load https://m.media-amazon.com/images/I/51EhkT3Ae8L._AC_SY200_.jpg\",\"name\":\"Error\",\"csm\":\"v5 ueLogError stack\",\"logLevel\":\"ERROR\",\"attribution\":\"gatewayCardImageError\",\"pageURL\":\"https://www.amazon.com/\",\"f\":\"https://www.amazon.com/\",\"l\":\"172\",\"s\":[\"Error: Image failed to load "
		"https://m.media-amazon.com/images/I/51EhkT3Ae8L._AC_SY200_.jpg\",\"at HTMLImageElement.d (https://www.amazon.com/:172:209)\"],\"t\":19811}},{\"csmcount\":{\"counter\":\"foresterPayloadSize\",\"t\":0,\"value\":642}}]}", 
		LAST);

	web_url("iu3", 
		"URL=https://s.amazon-adsystem.com/iu3?d=amazon.com&slot=navFooter&a2=0101674f589b34f358b92a039741f36d08e007af81ba41fa2d9ce939390f2dc10d7c&old_oo=0&ts=1707307441814&s=AdfmVubYpR099_y_V3DUfBwqSS-FkJghh0JF9hYAg1F7&gdpr_consent=&gdpr_consent_avl=&cb=1707307441814", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.amazon.com/", 
		"Snapshot=t65.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("OE_34", 
		"URL=https://fls-na.amazon.com/1/batch/1/OE/", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=https://www.amazon.com/", 
		"Snapshot=t66.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"rid\":\"5AFSK1C7VNHSD7KRB97Y\",\"sid\":\"133-6658273-5713951\",\"mid\":\"ATVPDKIKX0DER\",\"sn\":\"www.amazon.com\",\"reqs\":[{\"jserr-rw\":{\"m\":\"ameyal-product-shoveler: Image failed to load https://m.media-amazon.com/images/I/61POocZniqL._AC_SY200_.jpg\",\"name\":\"Error\",\"csm\":\"v5 ueLogError stack\",\"logLevel\":\"ERROR\",\"attribution\":\"gatewayCardImageError\",\"pageURL\":\"https://www.amazon.com/\",\"f\":\"https://www.amazon.com/\",\"l\":\"172\",\"s\":[\"Error: Image failed to"
		" load https://m.media-amazon.com/images/I/61POocZniqL._AC_SY200_.jpg\",\"at HTMLImageElement.d (https://www.amazon.com/:172:209)\"],\"t\":19811}},{\"csmcount\":{\"counter\":\"foresterPayloadSize\",\"t\":0,\"value\":648}}]}", 
		LAST);

	web_custom_request("OE_35", 
		"URL=https://fls-na.amazon.com/1/batch/1/OE/", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=https://www.amazon.com/", 
		"Snapshot=t67.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"rid\":\"5AFSK1C7VNHSD7KRB97Y\",\"sid\":\"133-6658273-5713951\",\"mid\":\"ATVPDKIKX0DER\",\"sn\":\"www.amazon.com\",\"reqs\":[{\"jserr-rw\":{\"m\":\"ameyal-product-shoveler: Image failed to load https://m.media-amazon.com/images/I/61POocZniqL._AC_SY200_.jpg\",\"name\":\"Error\",\"csm\":\"v5 ueLogError stack\",\"logLevel\":\"ERROR\",\"attribution\":\"gatewayCardImageError\",\"pageURL\":\"https://www.amazon.com/\",\"f\":\"https://www.amazon.com/\",\"l\":\"172\",\"s\":[\"Error: Image failed to"
		" load https://m.media-amazon.com/images/I/61POocZniqL._AC_SY200_.jpg\",\"at HTMLImageElement.d (https://www.amazon.com/:172:209)\"],\"t\":19811}},{\"csmcount\":{\"counter\":\"foresterPayloadSize\",\"t\":0,\"value\":648}}]}", 
		LAST);

	web_set_sockets_option("TLS_SNI", "1");

	web_custom_request("OE_36", 
		"URL=https://fls-na.amazon.com/1/batch/1/OE/", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=https://www.amazon.com/", 
		"Snapshot=t68.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"rid\":\"5AFSK1C7VNHSD7KRB97Y\",\"sid\":\"133-6658273-5713951\",\"mid\":\"ATVPDKIKX0DER\",\"sn\":\"www.amazon.com\",\"reqs\":[{\"jserr-rw\":{\"m\":\"ameyal-product-shoveler: Image failed to load https://m.media-amazon.com/images/I/61POocZniqL._AC_SY200_.jpg\",\"name\":\"Error\",\"csm\":\"v5 ueLogError stack\",\"logLevel\":\"ERROR\",\"attribution\":\"gatewayCardImageError\",\"pageURL\":\"https://www.amazon.com/\",\"f\":\"https://www.amazon.com/\",\"l\":\"172\",\"s\":[\"Error: Image failed to"
		" load https://m.media-amazon.com/images/I/61POocZniqL._AC_SY200_.jpg\",\"at HTMLImageElement.d (https://www.amazon.com/:172:209)\"],\"t\":19812}},{\"csmcount\":{\"counter\":\"foresterPayloadSize\",\"t\":0,\"value\":648}}]}", 
		LAST);

	web_custom_request("OE_37", 
		"URL=https://fls-na.amazon.com/1/batch/1/OE/", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=https://www.amazon.com/", 
		"Snapshot=t69.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"rid\":\"5AFSK1C7VNHSD7KRB97Y\",\"sid\":\"133-6658273-5713951\",\"mid\":\"ATVPDKIKX0DER\",\"sn\":\"www.amazon.com\",\"reqs\":[{\"jserr-rw\":{\"m\":\"ameyal-product-shoveler: Image failed to load https://m.media-amazon.com/images/I/61POocZniqL._AC_SY200_.jpg\",\"name\":\"Error\",\"csm\":\"v5 ueLogError stack\",\"logLevel\":\"ERROR\",\"attribution\":\"gatewayCardImageError\",\"pageURL\":\"https://www.amazon.com/\",\"f\":\"https://www.amazon.com/\",\"l\":\"172\",\"s\":[\"Error: Image failed to"
		" load https://m.media-amazon.com/images/I/61POocZniqL._AC_SY200_.jpg\",\"at HTMLImageElement.d (https://www.amazon.com/:172:209)\"],\"t\":19812}},{\"csmcount\":{\"counter\":\"foresterPayloadSize\",\"t\":0,\"value\":648}}]}", 
		LAST);

	web_custom_request("OE_38", 
		"URL=https://fls-na.amazon.com/1/batch/1/OE/", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=https://www.amazon.com/", 
		"Snapshot=t70.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"rid\":\"5AFSK1C7VNHSD7KRB97Y\",\"sid\":\"133-6658273-5713951\",\"mid\":\"ATVPDKIKX0DER\",\"sn\":\"www.amazon.com\",\"reqs\":[{\"jserr-rw\":{\"m\":\"ameyal-product-shoveler: Image failed to load https://m.media-amazon.com/images/I/61POocZniqL._AC_SY200_.jpg\",\"name\":\"Error\",\"csm\":\"v5 ueLogError stack\",\"logLevel\":\"ERROR\",\"attribution\":\"gatewayCardImageError\",\"pageURL\":\"https://www.amazon.com/\",\"f\":\"https://www.amazon.com/\",\"l\":\"172\",\"s\":[\"Error: Image failed to"
		" load https://m.media-amazon.com/images/I/61POocZniqL._AC_SY200_.jpg\",\"at HTMLImageElement.d (https://www.amazon.com/:172:209)\"],\"t\":19812}},{\"csmcount\":{\"counter\":\"foresterPayloadSize\",\"t\":0,\"value\":648}}]}", 
		LAST);

	web_custom_request("OE_39", 
		"URL=https://fls-na.amazon.com/1/batch/1/OE/", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=https://www.amazon.com/", 
		"Snapshot=t71.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"rid\":\"5AFSK1C7VNHSD7KRB97Y\",\"sid\":\"133-6658273-5713951\",\"mid\":\"ATVPDKIKX0DER\",\"sn\":\"www.amazon.com\",\"reqs\":[{\"jserr-rw\":{\"m\":\"ameyal-product-shoveler: Image failed to load https://m.media-amazon.com/images/I/61POocZniqL._AC_SY200_.jpg\",\"name\":\"Error\",\"csm\":\"v5 ueLogError stack\",\"logLevel\":\"ERROR\",\"attribution\":\"gatewayCardImageError\",\"pageURL\":\"https://www.amazon.com/\",\"f\":\"https://www.amazon.com/\",\"l\":\"172\",\"s\":[\"Error: Image failed to"
		" load https://m.media-amazon.com/images/I/61POocZniqL._AC_SY200_.jpg\",\"at HTMLImageElement.d (https://www.amazon.com/:172:209)\"],\"t\":19812}},{\"csmcount\":{\"counter\":\"foresterPayloadSize\",\"t\":0,\"value\":648}}]}", 
		LAST);

	web_custom_request("OE_40", 
		"URL=https://fls-na.amazon.com/1/batch/1/OE/", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=https://www.amazon.com/", 
		"Snapshot=t72.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"rid\":\"5AFSK1C7VNHSD7KRB97Y\",\"sid\":\"133-6658273-5713951\",\"mid\":\"ATVPDKIKX0DER\",\"sn\":\"www.amazon.com\",\"reqs\":[{\"jserr-rw\":{\"m\":\"ameyal-product-shoveler: Image failed to load https://m.media-amazon.com/images/I/71cSLFE39zL._AC_SY200_.jpg\",\"name\":\"Error\",\"csm\":\"v5 ueLogError stack\",\"logLevel\":\"ERROR\",\"attribution\":\"gatewayCardImageError\",\"pageURL\":\"https://www.amazon.com/\",\"f\":\"https://www.amazon.com/\",\"l\":\"172\",\"s\":[\"Error: Image failed to"
		" load https://m.media-amazon.com/images/I/71cSLFE39zL._AC_SY200_.jpg\",\"at HTMLImageElement.d (https://www.amazon.com/:172:209)\"],\"t\":19812}},{\"csmcount\":{\"counter\":\"foresterPayloadSize\",\"t\":0,\"value\":648}}]}", 
		LAST);

	web_custom_request("OE_41", 
		"URL=https://fls-na.amazon.com/1/batch/1/OE/", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=https://www.amazon.com/", 
		"Snapshot=t73.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"rid\":\"5AFSK1C7VNHSD7KRB97Y\",\"sid\":\"133-6658273-5713951\",\"mid\":\"ATVPDKIKX0DER\",\"sn\":\"www.amazon.com\",\"reqs\":[{\"jserr-rw\":{\"m\":\"ameyal-product-shoveler: Image failed to load https://m.media-amazon.com/images/I/71cSLFE39zL._AC_SY200_.jpg\",\"name\":\"Error\",\"csm\":\"v5 ueLogError stack\",\"logLevel\":\"ERROR\",\"attribution\":\"gatewayCardImageError\",\"pageURL\":\"https://www.amazon.com/\",\"f\":\"https://www.amazon.com/\",\"l\":\"172\",\"s\":[\"Error: Image failed to"
		" load https://m.media-amazon.com/images/I/71cSLFE39zL._AC_SY200_.jpg\",\"at HTMLImageElement.d (https://www.amazon.com/:172:209)\"],\"t\":19812}},{\"csmcount\":{\"counter\":\"foresterPayloadSize\",\"t\":0,\"value\":648}}]}", 
		LAST);

	web_custom_request("OE_42", 
		"URL=https://fls-na.amazon.com/1/batch/1/OE/", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=https://www.amazon.com/", 
		"Snapshot=t74.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"rid\":\"5AFSK1C7VNHSD7KRB97Y\",\"sid\":\"133-6658273-5713951\",\"mid\":\"ATVPDKIKX0DER\",\"sn\":\"www.amazon.com\",\"reqs\":[{\"jserr-rw\":{\"m\":\"ameyal-product-shoveler: Image failed to load https://m.media-amazon.com/images/I/71cSLFE39zL._AC_SY200_.jpg\",\"name\":\"Error\",\"csm\":\"v5 ueLogError stack\",\"logLevel\":\"ERROR\",\"attribution\":\"gatewayCardImageError\",\"pageURL\":\"https://www.amazon.com/\",\"f\":\"https://www.amazon.com/\",\"l\":\"172\",\"s\":[\"Error: Image failed to"
		" load https://m.media-amazon.com/images/I/71cSLFE39zL._AC_SY200_.jpg\",\"at HTMLImageElement.d (https://www.amazon.com/:172:209)\"],\"t\":19812}},{\"csmcount\":{\"counter\":\"foresterPayloadSize\",\"t\":0,\"value\":648}}]}", 
		LAST);

	web_custom_request("OE_43", 
		"URL=https://fls-na.amazon.com/1/batch/1/OE/", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=https://www.amazon.com/", 
		"Snapshot=t75.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"rid\":\"5AFSK1C7VNHSD7KRB97Y\",\"sid\":\"133-6658273-5713951\",\"mid\":\"ATVPDKIKX0DER\",\"sn\":\"www.amazon.com\",\"reqs\":[{\"jserr-rw\":{\"m\":\"ameyal-product-shoveler: Image failed to load https://m.media-amazon.com/images/I/71cSLFE39zL._AC_SY200_.jpg\",\"name\":\"Error\",\"csm\":\"v5 ueLogError stack\",\"logLevel\":\"ERROR\",\"attribution\":\"gatewayCardImageError\",\"pageURL\":\"https://www.amazon.com/\",\"f\":\"https://www.amazon.com/\",\"l\":\"172\",\"s\":[\"Error: Image failed to"
		" load https://m.media-amazon.com/images/I/71cSLFE39zL._AC_SY200_.jpg\",\"at HTMLImageElement.d (https://www.amazon.com/:172:209)\"],\"t\":19813}},{\"csmcount\":{\"counter\":\"foresterPayloadSize\",\"t\":0,\"value\":648}}]}", 
		LAST);

	web_custom_request("OE_44", 
		"URL=https://fls-na.amazon.com/1/batch/1/OE/", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=https://www.amazon.com/", 
		"Snapshot=t76.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"rid\":\"5AFSK1C7VNHSD7KRB97Y\",\"sid\":\"133-6658273-5713951\",\"mid\":\"ATVPDKIKX0DER\",\"sn\":\"www.amazon.com\",\"reqs\":[{\"jserr-rw\":{\"m\":\"ameyal-product-shoveler: Image failed to load https://m.media-amazon.com/images/I/71cSLFE39zL._AC_SY200_.jpg\",\"name\":\"Error\",\"csm\":\"v5 ueLogError stack\",\"logLevel\":\"ERROR\",\"attribution\":\"gatewayCardImageError\",\"pageURL\":\"https://www.amazon.com/\",\"f\":\"https://www.amazon.com/\",\"l\":\"172\",\"s\":[\"Error: Image failed to"
		" load https://m.media-amazon.com/images/I/71cSLFE39zL._AC_SY200_.jpg\",\"at HTMLImageElement.d (https://www.amazon.com/:172:209)\"],\"t\":19814}},{\"csmcount\":{\"counter\":\"foresterPayloadSize\",\"t\":0,\"value\":648}}]}", 
		LAST);

	web_custom_request("OE_45", 
		"URL=https://fls-na.amazon.com/1/batch/1/OE/", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=https://www.amazon.com/", 
		"Snapshot=t77.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"rid\":\"5AFSK1C7VNHSD7KRB97Y\",\"sid\":\"133-6658273-5713951\",\"mid\":\"ATVPDKIKX0DER\",\"sn\":\"www.amazon.com\",\"reqs\":[{\"jserr-rw\":{\"m\":\"ameyal-product-shoveler: Image failed to load https://m.media-amazon.com/images/I/71cSLFE39zL._AC_SY200_.jpg\",\"name\":\"Error\",\"csm\":\"v5 ueLogError stack\",\"logLevel\":\"ERROR\",\"attribution\":\"gatewayCardImageError\",\"pageURL\":\"https://www.amazon.com/\",\"f\":\"https://www.amazon.com/\",\"l\":\"172\",\"s\":[\"Error: Image failed to"
		" load https://m.media-amazon.com/images/I/71cSLFE39zL._AC_SY200_.jpg\",\"at HTMLImageElement.d (https://www.amazon.com/:172:209)\"],\"t\":19814}},{\"csmcount\":{\"counter\":\"foresterPayloadSize\",\"t\":0,\"value\":648}}]}", 
		LAST);

	web_custom_request("OE_46", 
		"URL=https://fls-na.amazon.com/1/batch/1/OE/", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=https://www.amazon.com/", 
		"Snapshot=t78.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"rid\":\"5AFSK1C7VNHSD7KRB97Y\",\"sid\":\"133-6658273-5713951\",\"mid\":\"ATVPDKIKX0DER\",\"sn\":\"www.amazon.com\",\"reqs\":[{\"jserr-rw\":{\"m\":\"ameyal-product-shoveler: Image failed to load https://m.media-amazon.com/images/I/71cSLFE39zL._AC_SY200_.jpg\",\"name\":\"Error\",\"csm\":\"v5 ueLogError stack\",\"logLevel\":\"ERROR\",\"attribution\":\"gatewayCardImageError\",\"pageURL\":\"https://www.amazon.com/\",\"f\":\"https://www.amazon.com/\",\"l\":\"172\",\"s\":[\"Error: Image failed to"
		" load https://m.media-amazon.com/images/I/71cSLFE39zL._AC_SY200_.jpg\",\"at HTMLImageElement.d (https://www.amazon.com/:172:209)\"],\"t\":19814}},{\"csmcount\":{\"counter\":\"foresterPayloadSize\",\"t\":0,\"value\":648}}]}", 
		LAST);

	web_custom_request("OE_47", 
		"URL=https://fls-na.amazon.com/1/batch/1/OE/", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=https://www.amazon.com/", 
		"Snapshot=t79.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"rid\":\"5AFSK1C7VNHSD7KRB97Y\",\"sid\":\"133-6658273-5713951\",\"mid\":\"ATVPDKIKX0DER\",\"sn\":\"www.amazon.com\",\"reqs\":[{\"jserr-rw\":{\"m\":\"ameyal-product-shoveler: Image failed to load https://m.media-amazon.com/images/I/71nVIiWEcgL._AC_SY200_.jpg\",\"name\":\"Error\",\"csm\":\"v5 ueLogError stack\",\"logLevel\":\"ERROR\",\"attribution\":\"gatewayCardImageError\",\"pageURL\":\"https://www.amazon.com/\",\"f\":\"https://www.amazon.com/\",\"l\":\"172\",\"s\":[\"Error: Image failed to"
		" load https://m.media-amazon.com/images/I/71nVIiWEcgL._AC_SY200_.jpg\",\"at HTMLImageElement.d (https://www.amazon.com/:172:209)\"],\"t\":19815}},{\"csmcount\":{\"counter\":\"foresterPayloadSize\",\"t\":0,\"value\":648}}]}", 
		LAST);

	web_custom_request("OE_48", 
		"URL=https://fls-na.amazon.com/1/batch/1/OE/", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=https://www.amazon.com/", 
		"Snapshot=t80.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"rid\":\"5AFSK1C7VNHSD7KRB97Y\",\"sid\":\"133-6658273-5713951\",\"mid\":\"ATVPDKIKX0DER\",\"sn\":\"www.amazon.com\",\"reqs\":[{\"jserr-rw\":{\"m\":\"ameyal-product-shoveler: Image failed to load https://m.media-amazon.com/images/I/71nVIiWEcgL._AC_SY200_.jpg\",\"name\":\"Error\",\"csm\":\"v5 ueLogError stack\",\"logLevel\":\"ERROR\",\"attribution\":\"gatewayCardImageError\",\"pageURL\":\"https://www.amazon.com/\",\"f\":\"https://www.amazon.com/\",\"l\":\"172\",\"s\":[\"Error: Image failed to"
		" load https://m.media-amazon.com/images/I/71nVIiWEcgL._AC_SY200_.jpg\",\"at HTMLImageElement.d (https://www.amazon.com/:172:209)\"],\"t\":19815}},{\"csmcount\":{\"counter\":\"foresterPayloadSize\",\"t\":0,\"value\":648}}]}", 
		LAST);

	web_custom_request("OE_49", 
		"URL=https://fls-na.amazon.com/1/batch/1/OE/", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=https://www.amazon.com/", 
		"Snapshot=t81.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"rid\":\"5AFSK1C7VNHSD7KRB97Y\",\"sid\":\"133-6658273-5713951\",\"mid\":\"ATVPDKIKX0DER\",\"sn\":\"www.amazon.com\",\"reqs\":[{\"jserr-rw\":{\"m\":\"ameyal-product-shoveler: Image failed to load https://m.media-amazon.com/images/I/71nVIiWEcgL._AC_SY200_.jpg\",\"name\":\"Error\",\"csm\":\"v5 ueLogError stack\",\"logLevel\":\"ERROR\",\"attribution\":\"gatewayCardImageError\",\"pageURL\":\"https://www.amazon.com/\",\"f\":\"https://www.amazon.com/\",\"l\":\"172\",\"s\":[\"Error: Image failed to"
		" load https://m.media-amazon.com/images/I/71nVIiWEcgL._AC_SY200_.jpg\",\"at HTMLImageElement.d (https://www.amazon.com/:172:209)\"],\"t\":19815}},{\"csmcount\":{\"counter\":\"foresterPayloadSize\",\"t\":0,\"value\":648}}]}", 
		LAST);

	web_custom_request("OE_50", 
		"URL=https://fls-na.amazon.com/1/batch/1/OE/", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=https://www.amazon.com/", 
		"Snapshot=t82.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"rid\":\"5AFSK1C7VNHSD7KRB97Y\",\"sid\":\"133-6658273-5713951\",\"mid\":\"ATVPDKIKX0DER\",\"sn\":\"www.amazon.com\",\"reqs\":[{\"jserr-rw\":{\"m\":\"ameyal-product-shoveler: Image failed to load https://m.media-amazon.com/images/I/71nVIiWEcgL._AC_SY200_.jpg\",\"name\":\"Error\",\"csm\":\"v5 ueLogError stack\",\"logLevel\":\"ERROR\",\"attribution\":\"gatewayCardImageError\",\"pageURL\":\"https://www.amazon.com/\",\"f\":\"https://www.amazon.com/\",\"l\":\"172\",\"s\":[\"Error: Image failed to"
		" load https://m.media-amazon.com/images/I/71nVIiWEcgL._AC_SY200_.jpg\",\"at HTMLImageElement.d (https://www.amazon.com/:172:209)\"],\"t\":19815}},{\"csmcount\":{\"counter\":\"foresterPayloadSize\",\"t\":0,\"value\":648}}]}", 
		LAST);

	web_custom_request("OE_51", 
		"URL=https://fls-na.amazon.com/1/batch/1/OE/", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=https://www.amazon.com/", 
		"Snapshot=t83.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"rid\":\"5AFSK1C7VNHSD7KRB97Y\",\"sid\":\"133-6658273-5713951\",\"mid\":\"ATVPDKIKX0DER\",\"sn\":\"www.amazon.com\",\"reqs\":[{\"jserr-rw\":{\"m\":\"ameyal-product-shoveler: Image failed to load https://m.media-amazon.com/images/I/71nVIiWEcgL._AC_SY200_.jpg\",\"name\":\"Error\",\"csm\":\"v5 ueLogError stack\",\"logLevel\":\"ERROR\",\"attribution\":\"gatewayCardImageError\",\"pageURL\":\"https://www.amazon.com/\",\"f\":\"https://www.amazon.com/\",\"l\":\"172\",\"s\":[\"Error: Image failed to"
		" load https://m.media-amazon.com/images/I/71nVIiWEcgL._AC_SY200_.jpg\",\"at HTMLImageElement.d (https://www.amazon.com/:172:209)\"],\"t\":19815}},{\"csmcount\":{\"counter\":\"foresterPayloadSize\",\"t\":0,\"value\":648}}]}", 
		LAST);

	web_custom_request("OE_52", 
		"URL=https://fls-na.amazon.com/1/batch/1/OE/", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=https://www.amazon.com/", 
		"Snapshot=t84.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"rid\":\"5AFSK1C7VNHSD7KRB97Y\",\"sid\":\"133-6658273-5713951\",\"mid\":\"ATVPDKIKX0DER\",\"sn\":\"www.amazon.com\",\"reqs\":[{\"jserr-rw\":{\"m\":\"ameyal-product-shoveler: Image failed to load https://m.media-amazon.com/images/I/71nVIiWEcgL._AC_SY200_.jpg\",\"name\":\"Error\",\"csm\":\"v5 ueLogError stack\",\"logLevel\":\"ERROR\",\"attribution\":\"gatewayCardImageError\",\"pageURL\":\"https://www.amazon.com/\",\"f\":\"https://www.amazon.com/\",\"l\":\"172\",\"s\":[\"Error: Image failed to"
		" load https://m.media-amazon.com/images/I/71nVIiWEcgL._AC_SY200_.jpg\",\"at HTMLImageElement.d (https://www.amazon.com/:172:209)\"],\"t\":19815}},{\"csmcount\":{\"counter\":\"foresterPayloadSize\",\"t\":0,\"value\":648}}]}", 
		LAST);

	web_custom_request("OE_53", 
		"URL=https://fls-na.amazon.com/1/batch/1/OE/", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=https://www.amazon.com/", 
		"Snapshot=t85.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"rid\":\"5AFSK1C7VNHSD7KRB97Y\",\"sid\":\"133-6658273-5713951\",\"mid\":\"ATVPDKIKX0DER\",\"sn\":\"www.amazon.com\",\"reqs\":[{\"jserr-rw\":{\"m\":\"ameyal-product-shoveler: Image failed to load https://m.media-amazon.com/images/I/71nVIiWEcgL._AC_SY200_.jpg\",\"name\":\"Error\",\"csm\":\"v5 ueLogError stack\",\"logLevel\":\"ERROR\",\"attribution\":\"gatewayCardImageError\",\"pageURL\":\"https://www.amazon.com/\",\"f\":\"https://www.amazon.com/\",\"l\":\"172\",\"s\":[\"Error: Image failed to"
		" load https://m.media-amazon.com/images/I/71nVIiWEcgL._AC_SY200_.jpg\",\"at HTMLImageElement.d (https://www.amazon.com/:172:209)\"],\"t\":19815}},{\"csmcount\":{\"counter\":\"foresterPayloadSize\",\"t\":0,\"value\":648}}]}", 
		LAST);

	web_custom_request("OE_54", 
		"URL=https://fls-na.amazon.com/1/batch/1/OE/", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=https://www.amazon.com/", 
		"Snapshot=t86.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"rid\":\"5AFSK1C7VNHSD7KRB97Y\",\"sid\":\"133-6658273-5713951\",\"mid\":\"ATVPDKIKX0DER\",\"sn\":\"www.amazon.com\",\"reqs\":[{\"cel\":{\"k\":\"hrt\",\"t\":8106}},{\"cel\":{\"k\":\"hrt\",\"t\":14872}},{\"cel\":{\"n\":\"Navigation-desktop-navbar\",\"w\":1263,\"h\":99,\"d\":0,\"x\":0,\"y\":0,\"t\":18324,\"k\":\"ewi\",\"cl\":\"nav-sprite-v1 celwidget nav-bluebeacon nav-a11y-t1 bold-focus-hover layout2 nav-flex layout3 layout3-alt nav-packard-glow hamburger nav-progressive-attribute\"}},{\"cel"
		"\":{\"n\":\"desktop-hero-order\",\"w\":1263,\"h\":230,\"d\":0,\"x\":0,\"y\":99,\"t\":18324,\"k\":\"ewi\",\"cl\":\"celwidget\"}},{\"cel\":{\"n\":\"gw-ftGr-desktop-hero-1\",\"w\":1223,\"h\":600,\"d\":0,\"x\":40,\"y\":135,\"t\":18324,\"k\":\"ewi\",\"cl\":\"gw-ftGr-desktop-hero gw-critical-content csm-placement-id-9cbb6960-2ff9-41e4-94ff-32680c208d5a desktop-gateway-hero_5a847718-8687-47ec-ba03-57a43d59aad1 celwidget pd_rd_wg-KV7Cy pd_rd_w-UYpeQ pd_rd_r-12687d5e-92e0-4165-9b79-7259bc96c652\"}},{\"cel"
		"\":{\"n\":\"gw-ftGr-desktop-hero-2\",\"w\":1223,\"h\":20,\"d\":0,\"x\":40,\"y\":735,\"t\":18324,\"k\":\"ewi\",\"cl\":\"a-lazy-loaded gw-ftGr-desktop-hero csm-placement-id-c55a304a-3dad-4d6d-84b9-e7859e5a0bbb desktop-gateway-hero_da97d167-b153-46dc-8247-eb3126339d5a celwidget pd_rd_wg-KV7Cy pd_rd_w-WAFdL pd_rd_r-12687d5e-92e0-4165-9b79-7259bc96c652\"}},{\"cel\":{\"n\":\"gw-ftGr-desktop-hero-3\",\"w\":1223,\"h\":20,\"d\":0,\"x\":40,\"y\":755,\"t\":18324,\"k\":\"ewi\",\"cl\":\"a-lazy-loaded "
		"gw-ftGr-desktop-hero csm-placement-id-6bd9a83c-3722-4f5c-a531-ccf7a3d8e6a6 desktop-gateway-hero_00418d0c-4468-4310-9380-9cfaa7fa7067 celwidget pd_rd_wg-KV7Cy pd_rd_w-xKptf pd_rd_r-12687d5e-92e0-4165-9b79-7259bc96c652\"}},{\"cel\":{\"n\":\"gw-ftGr-desktop-hero-4\",\"w\":1223,\"h\":20,\"d\":0,\"x\":40,\"y\":775,\"t\":18324,\"k\":\"ewi\",\"cl\":\"a-lazy-loaded gw-ftGr-desktop-hero csm-placement-id-73d958bd-6ca7-46ff-8084-5fcdad211985 desktop-gateway-hero_fd6dea67-ed2e-4ae5-95c9-e044027cc69c celwidget"
		" pd_rd_wg-KV7Cy pd_rd_w-FdEDc pd_rd_r-12687d5e-92e0-4165-9b79-7259bc96c652\"}},{\"cel\":{\"n\":\"gw-ftGr-desktop-hero-5\",\"w\":1223,\"h\":20,\"d\":0,\"x\":40,\"y\":795,\"t\":18324,\"k\":\"ewi\",\"cl\":\"a-lazy-loaded gw-ftGr-desktop-hero csm-placement-id-35d2e3e7-d6d6-40a8-b160-754a6a92c950 desktop-gateway-hero_364d2858-a1d6-44b8-8d7f-57074fdca8bb celwidget pd_rd_wg-KV7Cy pd_rd_w-tvR79 pd_rd_r-12687d5e-92e0-4165-9b79-7259bc96c652\"}},{\"cel\":{\"n\":\"gw-ftGr-desktop-hero-6\",\"w\":1223,\"h\":20,"
		"\"d\":0,\"x\":40,\"y\":815,\"t\":18324,\"k\":\"ewi\",\"cl\":\"a-lazy-loaded gw-ftGr-desktop-hero csm-placement-id-be1f9daf-4d19-45c4-80a8-9f43dc62cb2d desktop-gateway-hero_2125dafb-468c-4015-a4c9-c38bad8a9403 celwidget pd_rd_wg-KV7Cy pd_rd_w-ePlrW pd_rd_r-12687d5e-92e0-4165-9b79-7259bc96c652\"}},{\"cel\":{\"n\":\"gw-ftGr-desktop-hero-7\",\"w\":1223,\"h\":20,\"d\":0,\"x\":40,\"y\":835,\"t\":18324,\"k\":\"ewi\",\"cl\":\"a-lazy-loaded gw-ftGr-desktop-hero "
		"csm-placement-id-0044bffe-bf18-49f9-8d38-b2cc8858b52f desktop-gateway-hero_29a73bf9-2d80-4a33-aaf8-12cd5c13ee11 celwidget pd_rd_wg-KV7Cy pd_rd_w-nUgXT pd_rd_r-12687d5e-92e0-4165-9b79-7259bc96c652\"}},{\"cel\":{\"n\":\"desktop-banner-stripe\",\"w\":1243,\"h\":20,\"d\":0,\"x\":10,\"y\":349,\"t\":18324,\"k\":\"ewi\",\"cl\":\"desktop-stripe csm-placement-id-ad7e52ed-7e0b-44e3-85c1-b8a893426b20 desktop-gateway-atf_a02468d5-861c-403a-87e5-b4b83843220f celwidget pd_rd_wg-epykp pd_rd_w-BjEpo "
		"pd_rd_r-cc19505d-c0eb-4ddb-a7af-01fc82604681\"}},{\"cel\":{\"n\":\"desktop-grid-1\",\"w\":310.75,\"h\":420,\"d\":0,\"x\":10,\"y\":389,\"t\":18324,\"k\":\"ewi\",\"cl\":\"gw-col csm-placement-id-12129333-2117-4490-9c17-6d31baf0582a desktop-gateway-atf_839e00e4-7ec3-4d41-8af3-638cd55ecdc7 celwidget pd_rd_wg-epykp pd_rd_w-mt0Gv pd_rd_r-cc19505d-c0eb-4ddb-a7af-01fc82604681\"}},{\"cel\":{\"n\":\"desktop-grid-2\",\"w\":310.75,\"h\":420,\"d\":0,\"x\":320.75,\"y\":389,\"t\":18324,\"k\":\"ewi\",\"cl\":\""
		"gw-col csm-placement-id-7acbca95-6949-4783-9691-9ac9df8021d9 desktop-gateway-atf_005cef6d-6734-4108-af95-4931d86ee621 celwidget pd_rd_wg-epykp pd_rd_w-Awkjl pd_rd_r-cc19505d-c0eb-4ddb-a7af-01fc82604681\"}},{\"cel\":{\"n\":\"desktop-grid-3\",\"w\":310.75,\"h\":420,\"d\":0,\"x\":631.5,\"y\":389,\"t\":18324,\"k\":\"ewi\",\"cl\":\"gw-col csm-placement-id-3a6a1f11-a96c-444b-b219-97322616eb92 desktop-gateway-atf_53e62ccb-d2a2-4db4-8376-c9bc073e5b02 celwidget pd_rd_wg-epykp pd_rd_w-6iVpq "
		"pd_rd_r-cc19505d-c0eb-4ddb-a7af-01fc82604681\"}},{\"cel\":{\"n\":\"desktop-grid-4\",\"w\":310.75,\"h\":420,\"d\":0,\"x\":942.25,\"y\":389,\"t\":18324,\"k\":\"ewi\",\"cl\":\"gw-col csm-placement-id-c0480761-6b7c-400b-bca5-28ff417248d1 desktop-gateway-atf_985bafb1-ea4d-441e-b1af-4e86601d4129 celwidget pd_rd_wg-epykp pd_rd_w-crvNC pd_rd_r-cc19505d-c0eb-4ddb-a7af-01fc82604681\"}},{\"cel\":{\"n\":\"desktop-grid-5\",\"w\":310.75,\"h\":420,\"d\":0,\"x\":10,\"y\":829,\"t\":18324,\"k\":\"ewi\",\"cl\":\""
		"gw-col csm-placement-id-def2f06c-d9a7-4927-8433-aa333a9fca53 desktop-gateway-atf_deals-p13n-e8f666eb-c2f1-4a11-92a6-c771032d0914 celwidget pd_rd_wg-epykp pd_rd_w-DGDjU pd_rd_r-cc19505d-c0eb-4ddb-a7af-01fc82604681\"}},{\"cel\":{\"n\":\"desktop-grid-6\",\"w\":310.75,\"h\":420,\"d\":0,\"x\":320.75,\"y\":829,\"t\":18324,\"k\":\"ewi\",\"cl\":\"gw-col csm-placement-id-44da4965-9668-4613-bec2-a3a75f0c2ad4 desktop-gateway-atf_cb7ae3f4-4bfc-447f-8007-224d69470c90 celwidget pd_rd_wg-epykp pd_rd_w-009QB "
		"pd_rd_r-cc19505d-c0eb-4ddb-a7af-01fc82604681\"}},{\"cel\":{\"n\":\"desktop-grid-7\",\"w\":310.75,\"h\":420,\"d\":0,\"x\":631.5,\"y\":829,\"t\":18324,\"k\":\"ewi\",\"cl\":\"gw-col csm-placement-id-3508909d-dd9f-4fa2-80be-54ce8f44ff31 desktop-gateway-atf_a986b73d-64b1-4420-aa6c-2b1a11ee4e46 celwidget pd_rd_wg-epykp pd_rd_w-3t5nW pd_rd_r-cc19505d-c0eb-4ddb-a7af-01fc82604681\"}},{\"cel\":{\"n\":\"desktop-grid-8\",\"w\":310.75,\"h\":420,\"d\":0,\"x\":942.25,\"y\":829,\"t\":18324,\"k\":\"ewi\",\"cl\":\""
		"gw-col csm-placement-id-bebfcdc6-3b0c-41d3-9614-a84df9834c05 desktop-gateway-atf_bbfde90f-09de-43fd-b8bf-ffe1df937343 celwidget pd_rd_wg-epykp pd_rd_w-Vz3ye pd_rd_r-cc19505d-c0eb-4ddb-a7af-01fc82604681\"}},{\"cel\":{\"n\":\"\",\"w\":0,\"h\":0,\"d\":1,\"x\":0,\"y\":0,\"t\":18324,\"k\":\"ewi\",\"cl\":\"gw-col celwidget\"}},{\"cel\":{\"n\":\"desktop-1\",\"w\":1263,\"h\":321.34375,\"d\":0,\"x\":10,\"y\":1289,\"t\":18324,\"k\":\"ewi\",\"cl\":\"gw-col desktop-row gwi-row gw-widget-instrument "
		"gw-auto-height csm-placement-id-7106ac9d-8af2-40c0-8368-9e5c34686062 desktop-gateway-btf_c97d29da-2401-42f6-903a-71ec551522a1 celwidget pd_rd_wg-9GXLg pd_rd_w-IXmnq pd_rd_r-e769952f-6868-4c8b-b6d9-380cafc33db2\"}},{\"cel\":{\"n\":\"desktop-2\",\"w\":1263,\"h\":321.34375,\"d\":0,\"x\":10,\"y\":1630.34375,\"t\":18324,\"k\":\"ewi\",\"cl\":\"gw-col desktop-row gwi-row gw-widget-instrument gw-auto-height csm-placement-id-ba25a0fb-eeb9-4762-9c76-8ca869df5234 "
		"desktop-gateway-btf_exports-top-seller-in-books-unrec celwidget pd_rd_wg-9GXLg pd_rd_w-0T3hy pd_rd_r-e769952f-6868-4c8b-b6d9-380cafc33db2\"}},{\"cel\":{\"n\":\"desktop-btf-grid-1\",\"w\":310.75,\"h\":420,\"d\":0,\"x\":10,\"y\":1971.6875,\"t\":18324,\"k\":\"ewi\",\"cl\":\"gw-col csm-placement-id-33f8f65b-b95c-44af-8b89-e59e69e79828 desktop-gateway-btf_287d1d4c-16bd-4ed3-8cd5-96b58d2b52bc celwidget pd_rd_wg-9GXLg pd_rd_w-FTric pd_rd_r-e769952f-6868-4c8b-b6d9-380cafc33db2\"}},{\"cel\":{\"n\":\""
		"desktop-btf-grid-2\",\"w\":310.75,\"h\":420,\"d\":0,\"x\":320.75,\"y\":1971.6875,\"t\":18324,\"k\":\"ewi\",\"cl\":\"gw-col csm-placement-id-09483392-9ac6-434a-a3d7-39d83662f54a desktop-gateway-btf_6a7f6e8e-2af5-4f1e-808f-be31cba46511 celwidget pd_rd_wg-9GXLg pd_rd_w-0iPDv pd_rd_r-e769952f-6868-4c8b-b6d9-380cafc33db2\"}},{\"cel\":{\"n\":\"desktop-btf-grid-3\",\"w\":310.75,\"h\":420,\"d\":0,\"x\":631.5,\"y\":1971.6875,\"t\":18324,\"k\":\"ewi\",\"cl\":\"gw-col "
		"csm-placement-id-4b335ede-a344-46a5-af28-95a1242a7034 desktop-gateway-btf_ff7f051a-6101-47e8-a63e-e4e60c303a63 celwidget pd_rd_wg-9GXLg pd_rd_w-tN5Mo pd_rd_r-e769952f-6868-4c8b-b6d9-380cafc33db2\"}},{\"cel\":{\"n\":\"desktop-btf-grid-4\",\"w\":310.75,\"h\":420,\"d\":0,\"x\":942.25,\"y\":1971.6875,\"t\":18324,\"k\":\"ewi\",\"cl\":\"gw-col csm-placement-id-6fb11530-aa4d-4809-af57-61c93f9fed0b desktop-gateway-btf_fee9b2d0-54f2-48e9-9251-f2bf2099950d celwidget pd_rd_wg-9GXLg pd_rd_w-5uGDM "
		"pd_rd_r-e769952f-6868-4c8b-b6d9-380cafc33db2\"}},{\"cel\":{\"n\":\"desktop-3\",\"w\":1263,\"h\":321.34375,\"d\":0,\"x\":10,\"y\":2411.6875,\"t\":18324,\"k\":\"ewi\",\"cl\":\"gw-col desktop-row gwi-row gw-widget-instrument gw-auto-height csm-placement-id-9929d3ab-edb7-4ef5-a232-26d90f828fa5 desktop-gateway-btf_crs_zg_ts-3760911 celwidget pd_rd_wg-9GXLg pd_rd_w-LBmK5 pd_rd_r-e769952f-6868-4c8b-b6d9-380cafc33db2\"}},{\"cel\":{\"n\":\"desktop-4\",\"w\":1263,\"h\":321.34375,\"d\":0,\"x\":10,\"y\""
		":2753.03125,\"t\":18324,\"k\":\"ewi\",\"cl\":\"gw-col desktop-row gwi-row gw-widget-instrument gw-auto-height csm-placement-id-81a68cec-8afc-4296-99f7-78cf5ddc15b5 desktop-gateway-btf_deals-p13n-aac36b41-be09-40e1-a81c-3472b641a618 celwidget pd_rd_wg-9GXLg pd_rd_w-2yvT9 pd_rd_r-e769952f-6868-4c8b-b6d9-380cafc33db2\"}},{\"cel\":{\"n\":\"desktop-btf-grid-5\",\"w\":310.75,\"h\":420,\"d\":0,\"x\":10,\"y\":3094.375,\"t\":18324,\"k\":\"ewi\",\"cl\":\"gw-col "
		"csm-placement-id-7d5cde1d-b3d4-4ca8-a1cf-489ba1530c6b desktop-gateway-btf_5f90c86e-9699-4246-9686-cf8e63fea9d2 celwidget pd_rd_wg-9GXLg pd_rd_w-NPXwi pd_rd_r-e769952f-6868-4c8b-b6d9-380cafc33db2\"}},{\"cel\":{\"n\":\"desktop-btf-grid-6\",\"w\":310.75,\"h\":420,\"d\":0,\"x\":320.75,\"y\":3094.375,\"t\":18324,\"k\":\"ewi\",\"cl\":\"gw-col csm-placement-id-6150d902-4be3-4eda-9f76-402f3751bee6 desktop-gateway-btf_95d48140-9274-42a1-8519-4b0fb7b8df42 celwidget pd_rd_wg-9GXLg pd_rd_w-zuKWT "
		"pd_rd_r-e769952f-6868-4c8b-b6d9-380cafc33db2\"}},{\"cel\":{\"n\":\"desktop-btf-grid-7\",\"w\":310.75,\"h\":420,\"d\":0,\"x\":631.5,\"y\":3094.375,\"t\":18324,\"k\":\"ewi\",\"cl\":\"gw-col csm-placement-id-133c76c2-17c5-4fe7-be87-8177a87f7092 desktop-gateway-btf_1133fcb2-84a7-4f29-9b6d-63c8c7c00b15 celwidget pd_rd_wg-9GXLg pd_rd_w-4OpKN pd_rd_r-e769952f-6868-4c8b-b6d9-380cafc33db2\"}},{\"cel\":{\"n\":\"desktop-btf-grid-8\",\"w\":310.75,\"h\":420,\"d\":0,\"x\":942.25,\"y\":3094.375,\"t\":18324,\"k\""
		":\"ewi\",\"cl\":\"gw-col csm-placement-id-7d3e5960-aaeb-465f-b3c6-e125eab0c973 desktop-gateway-btf_e1cb31ab-9225-48f7-b9bc-6ecac5536148 celwidget pd_rd_wg-9GXLg pd_rd_w-bVQth pd_rd_r-e769952f-6868-4c8b-b6d9-380cafc33db2\"}},{\"cel\":{\"n\":\"desktop-5\",\"w\":1263,\"h\":321.34375,\"d\":0,\"x\":10,\"y\":3534.375,\"t\":18324,\"k\":\"ewi\",\"cl\":\"gw-col desktop-row gwi-row gw-widget-instrument gw-auto-height csm-placement-id-9929d3ab-edb7-4ef5-a232-26d90f828fa5 desktop-gateway-btf_crs_zg_ts-284507 "
		"celwidget pd_rd_wg-9GXLg pd_rd_w-QdEji pd_rd_r-e769952f-6868-4c8b-b6d9-380cafc33db2\"}},{\"cel\":{\"n\":\"desktop-6\",\"w\":1263,\"h\":321.34375,\"d\":0,\"x\":10,\"y\":3875.71875,\"t\":18324,\"k\":\"ewi\",\"cl\":\"gw-col desktop-row gwi-row gw-widget-instrument gw-auto-height csm-placement-id-9929d3ab-edb7-4ef5-a232-26d90f828fa5 desktop-gateway-btf_crs_zg_ts-3375251 celwidget pd_rd_wg-9GXLg pd_rd_w-B0Pzl pd_rd_r-e769952f-6868-4c8b-b6d9-380cafc33db2\"}},{\"cel\":{\"n\":\"desktop-7\",\"w\":1263,\"h"
		"\":321.34375,\"d\":0,\"x\":10,\"y\":4217.0625,\"t\":18324,\"k\":\"ewi\",\"cl\":\"gw-col desktop-row gwi-row gw-widget-instrument gw-auto-height csm-placement-id-9929d3ab-edb7-4ef5-a232-26d90f828fa5 desktop-gateway-btf_crs_zg_ts-541966 celwidget pd_rd_wg-9GXLg pd_rd_w-XAPWh pd_rd_r-e769952f-6868-4c8b-b6d9-380cafc33db2\"}},{\"cel\":{\"k\":\"hrt\",\"t\":20824}},{\"csm\":{\"k\":\"chk\",\"f\":2,\"l\":{\"cel\":52,\"csm\":2,\"jserr-rw\":52},\"s\":\"full\"}},{\"csmcount\":{\"counter\":\""
		"foresterPayloadSize\",\"t\":0,\"value\":10842}}]}", 
		LAST);

	web_custom_request("com.amazon.csm.csa.prod_2", 
		"URL=https://unagi.amazon.com/1/events/com.amazon.csm.csa.prod", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.amazon.com/", 
		"Snapshot=t87.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"events\":[{\"data\":{\"messageId\":\"80crc5-9s2nz9-qmqvnl-ih2a9x\",\"schemaId\":\"csa.InternalCounters.3\",\"c\":{\"spLoadJs\":{\"f\":1},\"aui:resource_count\":{\"s\":55,\"l\":10,\"c\":10},\"aui:resource_retry\":{\"s\":6,\"l\":3,\"c\":3},\"Event:csm.CrossOriginDomains.2\":{\"f\":1},\"postbackImageSize\":{\"s\":1186,\"l\":198,\"c\":3},\"aui:resource_error\":{\"s\":6,\"l\":3,\"c\":3}},\"timestamp\":\"2024-02-07T12:04:20.144Z\",\"application\":\"Retail:Prod:www.amazon.com\",\""
		"obfuscatedMarketplaceId\":\"ATVPDKIKX0DER\",\"lob\":\"1\",\"producerId\":\"csa\",\"entities\":{\"page\":{\"id\":\"y45xqs-v4tsc7-d3onkb-o8oc8f\",\"requestId\":\"5AFSK1C7VNHSD7KRB97Y\",\"pageType\":\"Gateway\",\"subPageType\":\"desktop\"},\"session\":{\"id\":\"133-6658273-5713951\"}}}},{\"data\":{\"messageId\":\"aycubl-1j1lir-lyjswz-irsmwd\",\"markers\":{\"largestContentfulPaint\":4722,\"lcp\":4722,\"pc\":25254,\"at\":25254,\"largestContentfulPaint.render\":4722,\"visuallyLoaded10\":5527,\""
		"visuallyLoaded20\":5653,\"visuallyLoaded30\":5653,\"visuallyLoaded40\":5866,\"visuallyLoaded50\":5866,\"vl50\":5866,\"visuallyLoaded60\":5866,\"visuallyLoaded70\":5866,\"visuallyLoaded80\":5866,\"visuallyLoaded90\":5866,\"vl90\":5866,\"visuallyLoaded100\":5866,\"vl100\":5866,\"speedIndex\":5737,\"si\":5737,\"visuallyLoaded0\":0,\"atfSpeedIndex\":5737,\"atfsi\":5737},\"markerTimestamps\":{\"largestContentfulPaint\":1707307442402,\"lcp\":1707307442402,\"pc\":1707307462934,\"at\":1707307462934,\""
		"largestContentfulPaint.render\":1707307442402,\"visuallyLoaded10\":1707307443207,\"visuallyLoaded20\":1707307443333,\"visuallyLoaded30\":1707307443333,\"visuallyLoaded40\":1707307443546,\"visuallyLoaded50\":1707307443546,\"vl50\":1707307443546,\"visuallyLoaded60\":1707307443546,\"visuallyLoaded70\":1707307443546,\"visuallyLoaded80\":1707307443546,\"visuallyLoaded90\":1707307443546,\"vl90\":1707307443546,\"visuallyLoaded100\":1707307443546,\"vl100\":1707307443546,\"speedIndex\":1707307443417,\"si\""
		":1707307443417,\"visuallyLoaded0\":1707307437680,\"atfSpeedIndex\":1707307443417,\"atfsi\":1707307443417},\"navigationStartTimestamp\":\"2024-02-07T12:03:57.680Z\",\"schemaId\":\"csa.PageLatency.6\",\"timestamp\":\"2024-02-07T12:04:20.147Z\",\"application\":\"Retail:Prod:www.amazon.com\",\"obfuscatedMarketplaceId\":\"ATVPDKIKX0DER\",\"lob\":\"1\",\"producerId\":\"csa\",\"entities\":{\"page\":{\"id\":\"y45xqs-v4tsc7-d3onkb-o8oc8f\",\"requestId\":\"5AFSK1C7VNHSD7KRB97Y\",\"pageType\":\"Gateway\",\""
		"subPageType\":\"desktop\"},\"session\":{\"id\":\"133-6658273-5713951\"}}}},{\"data\":{\"messageId\":\"ybarsj-u4746g-ehfxrt-xklozj\",\"schemaId\":\"csa.Error.6\",\"errorMessage\":\"cropped-image-link: Image failed to load https://m.media-amazon.com/images/I/61WSHXI4MjL._SX1500_.jpg\",\"attribution\":\"gatewayCardImageError\",\"logLevel\":\"ERROR\",\"url\":\"https://www.amazon.com/\",\"file\":\"https://www.amazon.com/\",\"line\":\"172\",\"column\":null,\"stack\":[\"Error: Image failed to load https:"
		"//m.media-amazon.com/images/I/61WSHXI4MjL._SX1500_.jpg\",\"at HTMLImageElement.d (https://www.amazon.com/:172:209)\"],\"context\":{},\"metadata\":{\"name\":\"Error\",\"csm\":\"v5 ueLogError stack\"},\"timestamp\":\"2024-02-07T12:04:21.686Z\",\"application\":\"Retail:Prod:www.amazon.com\",\"obfuscatedMarketplaceId\":\"ATVPDKIKX0DER\",\"lob\":\"1\",\"producerId\":\"csa\",\"entities\":{\"page\":{\"id\":\"y45xqs-v4tsc7-d3onkb-o8oc8f\",\"requestId\":\"5AFSK1C7VNHSD7KRB97Y\",\"meaningful\":\""
		"interactive\",\"url\":\"https://www.amazon.com/\",\"server\":\"www.amazon.com\",\"path\":\"/\",\"referrer\":\"\",\"title\":\"Amazon.com. Spend less. Smile more.\",\"transitionType\":\"hard\",\"pageType\":\"Gateway\",\"subPageType\":\"desktop\",\"pageTypeId\":\"desktop\"},\"session\":{\"id\":\"133-6658273-5713951\"}}}},{\"data\":{\"messageId\":\"yozhpf-ml3xd6-7v1ra-ddomym\",\"schemaId\":\"csa.Error.6\",\"errorMessage\":\"deal-of-the-day: Image failed to load https://m.media-amazon.com/images/I/"
		"51YcLAPf4aL._AC_SY230_.jpg\",\"attribution\":\"gatewayCardImageError\",\"logLevel\":\"ERROR\",\"url\":\"https://www.amazon.com/\",\"file\":\"https://www.amazon.com/\",\"line\":\"172\",\"column\":null,\"stack\":[\"Error: Image failed to load https://m.media-amazon.com/images/I/51YcLAPf4aL._AC_SY230_.jpg\",\"at HTMLImageElement.d (https://www.amazon.com/:172:209)\"],\"context\":{},\"metadata\":{\"name\":\"Error\",\"csm\":\"v5 ueLogError stack\"},\"timestamp\":\"2024-02-07T12:04:21.686Z\",\""
		"application\":\"Retail:Prod:www.amazon.com\",\"obfuscatedMarketplaceId\":\"ATVPDKIKX0DER\",\"lob\":\"1\",\"producerId\":\"csa\",\"entities\":{\"page\":{\"id\":\"y45xqs-v4tsc7-d3onkb-o8oc8f\",\"requestId\":\"5AFSK1C7VNHSD7KRB97Y\",\"meaningful\":\"interactive\",\"url\":\"https://www.amazon.com/\",\"server\":\"www.amazon.com\",\"path\":\"/\",\"referrer\":\"\",\"title\":\"Amazon.com. Spend less. Smile more.\",\"transitionType\":\"hard\",\"pageType\":\"Gateway\",\"subPageType\":\"desktop\",\""
		"pageTypeId\":\"desktop\"},\"session\":{\"id\":\"133-6658273-5713951\"}}}},{\"data\":{\"messageId\":\"85sn8m-sr6suv-ear7gy-hv3h09\",\"schemaId\":\"csa.Error.6\",\"errorMessage\":\"ameyal-product-shoveler: Image failed to load https://m.media-amazon.com/images/I/817Rqx4FHSL._AC_SY200_.jpg\",\"attribution\":\"gatewayCardImageError\",\"logLevel\":\"ERROR\",\"url\":\"https://www.amazon.com/\",\"file\":\"https://www.amazon.com/\",\"line\":\"172\",\"column\":null,\"stack\":[\"Error: Image failed to load "
		"https://m.media-amazon.com/images/I/817Rqx4FHSL._AC_SY200_.jpg\",\"at HTMLImageElement.d (https://www.amazon.com/:172:209)\"],\"context\":{},\"metadata\":{\"name\":\"Error\",\"csm\":\"v5 ueLogError stack\"},\"timestamp\":\"2024-02-07T12:04:21.686Z\",\"application\":\"Retail:Prod:www.amazon.com\",\"obfuscatedMarketplaceId\":\"ATVPDKIKX0DER\",\"lob\":\"1\",\"producerId\":\"csa\",\"entities\":{\"page\":{\"id\":\"y45xqs-v4tsc7-d3onkb-o8oc8f\",\"requestId\":\"5AFSK1C7VNHSD7KRB97Y\",\"meaningful\":\""
		"interactive\",\"url\":\"https://www.amazon.com/\",\"server\":\"www.amazon.com\",\"path\":\"/\",\"referrer\":\"\",\"title\":\"Amazon.com. Spend less. Smile more.\",\"transitionType\":\"hard\",\"pageType\":\"Gateway\",\"subPageType\":\"desktop\",\"pageTypeId\":\"desktop\"},\"session\":{\"id\":\"133-6658273-5713951\"}}}},{\"data\":{\"messageId\":\"fjkm07-3k4u1k-ajgfz3-x4ngsc\",\"schemaId\":\"csa.Error.6\",\"errorMessage\":\"Hit Info\",\"attribution\":null,\"logLevel\":\"INFO\",\"url\":null,\"file\""
		":null,\"line\":null,\"column\":null,\"stack\":[],\"context\":{},\"metadata\":{\"csm\":\"v5 onerror\",\"adb\":\"adblk_yes\"},\"timestamp\":\"2024-02-07T12:04:21.686Z\",\"application\":\"Retail:Prod:www.amazon.com\",\"obfuscatedMarketplaceId\":\"ATVPDKIKX0DER\",\"lob\":\"1\",\"producerId\":\"csa\",\"entities\":{\"page\":{\"id\":\"y45xqs-v4tsc7-d3onkb-o8oc8f\",\"requestId\":\"5AFSK1C7VNHSD7KRB97Y\",\"meaningful\":\"interactive\",\"url\":\"https://www.amazon.com/\",\"server\":\"www.amazon.com\",\""
		"path\":\"/\",\"referrer\":\"\",\"title\":\"Amazon.com. Spend less. Smile more.\",\"transitionType\":\"hard\",\"pageType\":\"Gateway\",\"subPageType\":\"desktop\",\"pageTypeId\":\"desktop\"},\"session\":{\"id\":\"133-6658273-5713951\"}}}},{\"data\":{\"messageId\":\"gvsc2r-doqh2v-tmpulv-9oif3m\",\"schemaId\":\"csa.Error.6\",\"errorMessage\":\"ameyal-product-shoveler: Image failed to load https://m.media-amazon.com/images/I/817Rqx4FHSL._AC_SY200_.jpg\",\"attribution\":\"gatewayCardImageError\",\""
		"logLevel\":\"ERROR\",\"url\":\"https://www.amazon.com/\",\"file\":\"https://www.amazon.com/\",\"line\":\"172\",\"column\":null,\"stack\":[\"Error: Image failed to load https://m.media-amazon.com/images/I/817Rqx4FHSL._AC_SY200_.jpg\",\"at HTMLImageElement.d (https://www.amazon.com/:172:209)\"],\"context\":{},\"metadata\":{\"name\":\"Error\",\"csm\":\"v5 ueLogError stack\"},\"timestamp\":\"2024-02-07T12:04:21.686Z\",\"application\":\"Retail:Prod:www.amazon.com\",\"obfuscatedMarketplaceId\":\""
		"ATVPDKIKX0DER\",\"lob\":\"1\",\"producerId\":\"csa\",\"entities\":{\"page\":{\"id\":\"y45xqs-v4tsc7-d3onkb-o8oc8f\",\"requestId\":\"5AFSK1C7VNHSD7KRB97Y\",\"meaningful\":\"interactive\",\"url\":\"https://www.amazon.com/\",\"server\":\"www.amazon.com\",\"path\":\"/\",\"referrer\":\"\",\"title\":\"Amazon.com. Spend less. Smile more.\",\"transitionType\":\"hard\",\"pageType\":\"Gateway\",\"subPageType\":\"desktop\",\"pageTypeId\":\"desktop\"},\"session\":{\"id\":\"133-6658273-5713951\"}}}},{\"data\":"
		"{\"messageId\":\"i1khdb-2h72uh-98b9kg-xyzxav\",\"schemaId\":\"csa.Error.6\",\"errorMessage\":\"ameyal-product-shoveler: Image failed to load https://m.media-amazon.com/images/I/817Rqx4FHSL._AC_SY200_.jpg\",\"attribution\":\"gatewayCardImageError\",\"logLevel\":\"ERROR\",\"url\":\"https://www.amazon.com/\",\"file\":\"https://www.amazon.com/\",\"line\":\"172\",\"column\":null,\"stack\":[\"Error: Image failed to load https://m.media-amazon.com/images/I/817Rqx4FHSL._AC_SY200_.jpg\",\"at "
		"HTMLImageElement.d (https://www.amazon.com/:172:209)\"],\"context\":{},\"metadata\":{\"name\":\"Error\",\"csm\":\"v5 ueLogError stack\"},\"timestamp\":\"2024-02-07T12:04:21.687Z\",\"application\":\"Retail:Prod:www.amazon.com\",\"obfuscatedMarketplaceId\":\"ATVPDKIKX0DER\",\"lob\":\"1\",\"producerId\":\"csa\",\"entities\":{\"page\":{\"id\":\"y45xqs-v4tsc7-d3onkb-o8oc8f\",\"requestId\":\"5AFSK1C7VNHSD7KRB97Y\",\"meaningful\":\"interactive\",\"url\":\"https://www.amazon.com/\",\"server\":\""
		"www.amazon.com\",\"path\":\"/\",\"referrer\":\"\",\"title\":\"Amazon.com. Spend less. Smile more.\",\"transitionType\":\"hard\",\"pageType\":\"Gateway\",\"subPageType\":\"desktop\",\"pageTypeId\":\"desktop\"},\"session\":{\"id\":\"133-6658273-5713951\"}}}},{\"data\":{\"messageId\":\"90sc94-p2yc5c-pyw6ds-qut9v5\",\"schemaId\":\"csa.Error.6\",\"errorMessage\":\"ameyal-product-shoveler: Image failed to load https://m.media-amazon.com/images/I/817Rqx4FHSL._AC_SY200_.jpg\",\"attribution\":\""
		"gatewayCardImageError\",\"logLevel\":\"ERROR\",\"url\":\"https://www.amazon.com/\",\"file\":\"https://www.amazon.com/\",\"line\":\"172\",\"column\":null,\"stack\":[\"Error: Image failed to load https://m.media-amazon.com/images/I/817Rqx4FHSL._AC_SY200_.jpg\",\"at HTMLImageElement.d (https://www.amazon.com/:172:209)\"],\"context\":{},\"metadata\":{\"name\":\"Error\",\"csm\":\"v5 ueLogError stack\"},\"timestamp\":\"2024-02-07T12:04:21.687Z\",\"application\":\"Retail:Prod:www.amazon.com\",\""
		"obfuscatedMarketplaceId\":\"ATVPDKIKX0DER\",\"lob\":\"1\",\"producerId\":\"csa\",\"entities\":{\"page\":{\"id\":\"y45xqs-v4tsc7-d3onkb-o8oc8f\",\"requestId\":\"5AFSK1C7VNHSD7KRB97Y\",\"meaningful\":\"interactive\",\"url\":\"https://www.amazon.com/\",\"server\":\"www.amazon.com\",\"path\":\"/\",\"referrer\":\"\",\"title\":\"Amazon.com. Spend less. Smile more.\",\"transitionType\":\"hard\",\"pageType\":\"Gateway\",\"subPageType\":\"desktop\",\"pageTypeId\":\"desktop\"},\"session\":{\"id\":\""
		"133-6658273-5713951\"}}}},{\"data\":{\"messageId\":\"z939fg-wdtkbs-416odx-7dgamb\",\"schemaId\":\"csa.Error.6\",\"errorMessage\":\"ameyal-product-shoveler: Image failed to load https://m.media-amazon.com/images/I/817Rqx4FHSL._AC_SY200_.jpg\",\"attribution\":\"gatewayCardImageError\",\"logLevel\":\"ERROR\",\"url\":\"https://www.amazon.com/\",\"file\":\"https://www.amazon.com/\",\"line\":\"172\",\"column\":null,\"stack\":[\"Error: Image failed to load https://m.media-amazon.com/images/I/"
		"817Rqx4FHSL._AC_SY200_.jpg\",\"at HTMLImageElement.d (https://www.amazon.com/:172:209)\"],\"context\":{},\"metadata\":{\"name\":\"Error\",\"csm\":\"v5 ueLogError stack\"},\"timestamp\":\"2024-02-07T12:04:21.687Z\",\"application\":\"Retail:Prod:www.amazon.com\",\"obfuscatedMarketplaceId\":\"ATVPDKIKX0DER\",\"lob\":\"1\",\"producerId\":\"csa\",\"entities\":{\"page\":{\"id\":\"y45xqs-v4tsc7-d3onkb-o8oc8f\",\"requestId\":\"5AFSK1C7VNHSD7KRB97Y\",\"meaningful\":\"interactive\",\"url\":\"https://"
		"www.amazon.com/\",\"server\":\"www.amazon.com\",\"path\":\"/\",\"referrer\":\"\",\"title\":\"Amazon.com. Spend less. Smile more.\",\"transitionType\":\"hard\",\"pageType\":\"Gateway\",\"subPageType\":\"desktop\",\"pageTypeId\":\"desktop\"},\"session\":{\"id\":\"133-6658273-5713951\"}}}},{\"data\":{\"messageId\":\"17qk81-dxd5y1-5cbsmt-lctv4q\",\"schemaId\":\"csa.Error.6\",\"errorMessage\":\"ameyal-product-shoveler: Image failed to load https://m.media-amazon.com/images/I/817Rqx4FHSL._AC_SY200_.jpg"
		"\",\"attribution\":\"gatewayCardImageError\",\"logLevel\":\"ERROR\",\"url\":\"https://www.amazon.com/\",\"file\":\"https://www.amazon.com/\",\"line\":\"172\",\"column\":null,\"stack\":[\"Error: Image failed to load https://m.media-amazon.com/images/I/817Rqx4FHSL._AC_SY200_.jpg\",\"at HTMLImageElement.d (https://www.amazon.com/:172:209)\"],\"context\":{},\"metadata\":{\"name\":\"Error\",\"csm\":\"v5 ueLogError stack\"},\"timestamp\":\"2024-02-07T12:04:21.687Z\",\"application\":\"Retail:Prod"
		":www.amazon.com\",\"obfuscatedMarketplaceId\":\"ATVPDKIKX0DER\",\"lob\":\"1\",\"producerId\":\"csa\",\"entities\":{\"page\":{\"id\":\"y45xqs-v4tsc7-d3onkb-o8oc8f\",\"requestId\":\"5AFSK1C7VNHSD7KRB97Y\",\"meaningful\":\"interactive\",\"url\":\"https://www.amazon.com/\",\"server\":\"www.amazon.com\",\"path\":\"/\",\"referrer\":\"\",\"title\":\"Amazon.com. Spend less. Smile more.\",\"transitionType\":\"hard\",\"pageType\":\"Gateway\",\"subPageType\":\"desktop\",\"pageTypeId\":\"desktop\"},\"session"
		"\":{\"id\":\"133-6658273-5713951\"}}}},{\"data\":{\"messageId\":\"jjiw4z-eyvqm6-1hgycv-jwmjo3\",\"schemaId\":\"csa.Error.6\",\"errorMessage\":\"ameyal-product-shoveler: Image failed to load https://m.media-amazon.com/images/I/817Rqx4FHSL._AC_SY200_.jpg\",\"attribution\":\"gatewayCardImageError\",\"logLevel\":\"ERROR\",\"url\":\"https://www.amazon.com/\",\"file\":\"https://www.amazon.com/\",\"line\":\"172\",\"column\":null,\"stack\":[\"Error: Image failed to load https://m.media-amazon.com/images/I"
		"/817Rqx4FHSL._AC_SY200_.jpg\",\"at HTMLImageElement.d (https://www.amazon.com/:172:209)\"],\"context\":{},\"metadata\":{\"name\":\"Error\",\"csm\":\"v5 ueLogError stack\"},\"timestamp\":\"2024-02-07T12:04:21.687Z\",\"application\":\"Retail:Prod:www.amazon.com\",\"obfuscatedMarketplaceId\":\"ATVPDKIKX0DER\",\"lob\":\"1\",\"producerId\":\"csa\",\"entities\":{\"page\":{\"id\":\"y45xqs-v4tsc7-d3onkb-o8oc8f\",\"requestId\":\"5AFSK1C7VNHSD7KRB97Y\",\"meaningful\":\"interactive\",\"url\":\"https://"
		"www.amazon.com/\",\"server\":\"www.amazon.com\",\"path\":\"/\",\"referrer\":\"\",\"title\":\"Amazon.com. Spend less. Smile more.\",\"transitionType\":\"hard\",\"pageType\":\"Gateway\",\"subPageType\":\"desktop\",\"pageTypeId\":\"desktop\"},\"session\":{\"id\":\"133-6658273-5713951\"}}}},{\"data\":{\"messageId\":\"duecit-xs32zl-9wd92h-fofsn8\",\"schemaId\":\"csa.Error.6\",\"errorMessage\":\"ameyal-product-shoveler: Image failed to load https://m.media-amazon.com/images/I/71yC2YaA8cL._AC_SY200_.jpg"
		"\",\"attribution\":\"gatewayCardImageError\",\"logLevel\":\"ERROR\",\"url\":\"https://www.amazon.com/\",\"file\":\"https://www.amazon.com/\",\"line\":\"172\",\"column\":null,\"stack\":[\"Error: Image failed to load https://m.media-amazon.com/images/I/71yC2YaA8cL._AC_SY200_.jpg\",\"at HTMLImageElement.d (https://www.amazon.com/:172:209)\"],\"context\":{},\"metadata\":{\"name\":\"Error\",\"csm\":\"v5 ueLogError stack\"},\"timestamp\":\"2024-02-07T12:04:21.687Z\",\"application\":\"Retail:Prod"
		":www.amazon.com\",\"obfuscatedMarketplaceId\":\"ATVPDKIKX0DER\",\"lob\":\"1\",\"producerId\":\"csa\",\"entities\":{\"page\":{\"id\":\"y45xqs-v4tsc7-d3onkb-o8oc8f\",\"requestId\":\"5AFSK1C7VNHSD7KRB97Y\",\"meaningful\":\"interactive\",\"url\":\"https://www.amazon.com/\",\"server\":\"www.amazon.com\",\"path\":\"/\",\"referrer\":\"\",\"title\":\"Amazon.com. Spend less. Smile more.\",\"transitionType\":\"hard\",\"pageType\":\"Gateway\",\"subPageType\":\"desktop\",\"pageTypeId\":\"desktop\"},\"session"
		"\":{\"id\":\"133-6658273-5713951\"}}}},{\"data\":{\"messageId\":\"bwwyos-81ylum-jxnsgw-di9djo\",\"schemaId\":\"csa.Error.6\",\"errorMessage\":\"ameyal-product-shoveler: Image failed to load https://m.media-amazon.com/images/I/71yC2YaA8cL._AC_SY200_.jpg\",\"attribution\":\"gatewayCardImageError\",\"logLevel\":\"ERROR\",\"url\":\"https://www.amazon.com/\",\"file\":\"https://www.amazon.com/\",\"line\":\"172\",\"column\":null,\"stack\":[\"Error: Image failed to load https://m.media-amazon.com/images/I"
		"/71yC2YaA8cL._AC_SY200_.jpg\",\"at HTMLImageElement.d (https://www.amazon.com/:172:209)\"],\"context\":{},\"metadata\":{\"name\":\"Error\",\"csm\":\"v5 ueLogError stack\"},\"timestamp\":\"2024-02-07T12:04:21.688Z\",\"application\":\"Retail:Prod:www.amazon.com\",\"obfuscatedMarketplaceId\":\"ATVPDKIKX0DER\",\"lob\":\"1\",\"producerId\":\"csa\",\"entities\":{\"page\":{\"id\":\"y45xqs-v4tsc7-d3onkb-o8oc8f\",\"requestId\":\"5AFSK1C7VNHSD7KRB97Y\",\"meaningful\":\"interactive\",\"url\":\"https://"
		"www.amazon.com/\",\"server\":\"www.amazon.com\",\"path\":\"/\",\"referrer\":\"\",\"title\":\"Amazon.com. Spend less. Smile more.\",\"transitionType\":\"hard\",\"pageType\":\"Gateway\",\"subPageType\":\"desktop\",\"pageTypeId\":\"desktop\"},\"session\":{\"id\":\"133-6658273-5713951\"}}}},{\"data\":{\"messageId\":\"21lom8-6cj3gk-kqmxhn-9leog3\",\"schemaId\":\"csa.Error.6\",\"errorMessage\":\"ameyal-product-shoveler: Image failed to load https://m.media-amazon.com/images/I/71yC2YaA8cL._AC_SY200_.jpg"
		"\",\"attribution\":\"gatewayCardImageError\",\"logLevel\":\"ERROR\",\"url\":\"https://www.amazon.com/\",\"file\":\"https://www.amazon.com/\",\"line\":\"172\",\"column\":null,\"stack\":[\"Error: Image failed to load https://m.media-amazon.com/images/I/71yC2YaA8cL._AC_SY200_.jpg\",\"at HTMLImageElement.d (https://www.amazon.com/:172:209)\"],\"context\":{},\"metadata\":{\"name\":\"Error\",\"csm\":\"v5 ueLogError stack\"},\"timestamp\":\"2024-02-07T12:04:21.688Z\",\"application\":\"Retail:Prod"
		":www.amazon.com\",\"obfuscatedMarketplaceId\":\"ATVPDKIKX0DER\",\"lob\":\"1\",\"producerId\":\"csa\",\"entities\":{\"page\":{\"id\":\"y45xqs-v4tsc7-d3onkb-o8oc8f\",\"requestId\":\"5AFSK1C7VNHSD7KRB97Y\",\"meaningful\":\"interactive\",\"url\":\"https://www.amazon.com/\",\"server\":\"www.amazon.com\",\"path\":\"/\",\"referrer\":\"\",\"title\":\"Amazon.com. Spend less. Smile more.\",\"transitionType\":\"hard\",\"pageType\":\"Gateway\",\"subPageType\":\"desktop\",\"pageTypeId\":\"desktop\"},\"session"
		"\":{\"id\":\"133-6658273-5713951\"}}}},{\"data\":{\"messageId\":\"ds5oy-90dtdk-gjovg5-cqqdf2\",\"schemaId\":\"csa.Error.6\",\"errorMessage\":\"ameyal-product-shoveler: Image failed to load https://m.media-amazon.com/images/I/71yC2YaA8cL._AC_SY200_.jpg\",\"attribution\":\"gatewayCardImageError\",\"logLevel\":\"ERROR\",\"url\":\"https://www.amazon.com/\",\"file\":\"https://www.amazon.com/\",\"line\":\"172\",\"column\":null,\"stack\":[\"Error: Image failed to load https://m.media-amazon.com/images/I/"
		"71yC2YaA8cL._AC_SY200_.jpg\",\"at HTMLImageElement.d (https://www.amazon.com/:172:209)\"],\"context\":{},\"metadata\":{\"name\":\"Error\",\"csm\":\"v5 ueLogError stack\"},\"timestamp\":\"2024-02-07T12:04:21.688Z\",\"application\":\"Retail:Prod:www.amazon.com\",\"obfuscatedMarketplaceId\":\"ATVPDKIKX0DER\",\"lob\":\"1\",\"producerId\":\"csa\",\"entities\":{\"page\":{\"id\":\"y45xqs-v4tsc7-d3onkb-o8oc8f\",\"requestId\":\"5AFSK1C7VNHSD7KRB97Y\",\"meaningful\":\"interactive\",\"url\":\"https://"
		"www.amazon.com/\",\"server\":\"www.amazon.com\",\"path\":\"/\",\"referrer\":\"\",\"title\":\"Amazon.com. Spend less. Smile more.\",\"transitionType\":\"hard\",\"pageType\":\"Gateway\",\"subPageType\":\"desktop\",\"pageTypeId\":\"desktop\"},\"session\":{\"id\":\"133-6658273-5713951\"}}}},{\"data\":{\"messageId\":\"3wfb2p-p793hu-5q9qbi-qkj9r9\",\"schemaId\":\"csa.Error.6\",\"errorMessage\":\"ameyal-product-shoveler: Image failed to load https://m.media-amazon.com/images/I/71yC2YaA8cL._AC_SY200_.jpg"
		"\",\"attribution\":\"gatewayCardImageError\",\"logLevel\":\"ERROR\",\"url\":\"https://www.amazon.com/\",\"file\":\"https://www.amazon.com/\",\"line\":\"172\",\"column\":null,\"stack\":[\"Error: Image failed to load https://m.media-amazon.com/images/I/71yC2YaA8cL._AC_SY200_.jpg\",\"at HTMLImageElement.d (https://www.amazon.com/:172:209)\"],\"context\":{},\"metadata\":{\"name\":\"Error\",\"csm\":\"v5 ueLogError stack\"},\"timestamp\":\"2024-02-07T12:04:21.688Z\",\"application\":\"Retail:Prod"
		":www.amazon.com\",\"obfuscatedMarketplaceId\":\"ATVPDKIKX0DER\",\"lob\":\"1\",\"producerId\":\"csa\",\"entities\":{\"page\":{\"id\":\"y45xqs-v4tsc7-d3onkb-o8oc8f\",\"requestId\":\"5AFSK1C7VNHSD7KRB97Y\",\"meaningful\":\"interactive\",\"url\":\"https://www.amazon.com/\",\"server\":\"www.amazon.com\",\"path\":\"/\",\"referrer\":\"\",\"title\":\"Amazon.com. Spend less. Smile more.\",\"transitionType\":\"hard\",\"pageType\":\"Gateway\",\"subPageType\":\"desktop\",\"pageTypeId\":\"desktop\"},\"session"
		"\":{\"id\":\"133-6658273-5713951\"}}}},{\"data\":{\"messageId\":\"jdyh-ghq9x-kgnhpr-psdfiv\",\"schemaId\":\"csa.Error.6\",\"errorMessage\":\"ameyal-product-shoveler: Image failed to load https://m.media-amazon.com/images/I/71yC2YaA8cL._AC_SY200_.jpg\",\"attribution\":\"gatewayCardImageError\",\"logLevel\":\"ERROR\",\"url\":\"https://www.amazon.com/\",\"file\":\"https://www.amazon.com/\",\"line\":\"172\",\"column\":null,\"stack\":[\"Error: Image failed to load https://m.media-amazon.com/images/I/"
		"71yC2YaA8cL._AC_SY200_.jpg\",\"at HTMLImageElement.d (https://www.amazon.com/:172:209)\"],\"context\":{},\"metadata\":{\"name\":\"Error\",\"csm\":\"v5 ueLogError stack\"},\"timestamp\":\"2024-02-07T12:04:21.688Z\",\"application\":\"Retail:Prod:www.amazon.com\",\"obfuscatedMarketplaceId\":\"ATVPDKIKX0DER\",\"lob\":\"1\",\"producerId\":\"csa\",\"entities\":{\"page\":{\"id\":\"y45xqs-v4tsc7-d3onkb-o8oc8f\",\"requestId\":\"5AFSK1C7VNHSD7KRB97Y\",\"meaningful\":\"interactive\",\"url\":\"https://"
		"www.amazon.com/\",\"server\":\"www.amazon.com\",\"path\":\"/\",\"referrer\":\"\",\"title\":\"Amazon.com. Spend less. Smile more.\",\"transitionType\":\"hard\",\"pageType\":\"Gateway\",\"subPageType\":\"desktop\",\"pageTypeId\":\"desktop\"},\"session\":{\"id\":\"133-6658273-5713951\"}}}},{\"data\":{\"messageId\":\"87r94g-t5q6vm-kz7xj3-8ep20r\",\"schemaId\":\"csa.Error.6\",\"errorMessage\":\"ameyal-product-shoveler: Image failed to load https://m.media-amazon.com/images/I/71yC2YaA8cL._AC_SY200_.jpg"
		"\",\"attribution\":\"gatewayCardImageError\",\"logLevel\":\"ERROR\",\"url\":\"https://www.amazon.com/\",\"file\":\"https://www.amazon.com/\",\"line\":\"172\",\"column\":null,\"stack\":[\"Error: Image failed to load https://m.media-amazon.com/images/I/71yC2YaA8cL._AC_SY200_.jpg\",\"at HTMLImageElement.d (https://www.amazon.com/:172:209)\"],\"context\":{},\"metadata\":{\"name\":\"Error\",\"csm\":\"v5 ueLogError stack\"},\"timestamp\":\"2024-02-07T12:04:21.688Z\",\"application\":\"Retail:Prod"
		":www.amazon.com\",\"obfuscatedMarketplaceId\":\"ATVPDKIKX0DER\",\"lob\":\"1\",\"producerId\":\"csa\",\"entities\":{\"page\":{\"id\":\"y45xqs-v4tsc7-d3onkb-o8oc8f\",\"requestId\":\"5AFSK1C7VNHSD7KRB97Y\",\"meaningful\":\"interactive\",\"url\":\"https://www.amazon.com/\",\"server\":\"www.amazon.com\",\"path\":\"/\",\"referrer\":\"\",\"title\":\"Amazon.com. Spend less. Smile more.\",\"transitionType\":\"hard\",\"pageType\":\"Gateway\",\"subPageType\":\"desktop\",\"pageTypeId\":\"desktop\"},\"session"
		"\":{\"id\":\"133-6658273-5713951\"}}}},{\"data\":{\"messageId\":\"oq5ic9-1ydbi9-chsgez-h5v7sf\",\"schemaId\":\"csa.Error.6\",\"errorMessage\":\"ameyal-product-shoveler: Image failed to load https://m.media-amazon.com/images/I/71+CaUj9EtL._AC_SY200_.jpg\",\"attribution\":\"gatewayCardImageError\",\"logLevel\":\"ERROR\",\"url\":\"https://www.amazon.com/\",\"file\":\"https://www.amazon.com/\",\"line\":\"172\",\"column\":null,\"stack\":[\"Error: Image failed to load https://m.media-amazon.com/images/I"
		"/71+CaUj9EtL._AC_SY200_.jpg\",\"at HTMLImageElement.d (https://www.amazon.com/:172:209)\"],\"context\":{},\"metadata\":{\"name\":\"Error\",\"csm\":\"v5 ueLogError stack\"},\"timestamp\":\"2024-02-07T12:04:21.688Z\",\"application\":\"Retail:Prod:www.amazon.com\",\"obfuscatedMarketplaceId\":\"ATVPDKIKX0DER\",\"lob\":\"1\",\"producerId\":\"csa\",\"entities\":{\"page\":{\"id\":\"y45xqs-v4tsc7-d3onkb-o8oc8f\",\"requestId\":\"5AFSK1C7VNHSD7KRB97Y\",\"meaningful\":\"interactive\",\"url\":\"https://"
		"www.amazon.com/\",\"server\":\"www.amazon.com\",\"path\":\"/\",\"referrer\":\"\",\"title\":\"Amazon.com. Spend less. Smile more.\",\"transitionType\":\"hard\",\"pageType\":\"Gateway\",\"subPageType\":\"desktop\",\"pageTypeId\":\"desktop\"},\"session\":{\"id\":\"133-6658273-5713951\"}}}},{\"data\":{\"messageId\":\"t1i9e6-onbn2-sjbf2v-j5nex1\",\"schemaId\":\"csa.Error.6\",\"errorMessage\":\"ameyal-product-shoveler: Image failed to load https://m.media-amazon.com/images/I/71+CaUj9EtL._AC_SY200_.jpg\""
		",\"attribution\":\"gatewayCardImageError\",\"logLevel\":\"ERROR\",\"url\":\"https://www.amazon.com/\",\"file\":\"https://www.amazon.com/\",\"line\":\"172\",\"column\":null,\"stack\":[\"Error: Image failed to load https://m.media-amazon.com/images/I/71+CaUj9EtL._AC_SY200_.jpg\",\"at HTMLImageElement.d (https://www.amazon.com/:172:209)\"],\"context\":{},\"metadata\":{\"name\":\"Error\",\"csm\":\"v5 ueLogError stack\"},\"timestamp\":\"2024-02-07T12:04:21.689Z\",\"application\":\"Retail:Prod"
		":www.amazon.com\",\"obfuscatedMarketplaceId\":\"ATVPDKIKX0DER\",\"lob\":\"1\",\"producerId\":\"csa\",\"entities\":{\"page\":{\"id\":\"y45xqs-v4tsc7-d3onkb-o8oc8f\",\"requestId\":\"5AFSK1C7VNHSD7KRB97Y\",\"meaningful\":\"interactive\",\"url\":\"https://www.amazon.com/\",\"server\":\"www.amazon.com\",\"path\":\"/\",\"referrer\":\"\",\"title\":\"Amazon.com. Spend less. Smile more.\",\"transitionType\":\"hard\",\"pageType\":\"Gateway\",\"subPageType\":\"desktop\",\"pageTypeId\":\"desktop\"},\"session"
		"\":{\"id\":\"133-6658273-5713951\"}}}},{\"data\":{\"messageId\":\"sgb244-thnvcc-8g53qf-ucrtu4\",\"schemaId\":\"csa.Error.6\",\"errorMessage\":\"ameyal-product-shoveler: Image failed to load https://m.media-amazon.com/images/I/71+CaUj9EtL._AC_SY200_.jpg\",\"attribution\":\"gatewayCardImageError\",\"logLevel\":\"ERROR\",\"url\":\"https://www.amazon.com/\",\"file\":\"https://www.amazon.com/\",\"line\":\"172\",\"column\":null,\"stack\":[\"Error: Image failed to load https://m.media-amazon.com/images/I"
		"/71+CaUj9EtL._AC_SY200_.jpg\",\"at HTMLImageElement.d (https://www.amazon.com/:172:209)\"],\"context\":{},\"metadata\":{\"name\":\"Error\",\"csm\":\"v5 ueLogError stack\"},\"timestamp\":\"2024-02-07T12:04:21.689Z\",\"application\":\"Retail:Prod:www.amazon.com\",\"obfuscatedMarketplaceId\":\"ATVPDKIKX0DER\",\"lob\":\"1\",\"producerId\":\"csa\",\"entities\":{\"page\":{\"id\":\"y45xqs-v4tsc7-d3onkb-o8oc8f\",\"requestId\":\"5AFSK1C7VNHSD7KRB97Y\",\"meaningful\":\"interactive\",\"url\":\"https://"
		"www.amazon.com/\",\"server\":\"www.amazon.com\",\"path\":\"/\",\"referrer\":\"\",\"title\":\"Amazon.com. Spend less. Smile more.\",\"transitionType\":\"hard\",\"pageType\":\"Gateway\",\"subPageType\":\"desktop\",\"pageTypeId\":\"desktop\"},\"session\":{\"id\":\"133-6658273-5713951\"}}}},{\"data\":{\"messageId\":\"d7rqrq-l51rfj-59dli7-f7md3j\",\"schemaId\":\"csa.Error.6\",\"errorMessage\":\"ameyal-product-shoveler: Image failed to load https://m.media-amazon.com/images/I/71+CaUj9EtL._AC_SY200_.jpg"
		"\",\"attribution\":\"gatewayCardImageError\",\"logLevel\":\"ERROR\",\"url\":\"https://www.amazon.com/\",\"file\":\"https://www.amazon.com/\",\"line\":\"172\",\"column\":null,\"stack\":[\"Error: Image failed to load https://m.media-amazon.com/images/I/71+CaUj9EtL._AC_SY200_.jpg\",\"at HTMLImageElement.d (https://www.amazon.com/:172:209)\"],\"context\":{},\"metadata\":{\"name\":\"Error\",\"csm\":\"v5 ueLogError stack\"},\"timestamp\":\"2024-02-07T12:04:21.689Z\",\"application\":\"Retail:Prod"
		":www.amazon.com\",\"obfuscatedMarketplaceId\":\"ATVPDKIKX0DER\",\"lob\":\"1\",\"producerId\":\"csa\",\"entities\":{\"page\":{\"id\":\"y45xqs-v4tsc7-d3onkb-o8oc8f\",\"requestId\":\"5AFSK1C7VNHSD7KRB97Y\",\"meaningful\":\"interactive\",\"url\":\"https://www.amazon.com/\",\"server\":\"www.amazon.com\",\"path\":\"/\",\"referrer\":\"\",\"title\":\"Amazon.com. Spend less. Smile more.\",\"transitionType\":\"hard\",\"pageType\":\"Gateway\",\"subPageType\":\"desktop\",\"pageTypeId\":\"desktop\"},\"session"
		"\":{\"id\":\"133-6658273-5713951\"}}}},{\"data\":{\"messageId\":\"db6g2y-19ug1w-4r0ebv-krw9fk\",\"schemaId\":\"csa.Error.6\",\"errorMessage\":\"ameyal-product-shoveler: Image failed to load https://m.media-amazon.com/images/I/71+CaUj9EtL._AC_SY200_.jpg\",\"attribution\":\"gatewayCardImageError\",\"logLevel\":\"ERROR\",\"url\":\"https://www.amazon.com/\",\"file\":\"https://www.amazon.com/\",\"line\":\"172\",\"column\":null,\"stack\":[\"Error: Image failed to load https://m.media-amazon.com/images/I"
		"/71+CaUj9EtL._AC_SY200_.jpg\",\"at HTMLImageElement.d (https://www.amazon.com/:172:209)\"],\"context\":{},\"metadata\":{\"name\":\"Error\",\"csm\":\"v5 ueLogError stack\"},\"timestamp\":\"2024-02-07T12:04:21.689Z\",\"application\":\"Retail:Prod:www.amazon.com\",\"obfuscatedMarketplaceId\":\"ATVPDKIKX0DER\",\"lob\":\"1\",\"producerId\":\"csa\",\"entities\":{\"page\":{\"id\":\"y45xqs-v4tsc7-d3onkb-o8oc8f\",\"requestId\":\"5AFSK1C7VNHSD7KRB97Y\",\"meaningful\":\"interactive\",\"url\":\"https://"
		"www.amazon.com/\",\"server\":\"www.amazon.com\",\"path\":\"/\",\"referrer\":\"\",\"title\":\"Amazon.com. Spend less. Smile more.\",\"transitionType\":\"hard\",\"pageType\":\"Gateway\",\"subPageType\":\"desktop\",\"pageTypeId\":\"desktop\"},\"session\":{\"id\":\"133-6658273-5713951\"}}}},{\"data\":{\"messageId\":\"6go31k-emy76a-fbng0o-j7k0ac\",\"schemaId\":\"csa.Error.6\",\"errorMessage\":\"ameyal-product-shoveler: Image failed to load https://m.media-amazon.com/images/I/71+CaUj9EtL._AC_SY200_.jpg"
		"\",\"attribution\":\"gatewayCardImageError\",\"logLevel\":\"ERROR\",\"url\":\"https://www.amazon.com/\",\"file\":\"https://www.amazon.com/\",\"line\":\"172\",\"column\":null,\"stack\":[\"Error: Image failed to load https://m.media-amazon.com/images/I/71+CaUj9EtL._AC_SY200_.jpg\",\"at HTMLImageElement.d (https://www.amazon.com/:172:209)\"],\"context\":{},\"metadata\":{\"name\":\"Error\",\"csm\":\"v5 ueLogError stack\"},\"timestamp\":\"2024-02-07T12:04:21.689Z\",\"application\":\"Retail:Prod"
		":www.amazon.com\",\"obfuscatedMarketplaceId\":\"ATVPDKIKX0DER\",\"lob\":\"1\",\"producerId\":\"csa\",\"entities\":{\"page\":{\"id\":\"y45xqs-v4tsc7-d3onkb-o8oc8f\",\"requestId\":\"5AFSK1C7VNHSD7KRB97Y\",\"meaningful\":\"interactive\",\"url\":\"https://www.amazon.com/\",\"server\":\"www.amazon.com\",\"path\":\"/\",\"referrer\":\"\",\"title\":\"Amazon.com. Spend less. Smile more.\",\"transitionType\":\"hard\",\"pageType\":\"Gateway\",\"subPageType\":\"desktop\",\"pageTypeId\":\"desktop\"},\"session"
		"\":{\"id\":\"133-6658273-5713951\"}}}},{\"data\":{\"messageId\":\"j7qhz-pg38w0-ri2mwi-76jk1w\",\"schemaId\":\"csa.Error.6\",\"errorMessage\":\"ameyal-product-shoveler: Image failed to load https://m.media-amazon.com/images/I/71+CaUj9EtL._AC_SY200_.jpg\",\"attribution\":\"gatewayCardImageError\",\"logLevel\":\"ERROR\",\"url\":\"https://www.amazon.com/\",\"file\":\"https://www.amazon.com/\",\"line\":\"172\",\"column\":null,\"stack\":[\"Error: Image failed to load https://m.media-amazon.com/images/I/"
		"71+CaUj9EtL._AC_SY200_.jpg\",\"at HTMLImageElement.d (https://www.amazon.com/:172:209)\"],\"context\":{},\"metadata\":{\"name\":\"Error\",\"csm\":\"v5 ueLogError stack\"},\"timestamp\":\"2024-02-07T12:04:21.689Z\",\"application\":\"Retail:Prod:www.amazon.com\",\"obfuscatedMarketplaceId\":\"ATVPDKIKX0DER\",\"lob\":\"1\",\"producerId\":\"csa\",\"entities\":{\"page\":{\"id\":\"y45xqs-v4tsc7-d3onkb-o8oc8f\",\"requestId\":\"5AFSK1C7VNHSD7KRB97Y\",\"meaningful\":\"interactive\",\"url\":\"https://"
		"www.amazon.com/\",\"server\":\"www.amazon.com\",\"path\":\"/\",\"referrer\":\"\",\"title\":\"Amazon.com. Spend less. Smile more.\",\"transitionType\":\"hard\",\"pageType\":\"Gateway\",\"subPageType\":\"desktop\",\"pageTypeId\":\"desktop\"},\"session\":{\"id\":\"133-6658273-5713951\"}}}},{\"data\":{\"messageId\":\"hc5w1k-7vq83b-tistbi-qetvte\",\"schemaId\":\"csa.Error.6\",\"errorMessage\":\"deals-shoveler-v2: Image failed to load https://m.media-amazon.com/images/I/51EhkT3Ae8L._AC_SY200_.jpg\",\""
		"attribution\":\"gatewayCardImageError\",\"logLevel\":\"ERROR\",\"url\":\"https://www.amazon.com/\",\"file\":\"https://www.amazon.com/\",\"line\":\"172\",\"column\":null,\"stack\":[\"Error: Image failed to load https://m.media-amazon.com/images/I/51EhkT3Ae8L._AC_SY200_.jpg\",\"at HTMLImageElement.d (https://www.amazon.com/:172:209)\"],\"context\":{},\"metadata\":{\"name\":\"Error\",\"csm\":\"v5 ueLogError stack\"},\"timestamp\":\"2024-02-07T12:04:21.689Z\",\"application\":\"Retail:Prod"
		":www.amazon.com\",\"obfuscatedMarketplaceId\":\"ATVPDKIKX0DER\",\"lob\":\"1\",\"producerId\":\"csa\",\"entities\":{\"page\":{\"id\":\"y45xqs-v4tsc7-d3onkb-o8oc8f\",\"requestId\":\"5AFSK1C7VNHSD7KRB97Y\",\"meaningful\":\"interactive\",\"url\":\"https://www.amazon.com/\",\"server\":\"www.amazon.com\",\"path\":\"/\",\"referrer\":\"\",\"title\":\"Amazon.com. Spend less. Smile more.\",\"transitionType\":\"hard\",\"pageType\":\"Gateway\",\"subPageType\":\"desktop\",\"pageTypeId\":\"desktop\"},\"session"
		"\":{\"id\":\"133-6658273-5713951\"}}}},{\"data\":{\"messageId\":\"u6wl2s-o3x7w5-ay9zut-bxeaba\",\"schemaId\":\"csa.Error.6\",\"errorMessage\":\"deals-shoveler-v2: Image failed to load https://m.media-amazon.com/images/I/51EhkT3Ae8L._AC_SY200_.jpg\",\"attribution\":\"gatewayCardImageError\",\"logLevel\":\"ERROR\",\"url\":\"https://www.amazon.com/\",\"file\":\"https://www.amazon.com/\",\"line\":\"172\",\"column\":null,\"stack\":[\"Error: Image failed to load https://m.media-amazon.com/images/I/"
		"51EhkT3Ae8L._AC_SY200_.jpg\",\"at HTMLImageElement.d (https://www.amazon.com/:172:209)\"],\"context\":{},\"metadata\":{\"name\":\"Error\",\"csm\":\"v5 ueLogError stack\"},\"timestamp\":\"2024-02-07T12:04:21.689Z\",\"application\":\"Retail:Prod:www.amazon.com\",\"obfuscatedMarketplaceId\":\"ATVPDKIKX0DER\",\"lob\":\"1\",\"producerId\":\"csa\",\"entities\":{\"page\":{\"id\":\"y45xqs-v4tsc7-d3onkb-o8oc8f\",\"requestId\":\"5AFSK1C7VNHSD7KRB97Y\",\"meaningful\":\"interactive\",\"url\":\"https://"
		"www.amazon.com/\",\"server\":\"www.amazon.com\",\"path\":\"/\",\"referrer\":\"\",\"title\":\"Amazon.com. Spend less. Smile more.\",\"transitionType\":\"hard\",\"pageType\":\"Gateway\",\"subPageType\":\"desktop\",\"pageTypeId\":\"desktop\"},\"session\":{\"id\":\"133-6658273-5713951\"}}}},{\"data\":{\"messageId\":\"93l6cc-fqoko-ny9gr5-3extbt\",\"schemaId\":\"csa.Error.6\",\"errorMessage\":\"deals-shoveler-v2: Image failed to load https://m.media-amazon.com/images/I/51EhkT3Ae8L._AC_SY200_.jpg\",\""
		"attribution\":\"gatewayCardImageError\",\"logLevel\":\"ERROR\",\"url\":\"https://www.amazon.com/\",\"file\":\"https://www.amazon.com/\",\"line\":\"172\",\"column\":null,\"stack\":[\"Error: Image failed to load https://m.media-amazon.com/images/I/51EhkT3Ae8L._AC_SY200_.jpg\",\"at HTMLImageElement.d (https://www.amazon.com/:172:209)\"],\"context\":{},\"metadata\":{\"name\":\"Error\",\"csm\":\"v5 ueLogError stack\"},\"timestamp\":\"2024-02-07T12:04:21.690Z\",\"application\":\"Retail:Prod"
		":www.amazon.com\",\"obfuscatedMarketplaceId\":\"ATVPDKIKX0DER\",\"lob\":\"1\",\"producerId\":\"csa\",\"entities\":{\"page\":{\"id\":\"y45xqs-v4tsc7-d3onkb-o8oc8f\",\"requestId\":\"5AFSK1C7VNHSD7KRB97Y\",\"meaningful\":\"interactive\",\"url\":\"https://www.amazon.com/\",\"server\":\"www.amazon.com\",\"path\":\"/\",\"referrer\":\"\",\"title\":\"Amazon.com. Spend less. Smile more.\",\"transitionType\":\"hard\",\"pageType\":\"Gateway\",\"subPageType\":\"desktop\",\"pageTypeId\":\"desktop\"},\"session"
		"\":{\"id\":\"133-6658273-5713951\"}}}},{\"data\":{\"messageId\":\"xqc0jc-z56rxm-b6wbds-nllgjb\",\"schemaId\":\"csa.Error.6\",\"errorMessage\":\"deals-shoveler-v2: Image failed to load https://m.media-amazon.com/images/I/51EhkT3Ae8L._AC_SY200_.jpg\",\"attribution\":\"gatewayCardImageError\",\"logLevel\":\"ERROR\",\"url\":\"https://www.amazon.com/\",\"file\":\"https://www.amazon.com/\",\"line\":\"172\",\"column\":null,\"stack\":[\"Error: Image failed to load https://m.media-amazon.com/images/I/"
		"51EhkT3Ae8L._AC_SY200_.jpg\",\"at HTMLImageElement.d (https://www.amazon.com/:172:209)\"],\"context\":{},\"metadata\":{\"name\":\"Error\",\"csm\":\"v5 ueLogError stack\"},\"timestamp\":\"2024-02-07T12:04:21.690Z\",\"application\":\"Retail:Prod:www.amazon.com\",\"obfuscatedMarketplaceId\":\"ATVPDKIKX0DER\",\"lob\":\"1\",\"producerId\":\"csa\",\"entities\":{\"page\":{\"id\":\"y45xqs-v4tsc7-d3onkb-o8oc8f\",\"requestId\":\"5AFSK1C7VNHSD7KRB97Y\",\"meaningful\":\"interactive\",\"url\":\"https://"
		"www.amazon.com/\",\"server\":\"www.amazon.com\",\"path\":\"/\",\"referrer\":\"\",\"title\":\"Amazon.com. Spend less. Smile more.\",\"transitionType\":\"hard\",\"pageType\":\"Gateway\",\"subPageType\":\"desktop\",\"pageTypeId\":\"desktop\"},\"session\":{\"id\":\"133-6658273-5713951\"}}}},{\"data\":{\"messageId\":\"185alu-cabqws-kzgw45-ilkl45\",\"schemaId\":\"csa.Error.6\",\"errorMessage\":\"deals-shoveler-v2: Image failed to load https://m.media-amazon.com/images/I/51EhkT3Ae8L._AC_SY200_.jpg\",\""
		"attribution\":\"gatewayCardImageError\",\"logLevel\":\"ERROR\",\"url\":\"https://www.amazon.com/\",\"file\":\"https://www.amazon.com/\",\"line\":\"172\",\"column\":null,\"stack\":[\"Error: Image failed to load https://m.media-amazon.com/images/I/51EhkT3Ae8L._AC_SY200_.jpg\",\"at HTMLImageElement.d (https://www.amazon.com/:172:209)\"],\"context\":{},\"metadata\":{\"name\":\"Error\",\"csm\":\"v5 ueLogError stack\"},\"timestamp\":\"2024-02-07T12:04:21.690Z\",\"application\":\"Retail:Prod"
		":www.amazon.com\",\"obfuscatedMarketplaceId\":\"ATVPDKIKX0DER\",\"lob\":\"1\",\"producerId\":\"csa\",\"entities\":{\"page\":{\"id\":\"y45xqs-v4tsc7-d3onkb-o8oc8f\",\"requestId\":\"5AFSK1C7VNHSD7KRB97Y\",\"meaningful\":\"interactive\",\"url\":\"https://www.amazon.com/\",\"server\":\"www.amazon.com\",\"path\":\"/\",\"referrer\":\"\",\"title\":\"Amazon.com. Spend less. Smile more.\",\"transitionType\":\"hard\",\"pageType\":\"Gateway\",\"subPageType\":\"desktop\",\"pageTypeId\":\"desktop\"},\"session"
		"\":{\"id\":\"133-6658273-5713951\"}}}},{\"data\":{\"messageId\":\"e667av-go23yx-segtv2-cm6ei8\",\"schemaId\":\"csa.Error.6\",\"errorMessage\":\"deals-shoveler-v2: Image failed to load https://m.media-amazon.com/images/I/51EhkT3Ae8L._AC_SY200_.jpg\",\"attribution\":\"gatewayCardImageError\",\"logLevel\":\"ERROR\",\"url\":\"https://www.amazon.com/\",\"file\":\"https://www.amazon.com/\",\"line\":\"172\",\"column\":null,\"stack\":[\"Error: Image failed to load https://m.media-amazon.com/images/I/"
		"51EhkT3Ae8L._AC_SY200_.jpg\",\"at HTMLImageElement.d (https://www.amazon.com/:172:209)\"],\"context\":{},\"metadata\":{\"name\":\"Error\",\"csm\":\"v5 ueLogError stack\"},\"timestamp\":\"2024-02-07T12:04:21.690Z\",\"application\":\"Retail:Prod:www.amazon.com\",\"obfuscatedMarketplaceId\":\"ATVPDKIKX0DER\",\"lob\":\"1\",\"producerId\":\"csa\",\"entities\":{\"page\":{\"id\":\"y45xqs-v4tsc7-d3onkb-o8oc8f\",\"requestId\":\"5AFSK1C7VNHSD7KRB97Y\",\"meaningful\":\"interactive\",\"url\":\"https://"
		"www.amazon.com/\",\"server\":\"www.amazon.com\",\"path\":\"/\",\"referrer\":\"\",\"title\":\"Amazon.com. Spend less. Smile more.\",\"transitionType\":\"hard\",\"pageType\":\"Gateway\",\"subPageType\":\"desktop\",\"pageTypeId\":\"desktop\"},\"session\":{\"id\":\"133-6658273-5713951\"}}}},{\"data\":{\"messageId\":\"s5d74s-l2e96f-uerz45-uhwgwm\",\"schemaId\":\"csa.Error.6\",\"errorMessage\":\"deals-shoveler-v2: Image failed to load https://m.media-amazon.com/images/I/51EhkT3Ae8L._AC_SY200_.jpg\",\""
		"attribution\":\"gatewayCardImageError\",\"logLevel\":\"ERROR\",\"url\":\"https://www.amazon.com/\",\"file\":\"https://www.amazon.com/\",\"line\":\"172\",\"column\":null,\"stack\":[\"Error: Image failed to load https://m.media-amazon.com/images/I/51EhkT3Ae8L._AC_SY200_.jpg\",\"at HTMLImageElement.d (https://www.amazon.com/:172:209)\"],\"context\":{},\"metadata\":{\"name\":\"Error\",\"csm\":\"v5 ueLogError stack\"},\"timestamp\":\"2024-02-07T12:04:21.690Z\",\"application\":\"Retail:Prod"
		":www.amazon.com\",\"obfuscatedMarketplaceId\":\"ATVPDKIKX0DER\",\"lob\":\"1\",\"producerId\":\"csa\",\"entities\":{\"page\":{\"id\":\"y45xqs-v4tsc7-d3onkb-o8oc8f\",\"requestId\":\"5AFSK1C7VNHSD7KRB97Y\",\"meaningful\":\"interactive\",\"url\":\"https://www.amazon.com/\",\"server\":\"www.amazon.com\",\"path\":\"/\",\"referrer\":\"\",\"title\":\"Amazon.com. Spend less. Smile more.\",\"transitionType\":\"hard\",\"pageType\":\"Gateway\",\"subPageType\":\"desktop\",\"pageTypeId\":\"desktop\"},\"session"
		"\":{\"id\":\"133-6658273-5713951\"}}}},{\"data\":{\"messageId\":\"ptmhfe-1lw9d8-a8h4w9-hdmfr2\",\"schemaId\":\"csa.Error.6\",\"errorMessage\":\"ameyal-product-shoveler: Image failed to load https://m.media-amazon.com/images/I/61POocZniqL._AC_SY200_.jpg\",\"attribution\":\"gatewayCardImageError\",\"logLevel\":\"ERROR\",\"url\":\"https://www.amazon.com/\",\"file\":\"https://www.amazon.com/\",\"line\":\"172\",\"column\":null,\"stack\":[\"Error: Image failed to load https://m.media-amazon.com/images/I"
		"/61POocZniqL._AC_SY200_.jpg\",\"at HTMLImageElement.d (https://www.amazon.com/:172:209)\"],\"context\":{},\"metadata\":{\"name\":\"Error\",\"csm\":\"v5 ueLogError stack\"},\"timestamp\":\"2024-02-07T12:04:21.690Z\",\"application\":\"Retail:Prod:www.amazon.com\",\"obfuscatedMarketplaceId\":\"ATVPDKIKX0DER\",\"lob\":\"1\",\"producerId\":\"csa\",\"entities\":{\"page\":{\"id\":\"y45xqs-v4tsc7-d3onkb-o8oc8f\",\"requestId\":\"5AFSK1C7VNHSD7KRB97Y\",\"meaningful\":\"interactive\",\"url\":\"https://"
		"www.amazon.com/\",\"server\":\"www.amazon.com\",\"path\":\"/\",\"referrer\":\"\",\"title\":\"Amazon.com. Spend less. Smile more.\",\"transitionType\":\"hard\",\"pageType\":\"Gateway\",\"subPageType\":\"desktop\",\"pageTypeId\":\"desktop\"},\"session\":{\"id\":\"133-6658273-5713951\"}}}},{\"data\":{\"messageId\":\"w39vl7-ev994-arqx0n-l0y57c\",\"schemaId\":\"csa.Error.6\",\"errorMessage\":\"ameyal-product-shoveler: Image failed to load https://m.media-amazon.com/images/I/61POocZniqL._AC_SY200_.jpg\""
		",\"attribution\":\"gatewayCardImageError\",\"logLevel\":\"ERROR\",\"url\":\"https://www.amazon.com/\",\"file\":\"https://www.amazon.com/\",\"line\":\"172\",\"column\":null,\"stack\":[\"Error: Image failed to load https://m.media-amazon.com/images/I/61POocZniqL._AC_SY200_.jpg\",\"at HTMLImageElement.d (https://www.amazon.com/:172:209)\"],\"context\":{},\"metadata\":{\"name\":\"Error\",\"csm\":\"v5 ueLogError stack\"},\"timestamp\":\"2024-02-07T12:04:21.690Z\",\"application\":\"Retail:Prod"
		":www.amazon.com\",\"obfuscatedMarketplaceId\":\"ATVPDKIKX0DER\",\"lob\":\"1\",\"producerId\":\"csa\",\"entities\":{\"page\":{\"id\":\"y45xqs-v4tsc7-d3onkb-o8oc8f\",\"requestId\":\"5AFSK1C7VNHSD7KRB97Y\",\"meaningful\":\"interactive\",\"url\":\"https://www.amazon.com/\",\"server\":\"www.amazon.com\",\"path\":\"/\",\"referrer\":\"\",\"title\":\"Amazon.com. Spend less. Smile more.\",\"transitionType\":\"hard\",\"pageType\":\"Gateway\",\"subPageType\":\"desktop\",\"pageTypeId\":\"desktop\"},\"session"
		"\":{\"id\":\"133-6658273-5713951\"}}}},{\"data\":{\"messageId\":\"kbwpxm-3l57tv-wnl5en-fl8was\",\"schemaId\":\"csa.Error.6\",\"errorMessage\":\"ameyal-product-shoveler: Image failed to load https://m.media-amazon.com/images/I/61POocZniqL._AC_SY200_.jpg\",\"attribution\":\"gatewayCardImageError\",\"logLevel\":\"ERROR\",\"url\":\"https://www.amazon.com/\",\"file\":\"https://www.amazon.com/\",\"line\":\"172\",\"column\":null,\"stack\":[\"Error: Image failed to load https://m.media-amazon.com/images/I"
		"/61POocZniqL._AC_SY200_.jpg\",\"at HTMLImageElement.d (https://www.amazon.com/:172:209)\"],\"context\":{},\"metadata\":{\"name\":\"Error\",\"csm\":\"v5 ueLogError stack\"},\"timestamp\":\"2024-02-07T12:04:21.691Z\",\"application\":\"Retail:Prod:www.amazon.com\",\"obfuscatedMarketplaceId\":\"ATVPDKIKX0DER\",\"lob\":\"1\",\"producerId\":\"csa\",\"entities\":{\"page\":{\"id\":\"y45xqs-v4tsc7-d3onkb-o8oc8f\",\"requestId\":\"5AFSK1C7VNHSD7KRB97Y\",\"meaningful\":\"interactive\",\"url\":\"https://"
		"www.amazon.com/\",\"server\":\"www.amazon.com\",\"path\":\"/\",\"referrer\":\"\",\"title\":\"Amazon.com. Spend less. Smile more.\",\"transitionType\":\"hard\",\"pageType\":\"Gateway\",\"subPageType\":\"desktop\",\"pageTypeId\":\"desktop\"},\"session\":{\"id\":\"133-6658273-5713951\"}}}},{\"data\":{\"messageId\":\"4fqo3g-ry49t2-100pwu-9rex6x\",\"schemaId\":\"csa.Error.6\",\"errorMessage\":\"ameyal-product-shoveler: Image failed to load https://m.media-amazon.com/images/I/61POocZniqL._AC_SY200_.jpg"
		"\",\"attribution\":\"gatewayCardImageError\",\"logLevel\":\"ERROR\",\"url\":\"https://www.amazon.com/\",\"file\":\"https://www.amazon.com/\",\"line\":\"172\",\"column\":null,\"stack\":[\"Error: Image failed to load https://m.media-amazon.com/images/I/61POocZniqL._AC_SY200_.jpg\",\"at HTMLImageElement.d (https://www.amazon.com/:172:209)\"],\"context\":{},\"metadata\":{\"name\":\"Error\",\"csm\":\"v5 ueLogError stack\"},\"timestamp\":\"2024-02-07T12:04:21.691Z\",\"application\":\"Retail:Prod"
		":www.amazon.com\",\"obfuscatedMarketplaceId\":\"ATVPDKIKX0DER\",\"lob\":\"1\",\"producerId\":\"csa\",\"entities\":{\"page\":{\"id\":\"y45xqs-v4tsc7-d3onkb-o8oc8f\",\"requestId\":\"5AFSK1C7VNHSD7KRB97Y\",\"meaningful\":\"interactive\",\"url\":\"https://www.amazon.com/\",\"server\":\"www.amazon.com\",\"path\":\"/\",\"referrer\":\"\",\"title\":\"Amazon.com. Spend less. Smile more.\",\"transitionType\":\"hard\",\"pageType\":\"Gateway\",\"subPageType\":\"desktop\",\"pageTypeId\":\"desktop\"},\"session"
		"\":{\"id\":\"133-6658273-5713951\"}}}},{\"data\":{\"messageId\":\"icdv7e-t0jeum-c4l4vz-a5a66n\",\"schemaId\":\"csa.Error.6\",\"errorMessage\":\"ameyal-product-shoveler: Image failed to load https://m.media-amazon.com/images/I/61POocZniqL._AC_SY200_.jpg\",\"attribution\":\"gatewayCardImageError\",\"logLevel\":\"ERROR\",\"url\":\"https://www.amazon.com/\",\"file\":\"https://www.amazon.com/\",\"line\":\"172\",\"column\":null,\"stack\":[\"Error: Image failed to load https://m.media-amazon.com/images/I"
		"/61POocZniqL._AC_SY200_.jpg\",\"at HTMLImageElement.d (https://www.amazon.com/:172:209)\"],\"context\":{},\"metadata\":{\"name\":\"Error\",\"csm\":\"v5 ueLogError stack\"},\"timestamp\":\"2024-02-07T12:04:21.691Z\",\"application\":\"Retail:Prod:www.amazon.com\",\"obfuscatedMarketplaceId\":\"ATVPDKIKX0DER\",\"lob\":\"1\",\"producerId\":\"csa\",\"entities\":{\"page\":{\"id\":\"y45xqs-v4tsc7-d3onkb-o8oc8f\",\"requestId\":\"5AFSK1C7VNHSD7KRB97Y\",\"meaningful\":\"interactive\",\"url\":\"https://"
		"www.amazon.com/\",\"server\":\"www.amazon.com\",\"path\":\"/\",\"referrer\":\"\",\"title\":\"Amazon.com. Spend less. Smile more.\",\"transitionType\":\"hard\",\"pageType\":\"Gateway\",\"subPageType\":\"desktop\",\"pageTypeId\":\"desktop\"},\"session\":{\"id\":\"133-6658273-5713951\"}}}},{\"data\":{\"messageId\":\"qdeqn3-6k3il4-vvi99w-r2eux5\",\"schemaId\":\"csa.Error.6\",\"errorMessage\":\"ameyal-product-shoveler: Image failed to load https://m.media-amazon.com/images/I/61POocZniqL._AC_SY200_.jpg"
		"\",\"attribution\":\"gatewayCardImageError\",\"logLevel\":\"ERROR\",\"url\":\"https://www.amazon.com/\",\"file\":\"https://www.amazon.com/\",\"line\":\"172\",\"column\":null,\"stack\":[\"Error: Image failed to load https://m.media-amazon.com/images/I/61POocZniqL._AC_SY200_.jpg\",\"at HTMLImageElement.d (https://www.amazon.com/:172:209)\"],\"context\":{},\"metadata\":{\"name\":\"Error\",\"csm\":\"v5 ueLogError stack\"},\"timestamp\":\"2024-02-07T12:04:21.691Z\",\"application\":\"Retail:Prod"
		":www.amazon.com\",\"obfuscatedMarketplaceId\":\"ATVPDKIKX0DER\",\"lob\":\"1\",\"producerId\":\"csa\",\"entities\":{\"page\":{\"id\":\"y45xqs-v4tsc7-d3onkb-o8oc8f\",\"requestId\":\"5AFSK1C7VNHSD7KRB97Y\",\"meaningful\":\"interactive\",\"url\":\"https://www.amazon.com/\",\"server\":\"www.amazon.com\",\"path\":\"/\",\"referrer\":\"\",\"title\":\"Amazon.com. Spend less. Smile more.\",\"transitionType\":\"hard\",\"pageType\":\"Gateway\",\"subPageType\":\"desktop\",\"pageTypeId\":\"desktop\"},\"session"
		"\":{\"id\":\"133-6658273-5713951\"}}}},{\"data\":{\"messageId\":\"udvful-t71c5o-n547db-bqfwtb\",\"schemaId\":\"csa.Error.6\",\"errorMessage\":\"ameyal-product-shoveler: Image failed to load https://m.media-amazon.com/images/I/61POocZniqL._AC_SY200_.jpg\",\"attribution\":\"gatewayCardImageError\",\"logLevel\":\"ERROR\",\"url\":\"https://www.amazon.com/\",\"file\":\"https://www.amazon.com/\",\"line\":\"172\",\"column\":null,\"stack\":[\"Error: Image failed to load https://m.media-amazon.com/images/I"
		"/61POocZniqL._AC_SY200_.jpg\",\"at HTMLImageElement.d (https://www.amazon.com/:172:209)\"],\"context\":{},\"metadata\":{\"name\":\"Error\",\"csm\":\"v5 ueLogError stack\"},\"timestamp\":\"2024-02-07T12:04:21.691Z\",\"application\":\"Retail:Prod:www.amazon.com\",\"obfuscatedMarketplaceId\":\"ATVPDKIKX0DER\",\"lob\":\"1\",\"producerId\":\"csa\",\"entities\":{\"page\":{\"id\":\"y45xqs-v4tsc7-d3onkb-o8oc8f\",\"requestId\":\"5AFSK1C7VNHSD7KRB97Y\",\"meaningful\":\"interactive\",\"url\":\"https://"
		"www.amazon.com/\",\"server\":\"www.amazon.com\",\"path\":\"/\",\"referrer\":\"\",\"title\":\"Amazon.com. Spend less. Smile more.\",\"transitionType\":\"hard\",\"pageType\":\"Gateway\",\"subPageType\":\"desktop\",\"pageTypeId\":\"desktop\"},\"session\":{\"id\":\"133-6658273-5713951\"}}}},{\"data\":{\"messageId\":\"odz61r-hdswop-u94sfs-3j6jwh\",\"schemaId\":\"csa.Error.6\",\"errorMessage\":\"ameyal-product-shoveler: Image failed to load https://m.media-amazon.com/images/I/71cSLFE39zL._AC_SY200_.jpg"
		"\",\"attribution\":\"gatewayCardImageError\",\"logLevel\":\"ERROR\",\"url\":\"https://www.amazon.com/\",\"file\":\"https://www.amazon.com/\",\"line\":\"172\",\"column\":null,\"stack\":[\"Error: Image failed to load https://m.media-amazon.com/images/I/71cSLFE39zL._AC_SY200_.jpg\",\"at HTMLImageElement.d (https://www.amazon.com/:172:209)\"],\"context\":{},\"metadata\":{\"name\":\"Error\",\"csm\":\"v5 ueLogError stack\"},\"timestamp\":\"2024-02-07T12:04:21.691Z\",\"application\":\"Retail:Prod"
		":www.amazon.com\",\"obfuscatedMarketplaceId\":\"ATVPDKIKX0DER\",\"lob\":\"1\",\"producerId\":\"csa\",\"entities\":{\"page\":{\"id\":\"y45xqs-v4tsc7-d3onkb-o8oc8f\",\"requestId\":\"5AFSK1C7VNHSD7KRB97Y\",\"meaningful\":\"interactive\",\"url\":\"https://www.amazon.com/\",\"server\":\"www.amazon.com\",\"path\":\"/\",\"referrer\":\"\",\"title\":\"Amazon.com. Spend less. Smile more.\",\"transitionType\":\"hard\",\"pageType\":\"Gateway\",\"subPageType\":\"desktop\",\"pageTypeId\":\"desktop\"},\"session"
		"\":{\"id\":\"133-6658273-5713951\"}}}},{\"data\":{\"messageId\":\"xucuku-4h87gs-irym5m-uhpkzo\",\"schemaId\":\"csa.Error.6\",\"errorMessage\":\"ameyal-product-shoveler: Image failed to load https://m.media-amazon.com/images/I/71cSLFE39zL._AC_SY200_.jpg\",\"attribution\":\"gatewayCardImageError\",\"logLevel\":\"ERROR\",\"url\":\"https://www.amazon.com/\",\"file\":\"https://www.amazon.com/\",\"line\":\"172\",\"column\":null,\"stack\":[\"Error: Image failed to load https://m.media-amazon.com/images/I"
		"/71cSLFE39zL._AC_SY200_.jpg\",\"at HTMLImageElement.d (https://www.amazon.com/:172:209)\"],\"context\":{},\"metadata\":{\"name\":\"Error\",\"csm\":\"v5 ueLogError stack\"},\"timestamp\":\"2024-02-07T12:04:21.691Z\",\"application\":\"Retail:Prod:www.amazon.com\",\"obfuscatedMarketplaceId\":\"ATVPDKIKX0DER\",\"lob\":\"1\",\"producerId\":\"csa\",\"entities\":{\"page\":{\"id\":\"y45xqs-v4tsc7-d3onkb-o8oc8f\",\"requestId\":\"5AFSK1C7VNHSD7KRB97Y\",\"meaningful\":\"interactive\",\"url\":\"https://"
		"www.amazon.com/\",\"server\":\"www.amazon.com\",\"path\":\"/\",\"referrer\":\"\",\"title\":\"Amazon.com. Spend less. Smile more.\",\"transitionType\":\"hard\",\"pageType\":\"Gateway\",\"subPageType\":\"desktop\",\"pageTypeId\":\"desktop\"},\"session\":{\"id\":\"133-6658273-5713951\"}}}},{\"data\":{\"messageId\":\"74qj67-o1xfw9-fgqrch-ydvghh\",\"schemaId\":\"csa.Error.6\",\"errorMessage\":\"ameyal-product-shoveler: Image failed to load https://m.media-amazon.com/images/I/71cSLFE39zL._AC_SY200_.jpg"
		"\",\"attribution\":\"gatewayCardImageError\",\"logLevel\":\"ERROR\",\"url\":\"https://www.amazon.com/\",\"file\":\"https://www.amazon.com/\",\"line\":\"172\",\"column\":null,\"stack\":[\"Error: Image failed to load https://m.media-amazon.com/images/I/71cSLFE39zL._AC_SY200_.jpg\",\"at HTMLImageElement.d (https://www.amazon.com/:172:209)\"],\"context\":{},\"metadata\":{\"name\":\"Error\",\"csm\":\"v5 ueLogError stack\"},\"timestamp\":\"2024-02-07T12:04:21.691Z\",\"application\":\"Retail:Prod"
		":www.amazon.com\",\"obfuscatedMarketplaceId\":\"ATVPDKIKX0DER\",\"lob\":\"1\",\"producerId\":\"csa\",\"entities\":{\"page\":{\"id\":\"y45xqs-v4tsc7-d3onkb-o8oc8f\",\"requestId\":\"5AFSK1C7VNHSD7KRB97Y\",\"meaningful\":\"interactive\",\"url\":\"https://www.amazon.com/\",\"server\":\"www.amazon.com\",\"path\":\"/\",\"referrer\":\"\",\"title\":\"Amazon.com. Spend less. Smile more.\",\"transitionType\":\"hard\",\"pageType\":\"Gateway\",\"subPageType\":\"desktop\",\"pageTypeId\":\"desktop\"},\"session"
		"\":{\"id\":\"133-6658273-5713951\"}}}},{\"data\":{\"messageId\":\"qp4eai-jsby2w-pc296h-f7ujbr\",\"schemaId\":\"csa.Error.6\",\"errorMessage\":\"ameyal-product-shoveler: Image failed to load https://m.media-amazon.com/images/I/71cSLFE39zL._AC_SY200_.jpg\",\"attribution\":\"gatewayCardImageError\",\"logLevel\":\"ERROR\",\"url\":\"https://www.amazon.com/\",\"file\":\"https://www.amazon.com/\",\"line\":\"172\",\"column\":null,\"stack\":[\"Error: Image failed to load https://m.media-amazon.com/images/I"
		"/71cSLFE39zL._AC_SY200_.jpg\",\"at HTMLImageElement.d (https://www.amazon.com/:172:209)\"],\"context\":{},\"metadata\":{\"name\":\"Error\",\"csm\":\"v5 ueLogError stack\"},\"timestamp\":\"2024-02-07T12:04:21.692Z\",\"application\":\"Retail:Prod:www.amazon.com\",\"obfuscatedMarketplaceId\":\"ATVPDKIKX0DER\",\"lob\":\"1\",\"producerId\":\"csa\",\"entities\":{\"page\":{\"id\":\"y45xqs-v4tsc7-d3onkb-o8oc8f\",\"requestId\":\"5AFSK1C7VNHSD7KRB97Y\",\"meaningful\":\"interactive\",\"url\":\"https://"
		"www.amazon.com/\",\"server\":\"www.amazon.com\",\"path\":\"/\",\"referrer\":\"\",\"title\":\"Amazon.com. Spend less. Smile more.\",\"transitionType\":\"hard\",\"pageType\":\"Gateway\",\"subPageType\":\"desktop\",\"pageTypeId\":\"desktop\"},\"session\":{\"id\":\"133-6658273-5713951\"}}}},{\"data\":{\"messageId\":\"6c5urc-5uvjvu-rs5gz5-m8f9vj\",\"schemaId\":\"csa.Error.6\",\"errorMessage\":\"ameyal-product-shoveler: Image failed to load https://m.media-amazon.com/images/I/71cSLFE39zL._AC_SY200_.jpg"
		"\",\"attribution\":\"gatewayCardImageError\",\"logLevel\":\"ERROR\",\"url\":\"https://www.amazon.com/\",\"file\":\"https://www.amazon.com/\",\"line\":\"172\",\"column\":null,\"stack\":[\"Error: Image failed to load https://m.media-amazon.com/images/I/71cSLFE39zL._AC_SY200_.jpg\",\"at HTMLImageElement.d (https://www.amazon.com/:172:209)\"],\"context\":{},\"metadata\":{\"name\":\"Error\",\"csm\":\"v5 ueLogError stack\"},\"timestamp\":\"2024-02-07T12:04:21.693Z\",\"application\":\"Retail:Prod"
		":www.amazon.com\",\"obfuscatedMarketplaceId\":\"ATVPDKIKX0DER\",\"lob\":\"1\",\"producerId\":\"csa\",\"entities\":{\"page\":{\"id\":\"y45xqs-v4tsc7-d3onkb-o8oc8f\",\"requestId\":\"5AFSK1C7VNHSD7KRB97Y\",\"meaningful\":\"interactive\",\"url\":\"https://www.amazon.com/\",\"server\":\"www.amazon.com\",\"path\":\"/\",\"referrer\":\"\",\"title\":\"Amazon.com. Spend less. Smile more.\",\"transitionType\":\"hard\",\"pageType\":\"Gateway\",\"subPageType\":\"desktop\",\"pageTypeId\":\"desktop\"},\"session"
		"\":{\"id\":\"133-6658273-5713951\"}}}},{\"data\":{\"messageId\":\"j3laeb-aesp5u-az1dv8-ex6idu\",\"schemaId\":\"csa.Error.6\",\"errorMessage\":\"ameyal-product-shoveler: Image failed to load https://m.media-amazon.com/images/I/71cSLFE39zL._AC_SY200_.jpg\",\"attribution\":\"gatewayCardImageError\",\"logLevel\":\"ERROR\",\"url\":\"https://www.amazon.com/\",\"file\":\"https://www.amazon.com/\",\"line\":\"172\",\"column\":null,\"stack\":[\"Error: Image failed to load https://m.media-amazon.com/images/I"
		"/71cSLFE39zL._AC_SY200_.jpg\",\"at HTMLImageElement.d (https://www.amazon.com/:172:209)\"],\"context\":{},\"metadata\":{\"name\":\"Error\",\"csm\":\"v5 ueLogError stack\"},\"timestamp\":\"2024-02-07T12:04:21.693Z\",\"application\":\"Retail:Prod:www.amazon.com\",\"obfuscatedMarketplaceId\":\"ATVPDKIKX0DER\",\"lob\":\"1\",\"producerId\":\"csa\",\"entities\":{\"page\":{\"id\":\"y45xqs-v4tsc7-d3onkb-o8oc8f\",\"requestId\":\"5AFSK1C7VNHSD7KRB97Y\",\"meaningful\":\"interactive\",\"url\":\"https://"
		"www.amazon.com/\",\"server\":\"www.amazon.com\",\"path\":\"/\",\"referrer\":\"\",\"title\":\"Amazon.com. Spend less. Smile more.\",\"transitionType\":\"hard\",\"pageType\":\"Gateway\",\"subPageType\":\"desktop\",\"pageTypeId\":\"desktop\"},\"session\":{\"id\":\"133-6658273-5713951\"}}}},{\"data\":{\"messageId\":\"xm1sk6-k6eqk9-uhu9fm-bvzjt0\",\"schemaId\":\"csa.Error.6\",\"errorMessage\":\"ameyal-product-shoveler: Image failed to load https://m.media-amazon.com/images/I/71cSLFE39zL._AC_SY200_.jpg"
		"\",\"attribution\":\"gatewayCardImageError\",\"logLevel\":\"ERROR\",\"url\":\"https://www.amazon.com/\",\"file\":\"https://www.amazon.com/\",\"line\":\"172\",\"column\":null,\"stack\":[\"Error: Image failed to load https://m.media-amazon.com/images/I/71cSLFE39zL._AC_SY200_.jpg\",\"at HTMLImageElement.d (https://www.amazon.com/:172:209)\"],\"context\":{},\"metadata\":{\"name\":\"Error\",\"csm\":\"v5 ueLogError stack\"},\"timestamp\":\"2024-02-07T12:04:21.693Z\",\"application\":\"Retail:Prod"
		":www.amazon.com\",\"obfuscatedMarketplaceId\":\"ATVPDKIKX0DER\",\"lob\":\"1\",\"producerId\":\"csa\",\"entities\":{\"page\":{\"id\":\"y45xqs-v4tsc7-d3onkb-o8oc8f\",\"requestId\":\"5AFSK1C7VNHSD7KRB97Y\",\"meaningful\":\"interactive\",\"url\":\"https://www.amazon.com/\",\"server\":\"www.amazon.com\",\"path\":\"/\",\"referrer\":\"\",\"title\":\"Amazon.com. Spend less. Smile more.\",\"transitionType\":\"hard\",\"pageType\":\"Gateway\",\"subPageType\":\"desktop\",\"pageTypeId\":\"desktop\"},\"session"
		"\":{\"id\":\"133-6658273-5713951\"}}}},{\"data\":{\"messageId\":\"7b5ad8-colm85-qn234h-l6pnnf\",\"schemaId\":\"csa.Error.6\",\"errorMessage\":\"ameyal-product-shoveler: Image failed to load https://m.media-amazon.com/images/I/71nVIiWEcgL._AC_SY200_.jpg\",\"attribution\":\"gatewayCardImageError\",\"logLevel\":\"ERROR\",\"url\":\"https://www.amazon.com/\",\"file\":\"https://www.amazon.com/\",\"line\":\"172\",\"column\":null,\"stack\":[\"Error: Image failed to load https://m.media-amazon.com/images/I"
		"/71nVIiWEcgL._AC_SY200_.jpg\",\"at HTMLImageElement.d (https://www.amazon.com/:172:209)\"],\"context\":{},\"metadata\":{\"name\":\"Error\",\"csm\":\"v5 ueLogError stack\"},\"timestamp\":\"2024-02-07T12:04:21.694Z\",\"application\":\"Retail:Prod:www.amazon.com\",\"obfuscatedMarketplaceId\":\"ATVPDKIKX0DER\",\"lob\":\"1\",\"producerId\":\"csa\",\"entities\":{\"page\":{\"id\":\"y45xqs-v4tsc7-d3onkb-o8oc8f\",\"requestId\":\"5AFSK1C7VNHSD7KRB97Y\",\"meaningful\":\"interactive\",\"url\":\"https://"
		"www.amazon.com/\",\"server\":\"www.amazon.com\",\"path\":\"/\",\"referrer\":\"\",\"title\":\"Amazon.com. Spend less. Smile more.\",\"transitionType\":\"hard\",\"pageType\":\"Gateway\",\"subPageType\":\"desktop\",\"pageTypeId\":\"desktop\"},\"session\":{\"id\":\"133-6658273-5713951\"}}}},{\"data\":{\"messageId\":\"3l0m9s-hqd5vl-pznvaa-1de21b\",\"schemaId\":\"csa.Error.6\",\"errorMessage\":\"ameyal-product-shoveler: Image failed to load https://m.media-amazon.com/images/I/71nVIiWEcgL._AC_SY200_.jpg"
		"\",\"attribution\":\"gatewayCardImageError\",\"logLevel\":\"ERROR\",\"url\":\"https://www.amazon.com/\",\"file\":\"https://www.amazon.com/\",\"line\":\"172\",\"column\":null,\"stack\":[\"Error: Image failed to load https://m.media-amazon.com/images/I/71nVIiWEcgL._AC_SY200_.jpg\",\"at HTMLImageElement.d (https://www.amazon.com/:172:209)\"],\"context\":{},\"metadata\":{\"name\":\"Error\",\"csm\":\"v5 ueLogError stack\"},\"timestamp\":\"2024-02-07T12:04:21.694Z\",\"application\":\"Retail:Prod"
		":www.amazon.com\",\"obfuscatedMarketplaceId\":\"ATVPDKIKX0DER\",\"lob\":\"1\",\"producerId\":\"csa\",\"entities\":{\"page\":{\"id\":\"y45xqs-v4tsc7-d3onkb-o8oc8f\",\"requestId\":\"5AFSK1C7VNHSD7KRB97Y\",\"meaningful\":\"interactive\",\"url\":\"https://www.amazon.com/\",\"server\":\"www.amazon.com\",\"path\":\"/\",\"referrer\":\"\",\"title\":\"Amazon.com. Spend less. Smile more.\",\"transitionType\":\"hard\",\"pageType\":\"Gateway\",\"subPageType\":\"desktop\",\"pageTypeId\":\"desktop\"},\"session"
		"\":{\"id\":\"133-6658273-5713951\"}}}},{\"data\":{\"messageId\":\"b9b8kc-4ywc5g-ylu7wr-fmax7v\",\"schemaId\":\"csa.Error.6\",\"errorMessage\":\"ameyal-product-shoveler: Image failed to load https://m.media-amazon.com/images/I/71nVIiWEcgL._AC_SY200_.jpg\",\"attribution\":\"gatewayCardImageError\",\"logLevel\":\"ERROR\",\"url\":\"https://www.amazon.com/\",\"file\":\"https://www.amazon.com/\",\"line\":\"172\",\"column\":null,\"stack\":[\"Error: Image failed to load https://m.media-amazon.com/images/I"
		"/71nVIiWEcgL._AC_SY200_.jpg\",\"at HTMLImageElement.d (https://www.amazon.com/:172:209)\"],\"context\":{},\"metadata\":{\"name\":\"Error\",\"csm\":\"v5 ueLogError stack\"},\"timestamp\":\"2024-02-07T12:04:21.694Z\",\"application\":\"Retail:Prod:www.amazon.com\",\"obfuscatedMarketplaceId\":\"ATVPDKIKX0DER\",\"lob\":\"1\",\"producerId\":\"csa\",\"entities\":{\"page\":{\"id\":\"y45xqs-v4tsc7-d3onkb-o8oc8f\",\"requestId\":\"5AFSK1C7VNHSD7KRB97Y\",\"meaningful\":\"interactive\",\"url\":\"https://"
		"www.amazon.com/\",\"server\":\"www.amazon.com\",\"path\":\"/\",\"referrer\":\"\",\"title\":\"Amazon.com. Spend less. Smile more.\",\"transitionType\":\"hard\",\"pageType\":\"Gateway\",\"subPageType\":\"desktop\",\"pageTypeId\":\"desktop\"},\"session\":{\"id\":\"133-6658273-5713951\"}}}},{\"data\":{\"messageId\":\"uu16a-s24jb0-5a9wyf-49y0p9\",\"schemaId\":\"csa.Error.6\",\"errorMessage\":\"ameyal-product-shoveler: Image failed to load https://m.media-amazon.com/images/I/71nVIiWEcgL._AC_SY200_.jpg\""
		",\"attribution\":\"gatewayCardImageError\",\"logLevel\":\"ERROR\",\"url\":\"https://www.amazon.com/\",\"file\":\"https://www.amazon.com/\",\"line\":\"172\",\"column\":null,\"stack\":[\"Error: Image failed to load https://m.media-amazon.com/images/I/71nVIiWEcgL._AC_SY200_.jpg\",\"at HTMLImageElement.d (https://www.amazon.com/:172:209)\"],\"context\":{},\"metadata\":{\"name\":\"Error\",\"csm\":\"v5 ueLogError stack\"},\"timestamp\":\"2024-02-07T12:04:21.694Z\",\"application\":\"Retail:Prod"
		":www.amazon.com\",\"obfuscatedMarketplaceId\":\"ATVPDKIKX0DER\",\"lob\":\"1\",\"producerId\":\"csa\",\"entities\":{\"page\":{\"id\":\"y45xqs-v4tsc7-d3onkb-o8oc8f\",\"requestId\":\"5AFSK1C7VNHSD7KRB97Y\",\"meaningful\":\"interactive\",\"url\":\"https://www.amazon.com/\",\"server\":\"www.amazon.com\",\"path\":\"/\",\"referrer\":\"\",\"title\":\"Amazon.com. Spend less. Smile more.\",\"transitionType\":\"hard\",\"pageType\":\"Gateway\",\"subPageType\":\"desktop\",\"pageTypeId\":\"desktop\"},\"session"
		"\":{\"id\":\"133-6658273-5713951\"}}}},{\"data\":{\"messageId\":\"3ns5wd-cia734-awe776-sx3q9y\",\"schemaId\":\"csa.Error.6\",\"errorMessage\":\"ameyal-product-shoveler: Image failed to load https://m.media-amazon.com/images/I/71nVIiWEcgL._AC_SY200_.jpg\",\"attribution\":\"gatewayCardImageError\",\"logLevel\":\"ERROR\",\"url\":\"https://www.amazon.com/\",\"file\":\"https://www.amazon.com/\",\"line\":\"172\",\"column\":null,\"stack\":[\"Error: Image failed to load https://m.media-amazon.com/images/I"
		"/71nVIiWEcgL._AC_SY200_.jpg\",\"at HTMLImageElement.d (https://www.amazon.com/:172:209)\"],\"context\":{},\"metadata\":{\"name\":\"Error\",\"csm\":\"v5 ueLogError stack\"},\"timestamp\":\"2024-02-07T12:04:21.694Z\",\"application\":\"Retail:Prod:www.amazon.com\",\"obfuscatedMarketplaceId\":\"ATVPDKIKX0DER\",\"lob\":\"1\",\"producerId\":\"csa\",\"entities\":{\"page\":{\"id\":\"y45xqs-v4tsc7-d3onkb-o8oc8f\",\"requestId\":\"5AFSK1C7VNHSD7KRB97Y\",\"meaningful\":\"interactive\",\"url\":\"https://"
		"www.amazon.com/\",\"server\":\"www.amazon.com\",\"path\":\"/\",\"referrer\":\"\",\"title\":\"Amazon.com. Spend less. Smile more.\",\"transitionType\":\"hard\",\"pageType\":\"Gateway\",\"subPageType\":\"desktop\",\"pageTypeId\":\"desktop\"},\"session\":{\"id\":\"133-6658273-5713951\"}}}},{\"data\":{\"messageId\":\"nokfn7-94kafa-77ns4n-bkdnts\",\"schemaId\":\"csa.Error.6\",\"errorMessage\":\"ameyal-product-shoveler: Image failed to load https://m.media-amazon.com/images/I/71nVIiWEcgL._AC_SY200_.jpg"
		"\",\"attribution\":\"gatewayCardImageError\",\"logLevel\":\"ERROR\",\"url\":\"https://www.amazon.com/\",\"file\":\"https://www.amazon.com/\",\"line\":\"172\",\"column\":null,\"stack\":[\"Error: Image failed to load https://m.media-amazon.com/images/I/71nVIiWEcgL._AC_SY200_.jpg\",\"at HTMLImageElement.d (https://www.amazon.com/:172:209)\"],\"context\":{},\"metadata\":{\"name\":\"Error\",\"csm\":\"v5 ueLogError stack\"},\"timestamp\":\"2024-02-07T12:04:21.694Z\",\"application\":\"Retail:Prod"
		":www.amazon.com\",\"obfuscatedMarketplaceId\":\"ATVPDKIKX0DER\",\"lob\":\"1\",\"producerId\":\"csa\",\"entities\":{\"page\":{\"id\":\"y45xqs-v4tsc7-d3onkb-o8oc8f\",\"requestId\":\"5AFSK1C7VNHSD7KRB97Y\",\"meaningful\":\"interactive\",\"url\":\"https://www.amazon.com/\",\"server\":\"www.amazon.com\",\"path\":\"/\",\"referrer\":\"\",\"title\":\"Amazon.com. Spend less. Smile more.\",\"transitionType\":\"hard\",\"pageType\":\"Gateway\",\"subPageType\":\"desktop\",\"pageTypeId\":\"desktop\"},\"session"
		"\":{\"id\":\"133-6658273-5713951\"}}}},{\"data\":{\"messageId\":\"wndjzn-wiabot-32voyf-2udgx4\",\"schemaId\":\"csa.Error.6\",\"errorMessage\":\"ameyal-product-shoveler: Image failed to load https://m.media-amazon.com/images/I/71nVIiWEcgL._AC_SY200_.jpg\",\"attribution\":\"gatewayCardImageError\",\"logLevel\":\"ERROR\",\"url\":\"https://www.amazon.com/\",\"file\":\"https://www.amazon.com/\",\"line\":\"172\",\"column\":null,\"stack\":[\"Error: Image failed to load https://m.media-amazon.com/images/I"
		"/71nVIiWEcgL._AC_SY200_.jpg\",\"at HTMLImageElement.d (https://www.amazon.com/:172:209)\"],\"context\":{},\"metadata\":{\"name\":\"Error\",\"csm\":\"v5 ueLogError stack\"},\"timestamp\":\"2024-02-07T12:04:21.694Z\",\"application\":\"Retail:Prod:www.amazon.com\",\"obfuscatedMarketplaceId\":\"ATVPDKIKX0DER\",\"lob\":\"1\",\"producerId\":\"csa\",\"entities\":{\"page\":{\"id\":\"y45xqs-v4tsc7-d3onkb-o8oc8f\",\"requestId\":\"5AFSK1C7VNHSD7KRB97Y\",\"meaningful\":\"interactive\",\"url\":\"https://"
		"www.amazon.com/\",\"server\":\"www.amazon.com\",\"path\":\"/\",\"referrer\":\"\",\"title\":\"Amazon.com. Spend less. Smile more.\",\"transitionType\":\"hard\",\"pageType\":\"Gateway\",\"subPageType\":\"desktop\",\"pageTypeId\":\"desktop\"},\"session\":{\"id\":\"133-6658273-5713951\"}}}},{\"data\":{\"messageId\":\"rnfp15-1otmfe-huzj5f-lo1xxu\",\"schemaId\":\"csa.ContentLatency.4\",\"markers\":{\"visuallyLoaded50\":5866,\"visuallyLoaded90\":5866},\"timestamp\":\"2024-02-07T12:04:22.934Z\",\""
		"application\":\"Retail:Prod:www.amazon.com\",\"obfuscatedMarketplaceId\":\"ATVPDKIKX0DER\",\"lob\":\"1\",\"producerId\":\"csa\",\"entities\":{\"page\":{\"id\":\"y45xqs-v4tsc7-d3onkb-o8oc8f\",\"requestId\":\"5AFSK1C7VNHSD7KRB97Y\",\"pageType\":\"Gateway\",\"subPageType\":\"desktop\"},\"session\":{\"id\":\"133-6658273-5713951\"},\"element\":{\"id\":\"ns5rja-2pkead-n95e5e-m01txx\",\"type\":\"widget\",\"slotId\":\"desktop-hero-order\",\"iSlotId\":\"desktop-hero-order\",\"class\":\"celwidget\",\""
		"legacyId\":\"desktop-hero-order\"}}}}]}", 
		LAST);

	web_custom_request("OE_55", 
		"URL=https://fls-na.amazon.com/1/batch/1/OE/", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=https://www.amazon.com/", 
		"Snapshot=t88.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"rid\":\"5AFSK1C7VNHSD7KRB97Y\",\"sid\":\"133-6658273-5713951\",\"mid\":\"ATVPDKIKX0DER\",\"sn\":\"www.amazon.com\",\"reqs\":[{\"cel\":{\"k\":\"mmm1\",\"e\":[{\"x\":770,\"y\":440,\"t\":20546},{\"x\":752,\"y\":462,\"t\":20730},{\"x\":774,\"y\":453,\"t\":20886},{\"x\":900,\"y\":277,\"t\":20980},{\"x\":1044,\"y\":186,\"t\":21388},{\"x\":1112,\"y\":153,\"t\":21418}],\"min\":199,\"max\":199,\"avg\":199}},{\"cel\":{\"k\":\"ebl\",\"t\":23487,\"s\":\"default\"}},{\"cel\":{\"k\":\"hrt\",\"t\":23487}"
		"},{\"csm\":{\"k\":\"chk\",\"f\":3,\"l\":{\"cel\":55,\"csm\":3,\"jserr-rw\":52},\"s\":\"full\"}},{\"csmcount\":{\"counter\":\"foresterPayloadSize\",\"t\":0,\"value\":550}}]}", 
		LAST);

	web_custom_request("com.amazon.csm.nexusclient.prod_2", 
		"URL=https://unagi-na.amazon.com/1/events/com.amazon.csm.nexusclient.prod", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.amazon.com/", 
		"Snapshot=t89.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"cs\":{\"dct\":{\"#0\":\"domains\",\"#1\":\"www.amazon.com\",\"#2\":\"m.media-amazon.com\",\"#3\":\"images-na.ssl-images-amazon.com\",\"#4\":\"fls-na.amazon.com\",\"#5\":\"unagi-na.amazon.com\",\"#6\":\"pageType\",\"#7\":\"Gateway\",\"#8\":\"subPageType\",\"#9\":\"desktop\",\"#10\":\"pageTypeId\",\"#11\":\"lob\",\"#12\":\"producerId\",\"#13\":\"schemaId\",\"#14\":\"csm.CrossOriginDomains.2\",\"#15\":\"timestamp\",\"#16\":\"messageId\",\"#17\":\"sessionId\",\"#18\":\"133-6658273-5713951\",\""
		"#19\":\"requestId\",\"#20\":\"5AFSK1C7VNHSD7KRB97Y\",\"#21\":\"obfuscatedMarketplaceId\",\"#22\":\"ATVPDKIKX0DER\"}},\"events\":[{\"data\":{\"#0\":{\"#1\":3,\"#2\":60,\"#3\":44,\"#4\":8,\"#5\":1},\"#6\":\"#7\",\"#8\":\"#9\",\"#10\":\"#9\",\"#11\":\"1\",\"#12\":\"csm\",\"#13\":\"#14\",\"#15\":\"2024-02-07T12:04:22.124Z\",\"#16\":\"5AFSK1C7VNHSD7KRB97Y-1707307462124-2554273904\",\"#17\":\"#18\",\"#19\":\"#20\",\"#21\":\"#22\"}}]}", 
		LAST);

	web_custom_request("com.amazon.csm.csa.prod_3", 
		"URL=https://unagi.amazon.com/1/events/com.amazon.csm.csa.prod", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.amazon.com/", 
		"Snapshot=t90.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"events\":[{\"data\":{\"schemaId\":\"robotdetection.RdCSI.1\",\"eventType\":\"ebl\",\"clientData\":{\"t\":\"23488\",\"s\":\"default\"},\"timestamp\":\"2024-02-07T12:04:25.367Z\",\"messageId\":\"kownx-o72tlg-jh2rs7-tabm5s\",\"application\":\"Retail:Prod:www.amazon.com\",\"obfuscatedMarketplaceId\":\"ATVPDKIKX0DER\",\"producerId\":\"robotdetection\",\"entities\":{\"page\":{\"id\":\"y45xqs-v4tsc7-d3onkb-o8oc8f\",\"requestId\":\"5AFSK1C7VNHSD7KRB97Y\"},\"session\":{\"id\":\"133-6658273-5713951"
		"\"}}}},{\"data\":{\"activity\":{\"scrollCounts\":0,\"reachedDepth\":541,\"horizontalScrollDistance\":0,\"dwellTime\":23530},\"dimensions\":{\"availableScreenWidth\":1280,\"availableScreenHeight\":680,\"documentWidth\":1263,\"documentHeight\":5540,\"screenWidth\":1280,\"screenHeight\":720,\"viewportWidth\":1280,\"viewportHeight\":541},\"schemaId\":\"csa.PageInteractionsSummary.2\",\"timestamp\":\"2024-02-07T12:04:25.367Z\",\"messageId\":\"bzxptk-mrw5c-nzkn3x-71ftrb\",\"application\":\"Retail:Prod"
		":www.amazon.com\",\"obfuscatedMarketplaceId\":\"ATVPDKIKX0DER\",\"lob\":\"1\",\"producerId\":\"csa\",\"entities\":{\"page\":{\"id\":\"y45xqs-v4tsc7-d3onkb-o8oc8f\",\"requestId\":\"5AFSK1C7VNHSD7KRB97Y\",\"pageType\":\"Gateway\",\"subPageType\":\"desktop\"},\"session\":{\"id\":\"133-6658273-5713951\"}}}},{\"data\":{\"messageId\":\"t8cncj-2kw2fx-6adg4v-yh7wso\",\"schemaId\":\"csa.ContentInteractionsSummary.2\",\"w\":{\"vbopwz-oyyiqe-v63gb2-x54s73\":{\"it0\":11254,\"it50\":11255,\"it100\":11254},\""
		"ns5rja-2pkead-n95e5e-m01txx\":{\"it0\":11254,\"it50\":11255,\"it100\":11254},\"fu7bue-wtzqip-zk9ll-9kqpu9\":{\"it0\":11254,\"it50\":11255},\"2w7gsr-omf8an-xskpxz-qnj8ua\":{\"it0\":11254,\"it50\":11255,\"it100\":11254},\"eizs84-2yco1r-vquque-we3yzq\":{\"it0\":11254},\"z2we0i-y21n32-nrmvry-tuv69k\":{\"it0\":11254},\"qd56tg-ru5qqr-c7bpcz-c200y3\":{\"it0\":11254},\"e72icp-oh4epu-5rchz3-f0pato\":{\"it0\":11254},\"nicpwd-9edqef-dj2dmz-lenrk9\":{\"it0\":11254,\"it50\":11255,\"it100\":11254},\""
		"ahx9vz-h4gjmd-art5kv-gv96eq\":{\"it0\":11254,\"it50\":11255,\"it100\":11254},\"rp0dtf-aqn4zy-adpzy7-7uns1u\":{\"it0\":11254,\"it50\":11255,\"it100\":11254},\"9bxgb2-rk4ugy-8xrcud-41ek63\":{\"it0\":11254,\"it50\":11255,\"it100\":11254},\"laex1h-pn7wle-altnz6-ui8oov\":{\"it0\":11254,\"it50\":11255,\"it100\":11254},\"e2wxv3-pf2bif-mjr5hq-lasosr\":{\"it0\":11254,\"it50\":11255,\"it100\":11254},\"mw7ee5-saiwhk-a7why0-th47fv\":{\"it0\":11254,\"it50\":11255,\"it100\":11254}},\"timestamp\":\"2024-02-07T12"
		":04:26.457Z\",\"application\":\"Retail:Prod:www.amazon.com\",\"obfuscatedMarketplaceId\":\"ATVPDKIKX0DER\",\"lob\":\"1\",\"producerId\":\"csa\",\"entities\":{\"page\":{\"id\":\"y45xqs-v4tsc7-d3onkb-o8oc8f\",\"requestId\":\"5AFSK1C7VNHSD7KRB97Y\"},\"session\":{\"id\":\"133-6658273-5713951\"}}}}]}", 
		LAST);

	web_set_sockets_option("TLS_SNI", "0");

	/* Signin */

	web_custom_request("OE_56", 
		"URL=https://fls-na.amazon.com/1/batch/1/OE/", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=https://www.amazon.com/", 
		"Snapshot=t91.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"rid\":\"5AFSK1C7VNHSD7KRB97Y\",\"sid\":\"133-6658273-5713951\",\"mid\":\"ATVPDKIKX0DER\",\"sn\":\"www.amazon.com\",\"reqs\":[{\"cel\":{\"k\":\"mmm1\",\"e\":[{\"x\":1142,\"y\":119,\"t\":21729},{\"x\":1194,\"y\":17,\"t\":22074},{\"x\":1197,\"y\":13,\"t\":22105},{\"x\":1197,\"y\":12,\"t\":22449}],\"min\":99,\"max\":199,\"avg\":149}},{\"cel\":{\"k\":\"mmm1\",\"e\":[{\"x\":948,\"y\":109,\"t\":29293},{\"x\":952,\"y\":120,\"t\":29388},{\"x\":1032,\"y\":167,\"t\":29731},{\"x\":1044,\"y\":159,\"t\""
		":29855},{\"x\":1098,\"y\":111,\"t\":30033}],\"min\":99,\"max\":199,\"avg\":133}},{\"cel\":{\"k\":\"hrt\",\"t\":30824}},{\"csm\":{\"k\":\"chk\",\"f\":4,\"l\":{\"cel\":58,\"csm\":4,\"jserr-rw\":52},\"s\":\"full\"}},{\"csmcount\":{\"counter\":\"foresterPayloadSize\",\"t\":0,\"value\":647}}]}", 
		LAST);

	web_custom_request("com.amazon.csm.csa.prod_4", 
		"URL=https://unagi.amazon.com/1/events/com.amazon.csm.csa.prod", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.amazon.com/", 
		"Snapshot=t92.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"events\":[{\"data\":{\"schemaId\":\"robotdetection.RdCSI.1\",\"eventType\":\"efo\",\"clientData\":{\"t\":\"33787\",\"s\":\"default\"},\"timestamp\":\"2024-02-07T12:04:35.666Z\",\"messageId\":\"7z0na9-jif30c-u3eq4-aahf42\",\"application\":\"Retail:Prod:www.amazon.com\",\"obfuscatedMarketplaceId\":\"ATVPDKIKX0DER\",\"producerId\":\"robotdetection\",\"entities\":{\"page\":{\"id\":\"y45xqs-v4tsc7-d3onkb-o8oc8f\",\"requestId\":\"5AFSK1C7VNHSD7KRB97Y\"},\"session\":{\"id\":\"133-6658273-5713951"
		"\"}}}},{\"data\":{\"schemaId\":\"csa.ContentInteraction.2\",\"interaction\":\"click\",\"interactionData\":{\"interactionX\":\"998\",\"interactionY\":\"23\",\"parentChain\":\"HTML/BODY/DIV/HEADER/DIV/DIV/DIV/DIV/A/DIV/SPAN\",\"href\":\"https://www.amazon.com/ap/signin?openid.pape.max_auth_age=0&openid.return_to=https%3A%2F%2Fwww.amazon.com%2F%3F_encoding%3DUTF8%26ref_%3Dnav_ya_signin&openid.identity=http%3A%2F%2Fspecs.openid.net%2Fauth%2F2.0%2Fidentifier_select&openid.assoc_handle=usflex&"
		"openid.mode=checkid_setup&openid.claimed_id=http%3A%2F%2Fspecs.openid.net%2Fauth%2F2.0%2Fidentifier_select&openid.ns=http%3A%2F%2Fspecs.openid.net%2Fauth%2F2.0\"},\"messageId\":\"7km553-6st83z-5ze88e-or9p5z\",\"attribution\":\"//*[@id='nav-link-accountList-nav-line-1']\",\"timestamp\":\"2024-02-07T12:04:35.867Z\",\"application\":\"Retail:Prod:www.amazon.com\",\"obfuscatedMarketplaceId\":\"ATVPDKIKX0DER\",\"lob\":\"1\",\"producerId\":\"csa\",\"entities\":{\"page\":{\"id\":\""
		"y45xqs-v4tsc7-d3onkb-o8oc8f\",\"requestId\":\"5AFSK1C7VNHSD7KRB97Y\",\"pageType\":\"Gateway\",\"subPageType\":\"desktop\"},\"session\":{\"id\":\"133-6658273-5713951\"},\"element\":{\"id\":\"nicpwd-9edqef-dj2dmz-lenrk9\",\"type\":\"link\",\"slotId\":\"nav-link-accountList\",\"contentId\":\"nav_ya_signin\",\"iSlotId\":\"nav-link-accountList\",\"href\":\"https://www.amazon.com/ap/signin?openid.pape.max_auth_age=0&openid.return_to="
		"https%3A%2F%2Fwww.amazon.com%2F%3F_encoding%3DUTF8%26ref_%3Dnav_ya_signin&openid.identity=http%3A%2F%2Fspecs.openid.net%2Fauth%2F2.0%2Fidentifier_select&openid.assoc_handle=usflex&openid.mode=checkid_setup&openid.claimed_id=http%3A%2F%2Fspecs.openid.net%2Fauth%2F2.0%2Fidentifier_select&openid.ns=http%3A%2F%2Fspecs.openid.net%2Fauth%2F2.0\",\"class\":\"nav-a nav-a-2   nav-progressive-attribute\",\"parentId\":\"vbopwz-oyyiqe-v63gb2-x54s73\"}}}},{\"data\":{\"messageId\":\"t8cncj-2kw2fx-6adg4v-yh7wso"
		"\",\"schemaId\":\"csa.ContentInteractionsSummary.2\",\"w\":{\"nicpwd-9edqef-dj2dmz-lenrk9\":{\"mc\":1,\"it0\":9411,\"it50\":9410,\"it100\":9411},\"vbopwz-oyyiqe-v63gb2-x54s73\":{\"mc\":1,\"it0\":9411,\"it50\":9410,\"it100\":9411},\"ns5rja-2pkead-n95e5e-m01txx\":{\"it0\":9411,\"it50\":9410,\"it100\":9411},\"fu7bue-wtzqip-zk9ll-9kqpu9\":{\"it0\":9411,\"it50\":9410},\"2w7gsr-omf8an-xskpxz-qnj8ua\":{\"it0\":9411,\"it50\":9410,\"it100\":9411},\"eizs84-2yco1r-vquque-we3yzq\":{\"it0\":9411},\""
		"z2we0i-y21n32-nrmvry-tuv69k\":{\"it0\":9411},\"qd56tg-ru5qqr-c7bpcz-c200y3\":{\"it0\":9411},\"e72icp-oh4epu-5rchz3-f0pato\":{\"it0\":9411},\"ahx9vz-h4gjmd-art5kv-gv96eq\":{\"it0\":9411,\"it50\":9410,\"it100\":9411},\"rp0dtf-aqn4zy-adpzy7-7uns1u\":{\"it0\":9411,\"it50\":9410,\"it100\":9411},\"9bxgb2-rk4ugy-8xrcud-41ek63\":{\"it0\":9411,\"it50\":9410,\"it100\":9411},\"laex1h-pn7wle-altnz6-ui8oov\":{\"it0\":9411,\"it50\":9410,\"it100\":9411},\"e2wxv3-pf2bif-mjr5hq-lasosr\":{\"it0\":9411,\"it50\":9410"
		",\"it100\":9411},\"mw7ee5-saiwhk-a7why0-th47fv\":{\"it0\":9411,\"it50\":9410,\"it100\":9411}},\"timestamp\":\"2024-02-07T12:04:35.867Z\",\"application\":\"Retail:Prod:www.amazon.com\",\"obfuscatedMarketplaceId\":\"ATVPDKIKX0DER\",\"lob\":\"1\",\"producerId\":\"csa\",\"entities\":{\"page\":{\"id\":\"y45xqs-v4tsc7-d3onkb-o8oc8f\",\"requestId\":\"5AFSK1C7VNHSD7KRB97Y\"},\"session\":{\"id\":\"133-6658273-5713951\"}}}},{\"data\":{\"messageId\":\"dpjxoq-qv1wko-nt69s8-jy8kd7\",\"schemaId\":\""
		"csa.Metric.4\",\"metrics\":{\"documentCumulativeLayoutShiftToFirstInput\":0},\"dimensions\":{},\"timestamp\":\"2024-02-07T12:04:35.867Z\",\"application\":\"Retail:Prod:www.amazon.com\",\"obfuscatedMarketplaceId\":\"ATVPDKIKX0DER\",\"lob\":\"1\",\"producerId\":\"csa\",\"entities\":{\"page\":{\"id\":\"y45xqs-v4tsc7-d3onkb-o8oc8f\",\"requestId\":\"5AFSK1C7VNHSD7KRB97Y\",\"pageType\":\"Gateway\",\"subPageType\":\"desktop\"},\"session\":{\"id\":\"133-6658273-5713951\"}}}},{\"data\":{\"activity\":{\""
		"scrollCounts\":0,\"reachedDepth\":541,\"horizontalScrollDistance\":0,\"dwellTime\":23733},\"dimensions\":{\"availableScreenWidth\":1280,\"availableScreenHeight\":680,\"documentWidth\":1263,\"documentHeight\":5540,\"screenWidth\":1280,\"screenHeight\":720,\"viewportWidth\":1280,\"viewportHeight\":541},\"schemaId\":\"csa.PageInteractionsSummary.2\",\"timestamp\":\"2024-02-07T12:04:35.871Z\",\"messageId\":\"br3ktv-wp7it0-n19u6w-2nodyb\",\"application\":\"Retail:Prod:www.amazon.com\",\""
		"obfuscatedMarketplaceId\":\"ATVPDKIKX0DER\",\"lob\":\"1\",\"producerId\":\"csa\",\"entities\":{\"page\":{\"id\":\"y45xqs-v4tsc7-d3onkb-o8oc8f\",\"requestId\":\"5AFSK1C7VNHSD7KRB97Y\",\"pageType\":\"Gateway\",\"subPageType\":\"desktop\"},\"session\":{\"id\":\"133-6658273-5713951\"}}}},{\"data\":{\"messageId\":\"ciw1si-ak641x-4kgnnv-1dlsbg\",\"schemaId\":\"csa.Metric.4\",\"metrics\":{\"totalBlockingTime\":0,\"totalBlockingTimeInclLCP\":484,\"maxBlockingTime\":-1},\"dimensions\":{},\"timestamp\":\""
		"2024-02-07T12:04:35.871Z\",\"application\":\"Retail:Prod:www.amazon.com\",\"obfuscatedMarketplaceId\":\"ATVPDKIKX0DER\",\"lob\":\"1\",\"producerId\":\"csa\",\"entities\":{\"page\":{\"id\":\"y45xqs-v4tsc7-d3onkb-o8oc8f\",\"requestId\":\"5AFSK1C7VNHSD7KRB97Y\",\"pageType\":\"Gateway\",\"subPageType\":\"desktop\"},\"session\":{\"id\":\"133-6658273-5713951\"}}}}]}", 
		LAST);

	web_custom_request("OE_57", 
		"URL=https://fls-na.amazon.com/1/batch/1/OE/", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=https://www.amazon.com/", 
		"Snapshot=t93.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"rid\":\"5AFSK1C7VNHSD7KRB97Y\",\"sid\":\"133-6658273-5713951\",\"mid\":\"ATVPDKIKX0DER\",\"sn\":\"www.amazon.com\",\"reqs\":[{\"cel\":{\"k\":\"mmm1\",\"e\":[{\"x\":1157,\"y\":58,\"t\":31170},{\"x\":1110,\"y\":60,\"t\":32855},{\"x\":998,\"y\":23,\"t\":33418}],\"min\":99,\"max\":199,\"avg\":124}},{\"cel\":{\"k\":\"efo\",\"t\":33787,\"s\":\"default\"}},{\"cel\":{\"k\":\"mcm\",\"w\":1263,\"h\":5540,\"t\":33796,\"x\":998,\"y\":23,\"p\":\"//*[@id='nav-link-accountList-nav-line-1']\",\"n\":\""
		"SPAN\",\"dt\":8.6,\"i\":\"nav-link-accountList-nav-line-1\",\"c\":[\"nav-line-1\",\"nav-progressive-content\"]}},{\"cel\":{\"k\":\"mmm1\",\"e\":[{\"x\":998,\"y\":23,\"t\":33997}],\"min\":0,\"max\":199,\"avg\":99}},{\"cel\":{\"k\":\"hrt\",\"t\":33998}},{\"cel\":{\"k\":\"eod\",\"t0\":1707307441878,\"t\":33998}},{\"csm\":{\"k\":\"chk\",\"f\":5,\"l\":{\"cel\":64,\"csm\":5,\"jserr-rw\":52},\"s\":\"full\"}},{\"csmcount\":{\"counter\":\"foresterPayloadSize\",\"t\":0,\"value\":807}}]}", 
		LAST);

	web_add_cookie("session-id-time=2338027476l; DOMAIN=unagi.amazon.com");

	web_add_cookie("ubid-main=135-4859291-5813941; DOMAIN=unagi.amazon.com");

	web_custom_request("com.amazon.csm.csa.prod_5", 
		"URL=https://unagi.amazon.com/1/events/com.amazon.csm.csa.prod", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.amazon.com/", 
		"Snapshot=t94.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"events\":[{\"data\":{\"messageId\":\"80crc5-9s2nz9-qmqvnl-ih2a9x\",\"schemaId\":\"csa.InternalCounters.3\",\"c\":{\"cel.PDM.TotalExecutions\":{\"f\":66},\"cel.VPI.TotalExecutions\":{\"f\":1},\"cel.VPI.TotalExecutionTime\":{\"f\":0},\"cel.VPI.AverageExecutionTime\":{\"f\":0},\"cel.widgets.batchesProcessed\":{\"f\":4},\"armored-cxguardrails.unresponsive-clicks.violations\":{\"f\":0},\"armored-cxguardrails.unresponsive-clicks.violationRate\":{\"f\":0}},\"timestamp\":\"2024-02-07T12:04"
		":35.875Z\",\"application\":\"Retail:Prod:www.amazon.com\",\"obfuscatedMarketplaceId\":\"ATVPDKIKX0DER\",\"lob\":\"1\",\"producerId\":\"csa\",\"entities\":{\"page\":{\"id\":\"y45xqs-v4tsc7-d3onkb-o8oc8f\",\"requestId\":\"5AFSK1C7VNHSD7KRB97Y\",\"pageType\":\"Gateway\",\"subPageType\":\"desktop\"},\"session\":{\"id\":\"133-6658273-5713951\"}}}},{\"data\":{\"messageId\":\"uwlqn2-egfkzt-btkyzi-x2vis2\",\"schemaId\":\"csa.Metric.4\",\"metrics\":{\"firstInputDelay\":3},\"dimensions\":{},\"timestamp\":\""
		"2024-02-07T12:04:35.883Z\",\"application\":\"Retail:Prod:www.amazon.com\",\"obfuscatedMarketplaceId\":\"ATVPDKIKX0DER\",\"lob\":\"1\",\"producerId\":\"csa\",\"entities\":{\"page\":{\"id\":\"y45xqs-v4tsc7-d3onkb-o8oc8f\",\"requestId\":\"5AFSK1C7VNHSD7KRB97Y\",\"pageType\":\"Gateway\",\"subPageType\":\"desktop\"},\"session\":{\"id\":\"133-6658273-5713951\"}}}},{\"data\":{\"activity\":{\"scrollCounts\":0,\"reachedDepth\":541,\"horizontalScrollDistance\":0,\"dwellTime\":821},\"dimensions\":{\""
		"availableScreenWidth\":1280,\"availableScreenHeight\":680,\"documentWidth\":1263,\"documentHeight\":5540,\"screenWidth\":1280,\"screenHeight\":720,\"viewportWidth\":1280,\"viewportHeight\":541},\"schemaId\":\"csa.PageInteractionsSummary.2\",\"timestamp\":\"2024-02-07T12:04:36.692Z\",\"messageId\":\"tucqil-1azxdb-w6b079-bdjmtf\",\"application\":\"Retail:Prod:www.amazon.com\",\"obfuscatedMarketplaceId\":\"ATVPDKIKX0DER\",\"lob\":\"1\",\"producerId\":\"csa\",\"entities\":{\"page\":{\"id\":\""
		"y45xqs-v4tsc7-d3onkb-o8oc8f\",\"requestId\":\"5AFSK1C7VNHSD7KRB97Y\",\"pageType\":\"Gateway\",\"subPageType\":\"desktop\"},\"session\":{\"id\":\"133-6658273-5713951\"}}}},{\"data\":{\"messageId\":\"ciw1si-ak641x-4kgnnv-1dlsbg\",\"schemaId\":\"csa.Metric.4\",\"metrics\":{\"totalBlockingTime\":0,\"totalBlockingTimeInclLCP\":0,\"maxBlockingTime\":-1},\"dimensions\":{},\"timestamp\":\"2024-02-07T12:04:36.693Z\",\"application\":\"Retail:Prod:www.amazon.com\",\"obfuscatedMarketplaceId\":\"ATVPDKIKX0DER"
		"\",\"lob\":\"1\",\"producerId\":\"csa\",\"entities\":{\"page\":{\"id\":\"y45xqs-v4tsc7-d3onkb-o8oc8f\",\"requestId\":\"5AFSK1C7VNHSD7KRB97Y\",\"pageType\":\"Gateway\",\"subPageType\":\"desktop\"},\"session\":{\"id\":\"133-6658273-5713951\"}}}}]}", 
		LAST);

	web_set_sockets_option("TLS_SNI", "1");

	web_concurrent_start(NULL);

	web_url("61FHWUKEhjL._RC%7C11Fd9tJOdtL.css,11tfezETfFL.css,31Q3id-QR0L.css,31U9HrBLKmL.css_.css", 
		"URL=https://images-na.ssl-images-amazon.com/images/I/61FHWUKEhjL._RC%7C11Fd9tJOdtL.css,11tfezETfFL.css,31Q3id-QR0L.css,31U9HrBLKmL.css_.css?AUIClients/AmazonUI", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=https://www.amazon.com/", 
		"Snapshot=t95.inf", 
		LAST);

	web_url("01SdjaY0ZsL._RC%7C31jdWD+JB+L.css,51ndJ60shfL.css_.css", 
		"URL=https://images-na.ssl-images-amazon.com/images/I/01SdjaY0ZsL._RC%7C31jdWD+JB+L.css,51ndJ60shfL.css_.css?AUIClients/AuthenticationPortalAssets", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=https://www.amazon.com/", 
		"Snapshot=t96.inf", 
		LAST);

	web_url("21PFuszay6L.css", 
		"URL=https://images-na.ssl-images-amazon.com/images/I/21PFuszay6L.css?AUIClients/CVFAssets", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=https://www.amazon.com/", 
		"Snapshot=t97.inf", 
		LAST);

	web_url("61yXDIPmT-L._RC%7C11Y+5x+kkTL.js,51KMV3Cz2XL.js,31x4ENTlVIL.js,31f4+QIEeqL.js,01N6xzIJxbL.js,518BI433aLL.js,01rpauTep4L.js,31QZSjMuoeL.js,61ofwvddDeL.js,01KsMxlPtzL.js_.js", 
		"URL=https://images-na.ssl-images-amazon.com/images/I/61yXDIPmT-L._RC%7C11Y+5x+kkTL.js,51KMV3Cz2XL.js,31x4ENTlVIL.js,31f4+QIEeqL.js,01N6xzIJxbL.js,518BI433aLL.js,01rpauTep4L.js,31QZSjMuoeL.js,61ofwvddDeL.js,01KsMxlPtzL.js_.js?AUIClients/AmazonUI", 
		"Resource=1", 
		"RecContentType=application/x-javascript", 
		"Referer=https://www.amazon.com/", 
		"Snapshot=t98.inf", 
		LAST);

	web_url("21ZMwVh4T0L._RC%7C21OJDARBhQL.js,218GJg15I8L.js,31lucpmF4CL.js,2119M3Ks9rL.js,61jRJeIkq3L.js_.js", 
		"URL=https://images-na.ssl-images-amazon.com/images/I/21ZMwVh4T0L._RC%7C21OJDARBhQL.js,218GJg15I8L.js,31lucpmF4CL.js,2119M3Ks9rL.js,61jRJeIkq3L.js_.js?AUIClients/AuthenticationPortalAssets&L3XM6gEo", 
		"Resource=1", 
		"RecContentType=application/x-javascript", 
		"Referer=https://www.amazon.com/", 
		"Snapshot=t99.inf", 
		LAST);

	web_url("01wGDSlxwdL.js", 
		"URL=https://images-na.ssl-images-amazon.com/images/I/01wGDSlxwdL.js?AUIClients/AuthenticationPortalInlineAssets", 
		"Resource=1", 
		"RecContentType=application/x-javascript", 
		"Referer=https://www.amazon.com/", 
		"Snapshot=t100.inf", 
		LAST);

	web_url("41De8-d1mSL.js", 
		"URL=https://images-na.ssl-images-amazon.com/images/I/41De8-d1mSL.js?AUIClients/CVFAssets", 
		"Resource=1", 
		"RecContentType=application/x-javascript", 
		"Referer=https://www.amazon.com/", 
		"Snapshot=t101.inf", 
		LAST);

	web_url("31jdfgcsPAL.js", 
		"URL=https://images-na.ssl-images-amazon.com/images/I/31jdfgcsPAL.js?AUIClients/AmazonUIFormControlsJS", 
		"Resource=1", 
		"RecContentType=application/x-javascript", 
		"Referer=https://www.amazon.com/", 
		"Snapshot=t102.inf", 
		LAST);

	web_url("717+I1mmXfL.js", 
		"URL=https://images-na.ssl-images-amazon.com/images/I/717+I1mmXfL.js?AUIClients/IdentityWebAuthnAssets", 
		"Resource=1", 
		"RecContentType=application/x-javascript", 
		"Referer=https://www.amazon.com/", 
		"Snapshot=t103.inf", 
		LAST);

	web_url("8135BpGZX3L.js", 
		"URL=https://images-na.ssl-images-amazon.com/images/I/8135BpGZX3L.js?AUIClients/SiegeClientSideEncryptionAUI", 
		"Resource=1", 
		"RecContentType=application/x-javascript", 
		"Referer=https://www.amazon.com/", 
		"Snapshot=t104.inf", 
		LAST);

	web_url("51Xm0KLvSZL.js", 
		"URL=https://images-na.ssl-images-amazon.com/images/I/51Xm0KLvSZL.js?AUIClients/IdentityJsCommonAssets", 
		"Resource=1", 
		"RecContentType=application/x-javascript", 
		"Referer=https://www.amazon.com/", 
		"Snapshot=t105.inf", 
		LAST);

	web_url("81xk1hDaq+L.js", 
		"URL=https://images-na.ssl-images-amazon.com/images/I/81xk1hDaq+L.js?AUIClients/FWCIMAssets", 
		"Resource=1", 
		"RecContentType=application/x-javascript", 
		"Referer=https://www.amazon.com/", 
		"Snapshot=t106.inf", 
		LAST);

	web_url("71gWdwzzicL.js", 
		"URL=https://images-na.ssl-images-amazon.com/images/I/71gWdwzzicL.js?AUIClients/ACICAssets", 
		"Resource=1", 
		"RecContentType=application/x-javascript", 
		"Referer=https://www.amazon.com/", 
		"Snapshot=t107.inf", 
		LAST);

	web_url("ATVPDKIKX0DER:133-6658273-5713951:562BTTCMD49RYK95H956$uedata=s:%2Fap%2Fuedata%3Fld%26v%3D0.261013.0%26id%3D562BTTCMD49RYK95H956%26sw%3D1280%26sh%3D720%26vw%3D1263%26vh%3D593%26m%3D1%26sc%3D562BTTCMD49RYK95H956%26ue%3D3%26bb%3D358%26cf%3D392%26be%3D402%26f", 
		"URL=https://fls-na.amazon.com/1/batch/1/OP/ATVPDKIKX0DER:133-6658273-5713951:562BTTCMD49RYK95H956$uedata=s"
		":%2Fap%2Fuedata%3Fld%26v%3D0.261013.0%26id%3D562BTTCMD49RYK95H956%26sw%3D1280%26sh%3D720%26vw%3D1263%26vh%3D593%26m%3D1%26sc%3D562BTTCMD49RYK95H956%26ue%3D3%26bb%3D358%26cf%3D392%26be%3D402%26fp%3D619%26fcp%3D619%26pc%3D876%26tc%3D-838%26na_%3D-838%26ul_%3D-1707307476716%26_ul%3D-1707307476716%26rd_%3D-1707307476716%26_rd%3D-1707307476716%26fe_%3D-831%26lk_%3D-829%26_lk%3D-829%26co_%3D-829%26_co%3D-811%26sc_%3D-829%26rq_%3D-810%26rs_%3D-32%26_rs%3D-20%26dl_%3D-18%26di_%3D599%26de_%3D599%26_de%3D59"
		"9%26_dc%3D876%26ld_%3D876%26_ld%3D-1707307476716%26ntd%3D0%26ty%3D0%26rc%3D0%26hob%3D1%26hoe%3D3%26ld%3D877%26t%3D1707307477593%26ctb%3D1%26rt%3Dcf%3A3-0-3-0-1-0-0__ld%3A13-10-3-0-1-0-0%26csmtags%3Daui%7Caui%3Aaui_build_date%3A3.23.1-2023-12-20%7Cfls-na-amazon-com%7Cadblk_yes%7Caui%3Asw%3Apage_proxy%3Ano_ctrl%26viz%3Dvisible%3A3%26pty%3DAuthenticationPortal%26spty%3DSignInClaimCollect%26pti%3Dundefined%26tid%3D5AFSK1C7VNHSD7KRB97Y%26aftb%3D1:882", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://www.amazon.com/", 
		"Snapshot=t108.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_custom_request("com.amazon.csm.csa.prod_6", 
		"URL=https://unagi.amazon.com/1/events/com.amazon.csm.csa.prod", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.amazon.com/", 
		"Snapshot=t109.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"events\":[{\"data\":{\"id\":\"14ax0h-4lukwb-aqvlgk-7x5mei\",\"producerId\":\"csa\",\"schemaId\":\"csa.PageEntity.1\",\"version\":1,\"attributes\":{\"id\":\"14ax0h-4lukwb-aqvlgk-7x5mei\",\"requestId\":\"562BTTCMD49RYK95H956\",\"meaningful\":\"interactive\",\"url\":\"https://www.amazon.com/ap/signin?openid.pape.max_auth_age=0&openid.return_to=https%3A%2F%2Fwww.amazon.com%2F%3F_encoding%3DUTF8%26ref_%3Dnav_ya_signin&openid.identity="
		"http%3A%2F%2Fspecs.openid.net%2Fauth%2F2.0%2Fidentifier_select&openid.assoc_handle=usflex&openid.mode=checkid_setup&openid.claimed_id=http%3A%2F%2Fspecs.openid.net%2Fauth%2F2.0%2Fidentifier_select&openid.ns=http%3A%2F%2Fspecs.openid.net%2Fauth%2F2.0\",\"server\":\"www.amazon.com\",\"path\":\"/ap/signin\",\"referrer\":\"https://www.amazon.com/\",\"title\":\"Amazon Sign-In\",\"transitionType\":\"hard\"},\"timestamp\":\"2024-02-07T12:04:37.088Z\",\"messageId\":\"kq9v9l-5cdqga-55ao2w-82g91i\",\""
		"application\":\"Other:www.amazon.com\",\"obfuscatedMarketplaceId\":\"ATVPDKIKX0DER\"}},{\"data\":{\"transitionType\":\"hard\",\"schemaId\":\"csa.PageRender.3\",\"timestamp\":\"2024-02-07T12:04:37.089Z\",\"messageId\":\"fszsds-1zf4xm-lw8dnj-j1zwtg\",\"application\":\"Other:www.amazon.com\",\"obfuscatedMarketplaceId\":\"ATVPDKIKX0DER\",\"producerId\":\"csa\",\"entities\":{\"page\":{\"id\":\"14ax0h-4lukwb-aqvlgk-7x5mei\",\"requestId\":\"562BTTCMD49RYK95H956\",\"meaningful\":\"interactive\",\"url\":\""
		"https://www.amazon.com/ap/signin?openid.pape.max_auth_age=0&openid.return_to=https%3A%2F%2Fwww.amazon.com%2F%3F_encoding%3DUTF8%26ref_%3Dnav_ya_signin&openid.identity=http%3A%2F%2Fspecs.openid.net%2Fauth%2F2.0%2Fidentifier_select&openid.assoc_handle=usflex&openid.mode=checkid_setup&openid.claimed_id=http%3A%2F%2Fspecs.openid.net%2Fauth%2F2.0%2Fidentifier_select&openid.ns=http%3A%2F%2Fspecs.openid.net%2Fauth%2F2.0\",\"server\":\"www.amazon.com\",\"path\":\"/ap/signin\",\"referrer\":\"https://"
		"www.amazon.com/\",\"title\":\"Amazon Sign-In\",\"transitionType\":\"hard\"},\"session\":{\"id\":\"133-6658273-5713951\"}}}},{\"data\":{\"messageId\":\"ipras-atezl3-cv8esv-b8116r\",\"schemaId\":\"csa.InternalCounters.2\",\"c\":{\"baselineCounter2\":{\"f\":1},\"CSMLibrarySize\":{\"f\":9753,\"s\":99136,\"l\":68703,\"c\":4},\"aui:hiResDesktop\":{\"f\":0},\"aui:pagejs:pkgExecTime\":{\"f\":2.799999999930151},\"aui:resource_count\":{\"f\":1,\"s\":55,\"l\":10,\"c\":10},\"aui:sw:sw_message_no_ctrl\":{\"f\""
		":1},\"csm.cookieSize\":{\"f\":219},\"aui:sw:ppft:error:no_ctrl\":{\"f\":1},\"CVE_HTMLPrefilter\":{\"f\":1},\"contactVerificationCVFCreate\":{\"f\":1},\"postbackImageSize\":{\"f\":704}},\"timestamp\":\"2024-02-07T12:04:37.306Z\",\"application\":\"Other:www.amazon.com\",\"obfuscatedMarketplaceId\":\"ATVPDKIKX0DER\",\"producerId\":\"csa\",\"entities\":{\"page\":{\"id\":\"14ax0h-4lukwb-aqvlgk-7x5mei\",\"requestId\":\"562BTTCMD49RYK95H956\"},\"session\":{\"id\":\"133-6658273-5713951\"}}}},{\"data\":{\""
		"id\":\"14ax0h-4lukwb-aqvlgk-7x5mei\",\"producerId\":\"csa\",\"schemaId\":\"csa.PageEntity.1\",\"version\":2,\"attributes\":{\"id\":\"14ax0h-4lukwb-aqvlgk-7x5mei\",\"requestId\":\"562BTTCMD49RYK95H956\",\"meaningful\":\"interactive\",\"url\":\"https://www.amazon.com/ap/signin?openid.pape.max_auth_age=0&openid.return_to=https%3A%2F%2Fwww.amazon.com%2F%3F_encoding%3DUTF8%26ref_%3Dnav_ya_signin&openid.identity=http%3A%2F%2Fspecs.openid.net%2Fauth%2F2.0%2Fidentifier_select&openid.assoc_handle=usflex&"
		"openid.mode=checkid_setup&openid.claimed_id=http%3A%2F%2Fspecs.openid.net%2Fauth%2F2.0%2Fidentifier_select&openid.ns=http%3A%2F%2Fspecs.openid.net%2Fauth%2F2.0\",\"server\":\"www.amazon.com\",\"path\":\"/ap/signin\",\"referrer\":\"https://www.amazon.com/\",\"title\":\"Amazon Sign-In\",\"transitionType\":\"hard\",\"pageType\":\"AuthenticationPortal\",\"subPageType\":\"SignInClaimCollect\",\"pageTypeId\":\"\"},\"timestamp\":\"2024-02-07T12:04:37.201Z\",\"messageId\":\"jnijk1-cxstj3-jasriz-c0d85e\","
		"\"application\":\"Other:www.amazon.com\",\"obfuscatedMarketplaceId\":\"ATVPDKIKX0DER\"}},{\"data\":{\"messageId\":\"vzhgew-3eyxbt-crfjvf-48hzfo\",\"markers\":{\"pageVisible\":0,\"ue\":841,\"bodyBegin\":1196,\"criticalFeature\":1230,\"bodyEnd\":1240,\"firstPaint\":1457,\"firstContentfulPaint\":1457,\"pc\":1714,\"tc\":0,\"na_\":0,\"ul_\":1718,\"_ul\":1718,\"rd_\":1718,\"_rd\":1719,\"fe_\":7,\"lk_\":9,\"_lk\":9,\"co_\":9,\"_co\":27,\"sc_\":9,\"rq_\":28,\"rs_\":806,\"_rs\":818,\"dl_\":820,\"di_\":1437"
		",\"de_\":1437,\"_de\":1437,\"_dc\":1714,\"ld_\":1714,\"_ld\":1719,\"ntd\":838,\"ty\":838,\"rc\":838,\"hob\":839,\"hoe\":841,\"loaded\":1715,\"navigationStart\":0,\"fetchStart\":7,\"domainLookupStart\":9,\"domainLookupEnd\":9,\"connectStart\":9,\"connectEnd\":27,\"secureConnectionStart\":9,\"requestStart\":28,\"responseStart\":806,\"responseEnd\":818,\"domLoading\":820,\"domInteractive\":1437,\"domContentLoadedEventStart\":1437,\"domContentLoadedEventEnd\":1437,\"domComplete\":1714,\""
		"loadEventStart\":1714},\"markerTimestamps\":{\"pageVisible\":1707307475878,\"ue\":1707307476719,\"bodyBegin\":1707307477074,\"criticalFeature\":1707307477108,\"bodyEnd\":1707307477118,\"firstPaint\":1707307477335,\"firstContentfulPaint\":1707307477335,\"pc\":1707307477592,\"tc\":1707307475878,\"na_\":1707307475878,\"ul_\":1707307477596,\"_ul\":1707307477596,\"rd_\":1707307477596,\"_rd\":1707307477597,\"fe_\":1707307475885,\"lk_\":1707307475887,\"_lk\":1707307475887,\"co_\":1707307475887,\"_co\""
		":1707307475905,\"sc_\":1707307475887,\"rq_\":1707307475906,\"rs_\":1707307476684,\"_rs\":1707307476696,\"dl_\":1707307476698,\"di_\":1707307477315,\"de_\":1707307477315,\"_de\":1707307477315,\"_dc\":1707307477592,\"ld_\":1707307477592,\"_ld\":1707307477597,\"ntd\":1707307476716,\"ty\":1707307476716,\"rc\":1707307476716,\"hob\":1707307476717,\"hoe\":1707307476719,\"loaded\":1707307477593,\"navigationStart\":1707307475878,\"fetchStart\":1707307475885,\"domainLookupStart\":1707307475887,\""
		"domainLookupEnd\":1707307475887,\"connectStart\":1707307475887,\"connectEnd\":1707307475905,\"secureConnectionStart\":1707307475887,\"requestStart\":1707307475906,\"responseStart\":1707307476684,\"responseEnd\":1707307476696,\"domLoading\":1707307476698,\"domInteractive\":1707307477315,\"domContentLoadedEventStart\":1707307477315,\"domContentLoadedEventEnd\":1707307477315,\"domComplete\":1707307477592,\"loadEventStart\":1707307477592},\"navigationStartTimestamp\":\"2024-02-07T12:04:35.878Z\",\""
		"schemaId\":\"csa.PageLatency.5\",\"timestamp\":\"2024-02-07T12:04:37.202Z\",\"application\":\"Other:www.amazon.com\",\"obfuscatedMarketplaceId\":\"ATVPDKIKX0DER\",\"producerId\":\"csa\",\"entities\":{\"page\":{\"id\":\"14ax0h-4lukwb-aqvlgk-7x5mei\",\"requestId\":\"562BTTCMD49RYK95H956\",\"pageType\":\"AuthenticationPortal\",\"subPageType\":\"SignInClaimCollect\"},\"session\":{\"id\":\"133-6658273-5713951\"}}}},{\"data\":{\"messageId\":\"ck6fxb-o9oro4-2arjs4-l6liqw\",\"schemaId\":\"csa.Metric.3\","
		"\"metrics\":{\"baselineMetricEvent\":1},\"dimensions\":{},\"timestamp\":\"2024-02-07T12:04:37.205Z\",\"application\":\"Other:www.amazon.com\",\"obfuscatedMarketplaceId\":\"ATVPDKIKX0DER\",\"producerId\":\"csa\",\"entities\":{\"page\":{\"id\":\"14ax0h-4lukwb-aqvlgk-7x5mei\",\"requestId\":\"562BTTCMD49RYK95H956\",\"pageType\":\"AuthenticationPortal\",\"subPageType\":\"SignInClaimCollect\"},\"session\":{\"id\":\"133-6658273-5713951\"}}}},{\"data\":{\"navigation\":{\"type\":\"normal\",\"toTabId\":\""
		"y45xqs-v4tsc7-d3onkb-o8oc8f\",\"toPageId\":\"14ax0h-4lukwb-aqvlgk-7x5mei\",\"transitTime\":34522,\"fromTabId\":\"y45xqs-v4tsc7-d3onkb-o8oc8f\",\"fromPageId\":\"y45xqs-v4tsc7-d3onkb-o8oc8f\",\"interactionId\":\"7km553-6st83z-5ze88e-or9p5z\"},\"schemaId\":\"csa.TabbedBrowsing.2\",\"timestamp\":\"2024-02-07T12:04:37.207Z\",\"messageId\":\"rm6eav-ifw26t-q02yh5-za26v1\",\"application\":\"Other:www.amazon.com\",\"obfuscatedMarketplaceId\":\"ATVPDKIKX0DER\",\"producerId\":\"csa\",\"entities\":{\"page\":"
		"{\"id\":\"14ax0h-4lukwb-aqvlgk-7x5mei\",\"requestId\":\"562BTTCMD49RYK95H956\",\"pageType\":\"AuthenticationPortal\",\"subPageType\":\"SignInClaimCollect\"},\"session\":{\"id\":\"133-6658273-5713951\"}}}},{\"data\":{\"network\":{\"downlink\":\"6\",\"downlinkMax\":\"null\",\"rtt\":\"50\",\"type\":\"null\",\"effectiveType\":\"4g\",\"saveData\":\"false\"},\"language\":\"en-GB\",\"doNotTrack\":null,\"hardwareConcurrency\":4,\"deviceMemory\":8,\"cookieEnabled\":true,\"webdriver\":false,\"schemaId\":\""
		"csa.Navigator.4\",\"timestamp\":\"2024-02-07T12:04:37.262Z\",\"messageId\":\"7pilcf-b94vhl-sf98ks-unqlvk\",\"application\":\"Other:www.amazon.com\",\"obfuscatedMarketplaceId\":\"ATVPDKIKX0DER\",\"producerId\":\"csa\",\"entities\":{\"page\":{\"id\":\"14ax0h-4lukwb-aqvlgk-7x5mei\",\"requestId\":\"562BTTCMD49RYK95H956\",\"pageType\":\"AuthenticationPortal\",\"subPageType\":\"SignInClaimCollect\"},\"session\":{\"id\":\"133-6658273-5713951\"}}}},{\"data\":{\"schemaId\":\"csa.ContentView.3\",\""
		"timeToViewed\":107,\"pageFirstPaintToElementViewed\":1435,\"timestamp\":\"2024-02-07T12:04:37.313Z\",\"messageId\":\"nx99xn-wf5mvx-a74c8j-b911ir\",\"application\":\"Other:www.amazon.com\",\"obfuscatedMarketplaceId\":\"ATVPDKIKX0DER\",\"producerId\":\"csa\",\"entities\":{\"page\":{\"id\":\"14ax0h-4lukwb-aqvlgk-7x5mei\",\"requestId\":\"562BTTCMD49RYK95H956\",\"pageType\":\"AuthenticationPortal\",\"subPageType\":\"SignInClaimCollect\"},\"session\":{\"id\":\"133-6658273-5713951\"},\"element\":{\"id\""
		":\"ajpq98-hz1wut-ahfnuj-nt4pcz\",\"funcDeps\":\"aui-da-a-expander-toggle\",\"type\":\"widget\",\"href\":\"javascript:void(0)\",\"class\":\"a-expander-header a-declarative a-expander-inline-header a-link-expander\"}}}},{\"data\":{\"renderedToMeaningful\":226,\"renderedToViewed\":226,\"schemaId\":\"csa.PageView.4\",\"timestamp\":\"2024-02-07T12:04:37.315Z\",\"messageId\":\"yd5d74-2s7499-hhvmhr-15fgdb\",\"application\":\"Other:www.amazon.com\",\"obfuscatedMarketplaceId\":\"ATVPDKIKX0DER\",\""
		"producerId\":\"csa\",\"entities\":{\"page\":{\"id\":\"14ax0h-4lukwb-aqvlgk-7x5mei\",\"requestId\":\"562BTTCMD49RYK95H956\",\"meaningful\":\"interactive\",\"url\":\"https://www.amazon.com/ap/signin?openid.pape.max_auth_age=0&openid.return_to=https%3A%2F%2Fwww.amazon.com%2F%3F_encoding%3DUTF8%26ref_%3Dnav_ya_signin&openid.identity=http%3A%2F%2Fspecs.openid.net%2Fauth%2F2.0%2Fidentifier_select&openid.assoc_handle=usflex&openid.mode=checkid_setup&openid.claimed_id="
		"http%3A%2F%2Fspecs.openid.net%2Fauth%2F2.0%2Fidentifier_select&openid.ns=http%3A%2F%2Fspecs.openid.net%2Fauth%2F2.0\",\"server\":\"www.amazon.com\",\"path\":\"/ap/signin\",\"referrer\":\"https://www.amazon.com/\",\"title\":\"Amazon Sign-In\",\"transitionType\":\"hard\",\"pageType\":\"AuthenticationPortal\",\"subPageType\":\"SignInClaimCollect\",\"pageTypeId\":\"\"},\"session\":{\"id\":\"133-6658273-5713951\"}}}},{\"data\":{\"network\":{\"downlink\":\"7\",\"downlinkMax\":\"null\",\"rtt\":\"100\",\""
		"type\":\"null\",\"effectiveType\":\"4g\",\"saveData\":\"false\"},\"language\":\"en-GB\",\"doNotTrack\":null,\"hardwareConcurrency\":4,\"deviceMemory\":8,\"cookieEnabled\":true,\"webdriver\":false,\"schemaId\":\"csa.Navigator.4\",\"timestamp\":\"2024-02-07T12:04:37.471Z\",\"messageId\":\"c8l4bi-5biryy-qluuyn-m39yiu\",\"application\":\"Other:www.amazon.com\",\"obfuscatedMarketplaceId\":\"ATVPDKIKX0DER\",\"producerId\":\"csa\",\"entities\":{\"page\":{\"id\":\"14ax0h-4lukwb-aqvlgk-7x5mei\",\""
		"requestId\":\"562BTTCMD49RYK95H956\",\"pageType\":\"AuthenticationPortal\",\"subPageType\":\"SignInClaimCollect\"},\"session\":{\"id\":\"133-6658273-5713951\"}}}}]}", 
		LAST);

	web_url("ATVPDKIKX0DER:133-6658273-5713951:562BTTCMD49RYK95H956$uedata=s:%2Fap%2Fuedata%3Fld%26v%3D0.261013.0%26id%3D562BTTCMD49RYK95H956%26sc0%3Daui%3Asw%3Appft%3Acallback_ricb%26bb0%3D298%26pc0%3D603%26ld0%3D603%26t0%3D1707307477319%26ctb%3D1:882", 
		"URL=https://fls-na.amazon.com/1/batch/1/OP/ATVPDKIKX0DER:133-6658273-5713951:562BTTCMD49RYK95H956$uedata=s:%2Fap%2Fuedata%3Fld%26v%3D0.261013.0%26id%3D562BTTCMD49RYK95H956%26sc0%3Daui%3Asw%3Appft%3Acallback_ricb%26bb0%3D298%26pc0%3D603%26ld0%3D603%26t0%3D1707307477319%26ctb%3D1:882", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://www.amazon.com/", 
		"Snapshot=t110.inf", 
		LAST);

	web_custom_request("OE_58", 
		"URL=https://fls-na.amazon.com/1/batch/1/OE/", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=https://www.amazon.com/", 
		"Snapshot=t111.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"rid\":\"562BTTCMD49RYK95H956\",\"sid\":\"133-6658273-5713951\",\"mid\":\"ATVPDKIKX0DER\",\"sn\":\"www.amazon.com\",\"reqs\":[{\"csmcount\":{\"counter\":\"baselineCounter2\",\"value\":1,\"t\":3}},{\"csmcount\":{\"counter\":\"CSMLibrarySize\",\"value\":9753,\"t\":3}},{\"csmcount\":{\"counter\":\"aui:hiResDesktop\",\"value\":0,\"t\":294}},{\"csmcount\":{\"counter\":\"aui:pagejs:pkgExecTime\",\"value\":2.799999999930151,\"t\":295}},{\"csmcount\":{\"counter\":\"aui:resource_count\",\"value\":1,"
		"\"t\":295}},{\"csmcount\":{\"counter\":\"aui:resource_count\",\"value\":2,\"t\":296}},{\"csmcount\":{\"counter\":\"aui:resource_count\",\"value\":3,\"t\":296}},{\"csmcount\":{\"counter\":\"aui:resource_count\",\"value\":4,\"t\":297}},{\"csmcount\":{\"counter\":\"aui:resource_count\",\"value\":5,\"t\":297}},{\"csmcount\":{\"counter\":\"aui:resource_count\",\"value\":6,\"t\":297}},{\"csmcount\":{\"counter\":\"aui:resource_count\",\"value\":7,\"t\":297}},{\"csmcount\":{\"counter\":\"aui"
		":resource_count\",\"value\":8,\"t\":297}},{\"csmcount\":{\"counter\":\"aui:resource_count\",\"value\":9,\"t\":297}},{\"csmcount\":{\"counter\":\"aui:resource_count\",\"value\":10,\"t\":297}},{\"csmcount\":{\"counter\":\"aui:sw:sw_message_no_ctrl\",\"value\":1,\"t\":298}},{\"csmcount\":{\"counter\":\"csm.cookieSize\",\"value\":219,\"t\":357}},{\"csmcount\":{\"counter\":\"CSMLibrarySize\",\"value\":3173,\"t\":358}},{\"csmcount\":{\"counter\":\"CSMLibrarySize\",\"value\":17507,\"t\":391}},{\""
		"csmcount\":{\"counter\":\"CSMLibrarySize\",\"value\":68703,\"t\":596}},{\"csmcount\":{\"counter\":\"aui:sw:ppft:error:no_ctrl\",\"value\":1,\"t\":603}},{\"csmcount\":{\"counter\":\"CVE_HTMLPrefilter\",\"value\":1,\"t\":740}},{\"csmcount\":{\"counter\":\"contactVerificationCVFCreate\",\"value\":1,\"t\":782}},{\"csmcount\":{\"counter\":\"postbackImageSize\",\"value\":704,\"t\":882}},{\"csmcount\":{\"counter\":\"aui:sw:sw_message_no_ctrl\",\"value\":1,\"t\":896}},{\"csmcount\":{\"counter\":\"aui"
		":aui-supported-rupee\",\"value\":1,\"t\":899}},{\"csm\":{\"k\":\"chk\",\"f\":1,\"l\":{\"csmcount\":25,\"csm\":1},\"s\":\"full\"}},{\"csmcount\":{\"counter\":\"foresterPayloadSize\",\"t\":0,\"value\":1886}}]}", 
		LAST);

	web_concurrent_start(NULL);

	web_url("ATVPDKIKX0DER:133-6658273-5713951:562BTTCMD49RYK95H956$uedata=s:%2Fap%2Fuedata%3Fat%26v%3D0.261013.0%26id%3D562BTTCMD49RYK95H956%26ctb%3D1%26m%3D1%26sc%3D562BTTCMD49RYK95H956%26pc%3D2301%26at%3D2301%26t%3D1707307479017%26csmtags%3Dcsm-feature-touch-enabled", 
		"URL=https://fls-na.amazon.com/1/batch/1/OP/ATVPDKIKX0DER:133-6658273-5713951:562BTTCMD49RYK95H956$uedata=s:%2Fap%2Fuedata%3Fat%26v%3D0.261013.0%26id%3D562BTTCMD49RYK95H956%26ctb%3D1%26m%3D1%26sc%3D562BTTCMD49RYK95H956%26pc%3D2301%26at%3D2301%26t%3D1707307479017%26csmtags%3Dcsm-feature-touch-enabled%3Afalse%26pty%3DAuthenticationPortal%26spty%3DSignInClaimCollect%26pti%3Dundefined%26tid%3D5AFSK1C7VNHSD7KRB97Y%26aftb%3D1:2302", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://www.amazon.com/", 
		"Snapshot=t112.inf", 
		LAST);

	web_url("ATVPDKIKX0DER:133-6658273-5713951:562BTTCMD49RYK95H956$uedata=s:%2Fap%2Fuedata%3Fat%26v%3D0.261013.0%26id%3D562BTTCMD49RYK95H956%26ctb%3D1%26m%3D1%26sc%3D562BTTCMD49RYK95H956%26pc%3D2333%26at%3D2333%26t%3D1707307479049%26pty%3DAuthenticationPortal%26spty%3", 
		"URL=https://fls-na.amazon.com/1/batch/1/OP/ATVPDKIKX0DER:133-6658273-5713951:562BTTCMD49RYK95H956$uedata=s:%2Fap%2Fuedata%3Fat%26v%3D0.261013.0%26id%3D562BTTCMD49RYK95H956%26ctb%3D1%26m%3D1%26sc%3D562BTTCMD49RYK95H956%26pc%3D2333%26at%3D2333%26t%3D1707307479049%26pty%3DAuthenticationPortal%26spty%3DSignInClaimCollect%26pti%3Dundefined%26tid%3D5AFSK1C7VNHSD7KRB97Y%26aftb%3D1%26ui%3D2:2334", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://www.amazon.com/", 
		"Snapshot=t113.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_custom_request("com.amazon.csm.csa.prod_7", 
		"URL=https://unagi.amazon.com/1/events/com.amazon.csm.csa.prod", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.amazon.com/", 
		"Snapshot=t114.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"events\":[{\"data\":{\"messageId\":\"ipras-atezl3-cv8esv-b8116r\",\"schemaId\":\"csa.InternalCounters.2\",\"c\":{\"aui:sw:sw_message_no_ctrl\":{\"s\":2,\"l\":1,\"c\":2},\"aui:aui-supported-rupee\":{\"f\":1},\"postbackImageSize\":{\"s\":1171,\"l\":216,\"c\":3}},\"timestamp\":\"2024-02-07T12:04:37.612Z\",\"application\":\"Other:www.amazon.com\",\"obfuscatedMarketplaceId\":\"ATVPDKIKX0DER\",\"producerId\":\"csa\",\"entities\":{\"page\":{\"id\":\"14ax0h-4lukwb-aqvlgk-7x5mei\",\"requestId\":\""
		"562BTTCMD49RYK95H956\",\"pageType\":\"AuthenticationPortal\",\"subPageType\":\"SignInClaimCollect\"},\"session\":{\"id\":\"133-6658273-5713951\"}}}},{\"data\":{\"messageId\":\"vzhgew-3eyxbt-crfjvf-48hzfo\",\"markers\":{\"largestContentfulPaint\":1456,\"largestContentfulPaint.render\":1456,\"pc\":3171,\"at\":3171,\"visuallyLoaded10\":1420,\"visuallyLoaded20\":1420,\"visuallyLoaded30\":1702,\"visuallyLoaded40\":1702,\"visuallyLoaded50\":1702,\"visuallyLoaded60\":1702,\"visuallyLoaded70\":1702,\""
		"visuallyLoaded80\":1702,\"visuallyLoaded90\":1702,\"visuallyLoaded100\":1702,\"speedIndex\":1622,\"visuallyLoaded0\":0,\"atfSpeedIndex\":1622,\"cumulativeLayoutShiftLastTimestamp\":0},\"markerTimestamps\":{\"largestContentfulPaint\":1707307477334,\"largestContentfulPaint.render\":1707307477334,\"pc\":1707307479049,\"at\":1707307479049,\"visuallyLoaded10\":1707307477298,\"visuallyLoaded20\":1707307477298,\"visuallyLoaded30\":1707307477580,\"visuallyLoaded40\":1707307477580,\"visuallyLoaded50\""
		":1707307477580,\"visuallyLoaded60\":1707307477580,\"visuallyLoaded70\":1707307477580,\"visuallyLoaded80\":1707307477580,\"visuallyLoaded90\":1707307477580,\"visuallyLoaded100\":1707307477580,\"speedIndex\":1707307477500,\"visuallyLoaded0\":1707307475878,\"atfSpeedIndex\":1707307477500,\"cumulativeLayoutShiftLastTimestamp\":1707307475878},\"navigationStartTimestamp\":\"2024-02-07T12:04:35.878Z\",\"schemaId\":\"csa.PageLatency.5\",\"timestamp\":\"2024-02-07T12:04:37.615Z\",\"application\":\"Other"
		":www.amazon.com\",\"obfuscatedMarketplaceId\":\"ATVPDKIKX0DER\",\"producerId\":\"csa\",\"entities\":{\"page\":{\"id\":\"14ax0h-4lukwb-aqvlgk-7x5mei\",\"requestId\":\"562BTTCMD49RYK95H956\",\"pageType\":\"AuthenticationPortal\",\"subPageType\":\"SignInClaimCollect\"},\"session\":{\"id\":\"133-6658273-5713951\"}}}},{\"data\":{\"schemaId\":\"csa.ContentImpressed.2\",\"timeToImpressed\":1118,\"pageFirstPaintToElementImpressed\":2446,\"timestamp\":\"2024-02-07T12:04:38.324Z\",\"messageId\":\""
		"crave-i3qr7q-c8uejt-psj41b\",\"application\":\"Other:www.amazon.com\",\"obfuscatedMarketplaceId\":\"ATVPDKIKX0DER\",\"producerId\":\"csa\",\"entities\":{\"page\":{\"id\":\"14ax0h-4lukwb-aqvlgk-7x5mei\",\"requestId\":\"562BTTCMD49RYK95H956\",\"pageType\":\"AuthenticationPortal\",\"subPageType\":\"SignInClaimCollect\"},\"session\":{\"id\":\"133-6658273-5713951\"},\"element\":{\"id\":\"ajpq98-hz1wut-ahfnuj-nt4pcz\",\"funcDeps\":\"aui-da-a-expander-toggle\",\"type\":\"widget\",\"href\":\"javascript"
		":void(0)\",\"class\":\"a-expander-header a-declarative a-expander-inline-header a-link-expander\"}}}},{\"data\":{\"renderedToMeaningful\":226,\"renderedToViewed\":226,\"renderedToImpressed\":1235,\"schemaId\":\"csa.PageImpressed.2\",\"timestamp\":\"2024-02-07T12:04:38.324Z\",\"messageId\":\"9zbi1t-gfbfk8-i44ek2-4dkp2l\",\"application\":\"Other:www.amazon.com\",\"obfuscatedMarketplaceId\":\"ATVPDKIKX0DER\",\"producerId\":\"csa\",\"entities\":{\"page\":{\"id\":\"14ax0h-4lukwb-aqvlgk-7x5mei\",\""
		"requestId\":\"562BTTCMD49RYK95H956\",\"meaningful\":\"interactive\",\"url\":\"https://www.amazon.com/ap/signin?openid.pape.max_auth_age=0&openid.return_to=https%3A%2F%2Fwww.amazon.com%2F%3F_encoding%3DUTF8%26ref_%3Dnav_ya_signin&openid.identity=http%3A%2F%2Fspecs.openid.net%2Fauth%2F2.0%2Fidentifier_select&openid.assoc_handle=usflex&openid.mode=checkid_setup&openid.claimed_id=http%3A%2F%2Fspecs.openid.net%2Fauth%2F2.0%2Fidentifier_select&openid.ns=http%3A%2F%2Fspecs.openid.net%2Fauth%2F2.0\",\""
		"server\":\"www.amazon.com\",\"path\":\"/ap/signin\",\"referrer\":\"https://www.amazon.com/\",\"title\":\"Amazon Sign-In\",\"transitionType\":\"hard\",\"pageType\":\"AuthenticationPortal\",\"subPageType\":\"SignInClaimCollect\",\"pageTypeId\":\"\"},\"session\":{\"id\":\"133-6658273-5713951\"}}}},{\"data\":{\"messageId\":\"jyhxkk-l000qb-xwzca6-9yvw0q\",\"schemaId\":\"csa.ContentLatency.1\",\"markers\":{\"visuallyLoaded50\":1702,\"visuallyLoaded90\":1702},\"timestamp\":\"2024-02-07T12:04:40.135Z\",\""
		"application\":\"Other:www.amazon.com\",\"obfuscatedMarketplaceId\":\"ATVPDKIKX0DER\",\"producerId\":\"csa\",\"entities\":{\"page\":{\"id\":\"14ax0h-4lukwb-aqvlgk-7x5mei\",\"requestId\":\"562BTTCMD49RYK95H956\",\"pageType\":\"AuthenticationPortal\",\"subPageType\":\"SignInClaimCollect\"},\"session\":{\"id\":\"133-6658273-5713951\"}}}},{\"data\":{\"messageId\":\"t5qbw2-w583e3-kuuyzp-q2bmx7\",\"schemaId\":\"csa.Metric.3\",\"metrics\":{\"firstInputDelay\":67},\"dimensions\":{},\"timestamp\":\""
		"2024-02-07T12:04:41.171Z\",\"application\":\"Other:www.amazon.com\",\"obfuscatedMarketplaceId\":\"ATVPDKIKX0DER\",\"producerId\":\"csa\",\"entities\":{\"page\":{\"id\":\"14ax0h-4lukwb-aqvlgk-7x5mei\",\"requestId\":\"562BTTCMD49RYK95H956\",\"pageType\":\"AuthenticationPortal\",\"subPageType\":\"SignInClaimCollect\"},\"session\":{\"id\":\"133-6658273-5713951\"}}}},{\"data\":{\"messageId\":\"l51v30-an7on1-1t2alk-5vbvcd\",\"schemaId\":\"csa.Metric.3\",\"metrics\":{\"documentCumulativeLayoutShift\":0},"
		"\"dimensions\":{},\"timestamp\":\"2024-02-07T12:04:42.225Z\",\"application\":\"Other:www.amazon.com\",\"obfuscatedMarketplaceId\":\"ATVPDKIKX0DER\",\"producerId\":\"csa\",\"entities\":{\"page\":{\"id\":\"14ax0h-4lukwb-aqvlgk-7x5mei\",\"requestId\":\"562BTTCMD49RYK95H956\",\"pageType\":\"AuthenticationPortal\",\"subPageType\":\"SignInClaimCollect\"},\"session\":{\"id\":\"133-6658273-5713951\"}}}}]}", 
		LAST);

	lr_think_time(6);

	web_custom_request("OE_59", 
		"URL=https://fls-na.amazon.com/1/batch/1/OE/", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=https://www.amazon.com/", 
		"Snapshot=t115.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"rid\":\"562BTTCMD49RYK95H956\",\"sid\":\"133-6658273-5713951\",\"mid\":\"ATVPDKIKX0DER\",\"sn\":\"www.amazon.com\",\"reqs\":[{\"csmcount\":{\"counter\":\"postbackImageSize\",\"value\":251,\"t\":2301}},{\"csmcount\":{\"counter\":\"postbackImageSize\",\"value\":216,\"t\":2333}},{\"cel\":{\"k\":\"res_mcm\",\"t\":12080,\"m\":3}},{\"csm\":{\"k\":\"chk\",\"f\":2,\"l\":{\"csmcount\":27,\"csm\":2,\"cel\":1},\"s\":\"full\"}},{\"csmcount\":{\"counter\":\"foresterPayloadSize\",\"t\":0,\"value\":420}}"
		"]}", 
		LAST);

	web_custom_request("com.amazon.csm.csa.prod_8", 
		"URL=https://unagi.amazon.com/1/events/com.amazon.csm.csa.prod", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.amazon.com/", 
		"Snapshot=t116.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"events\":[{\"data\":{\"schemaId\":\"csa.ContentInteraction.1\",\"interaction\":\"click\",\"interactionData\":{\"interactionX\":\"644\",\"interactionY\":\"213\",\"parentChain\":\"HTML/BODY/DIV/DIV/DIV/DIV/DIV/DIV/DIV/FORM/DIV/DIV/DIV/DIV/SPAN/SPAN/INPUT\"},\"messageId\":\"oxlm5m-giu8q-ylquyz-ieo1a6\",\"attribution\":\"//*[@id='continue']\",\"timestamp\":\"2024-02-07T12:04:49.011Z\",\"application\":\"Other:www.amazon.com\",\"obfuscatedMarketplaceId\":\"ATVPDKIKX0DER\",\"producerId\":\"csa\","
		"\"entities\":{\"page\":{\"id\":\"14ax0h-4lukwb-aqvlgk-7x5mei\",\"requestId\":\"562BTTCMD49RYK95H956\",\"pageType\":\"AuthenticationPortal\",\"subPageType\":\"SignInClaimCollect\"},\"session\":{\"id\":\"133-6658273-5713951\"}}}},{\"data\":{\"messageId\":\"l51v30-an7on1-1t2alk-5vbvcd\",\"schemaId\":\"csa.Metric.3\",\"metrics\":{\"documentCumulativeLayoutShiftToFirstInput\":0},\"dimensions\":{},\"timestamp\":\"2024-02-07T12:04:49.029Z\",\"application\":\"Other:www.amazon.com\",\""
		"obfuscatedMarketplaceId\":\"ATVPDKIKX0DER\",\"producerId\":\"csa\",\"entities\":{\"page\":{\"id\":\"14ax0h-4lukwb-aqvlgk-7x5mei\",\"requestId\":\"562BTTCMD49RYK95H956\",\"pageType\":\"AuthenticationPortal\",\"subPageType\":\"SignInClaimCollect\"},\"session\":{\"id\":\"133-6658273-5713951\"}}}},{\"data\":{\"messageId\":\"ipras-atezl3-cv8esv-b8116r\",\"schemaId\":\"csa.InternalCounters.2\",\"c\":{\"SignInSubmitOnDesktop\":{\"f\":1}},\"timestamp\":\"2024-02-07T12:04:49.034Z\",\"application\":\"Other"
		":www.amazon.com\",\"obfuscatedMarketplaceId\":\"ATVPDKIKX0DER\",\"producerId\":\"csa\",\"entities\":{\"page\":{\"id\":\"14ax0h-4lukwb-aqvlgk-7x5mei\",\"requestId\":\"562BTTCMD49RYK95H956\",\"pageType\":\"AuthenticationPortal\",\"subPageType\":\"SignInClaimCollect\"},\"session\":{\"id\":\"133-6658273-5713951\"}}}},{\"data\":{\"activity\":{\"scrollCounts\":0,\"reachedDepth\":593,\"horizontalScrollDistance\":0,\"dwellTime\":12355},\"dimensions\":{\"availableScreenWidth\":1280,\"availableScreenHeight"
		"\":680,\"documentWidth\":1263,\"documentHeight\":637,\"screenWidth\":1280,\"screenHeight\":720,\"viewportWidth\":1280,\"viewportHeight\":593},\"schemaId\":\"csa.PageInteractionsSummary.1\",\"timestamp\":\"2024-02-07T12:04:49.040Z\",\"messageId\":\"81nmbf-ftjzdb-r81w27-p0lb7m\",\"application\":\"Other:www.amazon.com\",\"obfuscatedMarketplaceId\":\"ATVPDKIKX0DER\",\"producerId\":\"csa\",\"entities\":{\"page\":{\"id\":\"14ax0h-4lukwb-aqvlgk-7x5mei\",\"requestId\":\"562BTTCMD49RYK95H956\",\"pageType\""
		":\"AuthenticationPortal\",\"subPageType\":\"SignInClaimCollect\"},\"session\":{\"id\":\"133-6658273-5713951\"}}}},{\"data\":{\"messageId\":\"ghwveu-sblseo-l5bu1q-otx146\",\"schemaId\":\"csa.Metric.3\",\"metrics\":{\"totalBlockingTime\":167,\"totalBlockingTimeInclLCP\":418,\"maxBlockingTime\":59},\"dimensions\":{},\"timestamp\":\"2024-02-07T12:04:49.040Z\",\"application\":\"Other:www.amazon.com\",\"obfuscatedMarketplaceId\":\"ATVPDKIKX0DER\",\"producerId\":\"csa\",\"entities\":{\"page\":{\"id\":\""
		"14ax0h-4lukwb-aqvlgk-7x5mei\",\"requestId\":\"562BTTCMD49RYK95H956\",\"pageType\":\"AuthenticationPortal\",\"subPageType\":\"SignInClaimCollect\"},\"session\":{\"id\":\"133-6658273-5713951\"}}}}]}", 
		LAST);

	web_custom_request("OE_60", 
		"URL=https://fls-na.amazon.com/1/batch/1/OE/", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=https://www.amazon.com/", 
		"Snapshot=t117.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"rid\":\"562BTTCMD49RYK95H956\",\"sid\":\"133-6658273-5713951\",\"mid\":\"ATVPDKIKX0DER\",\"sn\":\"www.amazon.com\",\"reqs\":[{\"csmcount\":{\"counter\":\"SignInSubmitOnDesktop\",\"value\":1,\"t\":12318}},{\"csm\":{\"k\":\"chk\",\"f\":3,\"l\":{\"csmcount\":28,\"csm\":3,\"cel\":1},\"s\":\"full\"}},{\"csmcount\":{\"counter\":\"foresterPayloadSize\",\"t\":0,\"value\":317}}]}", 
		LAST);

	web_add_cookie("session-id-time=2338027490l; DOMAIN=unagi.amazon.com");

	web_add_cookie("session-token=QvzIEZ/l4T7T9EfO1Axgh+1elg14cVVRf8hJct6WeF6KKeP0pQUp2dpGOCF46XDfRtpoUhFg8bjv54efwBL3m+Nmk3zpzWYo40iuhJtVO7JXz5+93YpIf+kS5a2eFJpl4Rwh0aaKAa+KIC9for5bZZCchXeQIpINPTxVWq8/ip0O5HFJuNW/lqftsXwhL1NZVQ4OHoex/Odnfa4kUxHg96bwcTgRXa911cN+pGo2LxTs6QAq1wFAOwPRNzZgwsQbKyRYsqUKVUhdhIdqV5Zr03lra/tdM7kyocWt4qLaD8ZUomSHtAXmxwU6AKfrzKO2/iGIkAKbUUNJ9epK4dqD+Z62El4JJMFB; DOMAIN=unagi.amazon.com");

	web_custom_request("com.amazon.csm.csa.prod_9", 
		"URL=https://unagi.amazon.com/1/events/com.amazon.csm.csa.prod", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.amazon.com/", 
		"Snapshot=t118.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"events\":[{\"data\":{\"messageId\":\"ghwveu-sblseo-l5bu1q-otx146\",\"schemaId\":\"csa.Metric.3\",\"metrics\":{\"totalBlockingTime\":0,\"totalBlockingTimeInclLCP\":0,\"maxBlockingTime\":-1},\"dimensions\":{},\"timestamp\":\"2024-02-07T12:04:51.150Z\",\"application\":\"Other:www.amazon.com\",\"obfuscatedMarketplaceId\":\"ATVPDKIKX0DER\",\"producerId\":\"csa\",\"entities\":{\"page\":{\"id\":\"14ax0h-4lukwb-aqvlgk-7x5mei\",\"requestId\":\"562BTTCMD49RYK95H956\",\"pageType\":\""
		"AuthenticationPortal\",\"subPageType\":\"SignInClaimCollect\"},\"session\":{\"id\":\"133-6658273-5713951\"}}}},{\"data\":{\"activity\":{\"scrollCounts\":0,\"reachedDepth\":593,\"horizontalScrollDistance\":0,\"dwellTime\":2110},\"dimensions\":{\"availableScreenWidth\":1280,\"availableScreenHeight\":680,\"documentWidth\":1263,\"documentHeight\":637,\"screenWidth\":1280,\"screenHeight\":720,\"viewportWidth\":1280,\"viewportHeight\":593},\"schemaId\":\"csa.PageInteractionsSummary.1\",\"timestamp\":\""
		"2024-02-07T12:04:51.150Z\",\"messageId\":\"349nzg-wnyagw-t5i6ds-ab26bw\",\"application\":\"Other:www.amazon.com\",\"obfuscatedMarketplaceId\":\"ATVPDKIKX0DER\",\"producerId\":\"csa\",\"entities\":{\"page\":{\"id\":\"14ax0h-4lukwb-aqvlgk-7x5mei\",\"requestId\":\"562BTTCMD49RYK95H956\",\"pageType\":\"AuthenticationPortal\",\"subPageType\":\"SignInClaimCollect\"},\"session\":{\"id\":\"133-6658273-5713951\"}}}}]}", 
		LAST);

	web_concurrent_start(NULL);

	web_url("AuthenticationPortalSigninNA.js", 
		"URL=https://static.siege-amazon.com/prod/profiles/AuthenticationPortalSigninNA.js", 
		"Resource=1", 
		"RecContentType=text/plain", 
		"Referer=https://www.amazon.com/", 
		"Snapshot=t119.inf", 
		LAST);

	web_url("ATVPDKIKX0DER:133-6658273-5713951:5B34J2N8S2V9PGCGR72F$uedata=s:%2Fap%2Fuedata%3Fld%26v%3D0.261013.0%26id%3D5B34J2N8S2V9PGCGR72F%26sw%3D1280%26sh%3D720%26vw%3D1280%26vh%3D593%26m%3D1%26sc%3D5B34J2N8S2V9PGCGR72F%26ue%3D2%26bb%3D20%26cf%3D27%26be%3D52%26fp%3", 
		"URL=https://fls-na.amazon.com/1/batch/1/OP/ATVPDKIKX0DER:133-6658273-5713951:5B34J2N8S2V9PGCGR72F$uedata=s"
		":%2Fap%2Fuedata%3Fld%26v%3D0.261013.0%26id%3D5B34J2N8S2V9PGCGR72F%26sw%3D1280%26sh%3D720%26vw%3D1280%26vh%3D593%26m%3D1%26sc%3D5B34J2N8S2V9PGCGR72F%26ue%3D2%26bb%3D20%26cf%3D27%26be%3D52%26fp%3D48%26fcp%3D48%26pc%3D1343%26tc%3D-2121%26na_%3D-2121%26ul_%3D-14%26_ul%3D-13%26rd_%3D-1707307491165%26_rd%3D-1707307491165%26fe_%3D-2109%26lk_%3D-2109%26_lk%3D-2109%26co_%3D-2109%26_co%3D-2109%26sc_%3D-1707307491165%26rq_%3D-2107%26rs_%3D-23%26_rs%3D-20%26dl_%3D-8%26di_%3D243%26de_%3D244%26_de%3D244%26_dc%3"
		"D1343%26ld_%3D1343%26_ld%3D-1707307491165%26ntd%3D0%26ty%3D0%26rc%3D0%26hob%3D1%26hoe%3D2%26ld%3D1343%26t%3D1707307492508%26ctb%3D1%26rt%3Dcf%3A7-4-3-0-1-7-1__ld%3A15-11-3-0-3-9-1%26csmtags%3Daui%7Caui%3Aaui_build_date%3A3.23.1-2023-12-20%7Cfls-na-amazon-com%7Cadblk_yes%7Caui%3Asw%3Apage_proxy%3Ano_ctrl%26viz%3Dvisible%3A2%26pty%3DAuthenticationPortal%26spty%3DSignInPwdCollect%26pti%3Dundefined%26tid%3D5AFSK1C7VNHSD7KRB97Y%26aftb%3D1:1346", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://www.amazon.com/", 
		"Snapshot=t120.inf", 
		LAST);

	web_url("ATVPDKIKX0DER:133-6658273-5713951:5B34J2N8S2V9PGCGR72F$uedata=s:%2Fap%2Fuedata%3Fld%26v%3D0.261013.0%26id%3D5B34J2N8S2V9PGCGR72F%26sc0%3Daui%3Asw%3Appft%3Acallback_ricb%26bb0%3D19%26pc0%3D332%26ld0%3D332%26t0%3D1707307491497%26ctb%3D1:1346", 
		"URL=https://fls-na.amazon.com/1/batch/1/OP/ATVPDKIKX0DER:133-6658273-5713951:5B34J2N8S2V9PGCGR72F$uedata=s:%2Fap%2Fuedata%3Fld%26v%3D0.261013.0%26id%3D5B34J2N8S2V9PGCGR72F%26sc0%3Daui%3Asw%3Appft%3Acallback_ricb%26bb0%3D19%26pc0%3D332%26ld0%3D332%26t0%3D1707307491497%26ctb%3D1:1346", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://www.amazon.com/", 
		"Snapshot=t121.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_custom_request("com.amazon.csm.csa.prod_10", 
		"URL=https://unagi.amazon.com/1/events/com.amazon.csm.csa.prod", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.amazon.com/", 
		"Snapshot=t122.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"events\":[{\"data\":{\"id\":\"3if2ii-q77ro5-gt55l-1jrscr\",\"producerId\":\"csa\",\"schemaId\":\"csa.PageEntity.1\",\"version\":1,\"attributes\":{\"id\":\"3if2ii-q77ro5-gt55l-1jrscr\",\"requestId\":\"5B34J2N8S2V9PGCGR72F\",\"meaningful\":\"interactive\",\"url\":\"https://www.amazon.com/ap/signin\",\"server\":\"www.amazon.com\",\"path\":\"/ap/signin\",\"referrer\":\"https://www.amazon.com/ap/signin?openid.pape.max_auth_age=0&openid.return_to="
		"https%3A%2F%2Fwww.amazon.com%2F%3F_encoding%3DUTF8%26ref_%3Dnav_ya_signin&openid.identity=http%3A%2F%2Fspecs.openid.net%2Fauth%2F2.0%2Fidentifier_select&openid.assoc_handle=usflex&openid.mode=checkid_setup&openid.claimed_id=http%3A%2F%2Fspecs.openid.net%2Fauth%2F2.0%2Fidentifier_select&openid.ns=http%3A%2F%2Fspecs.openid.net%2Fauth%2F2.0\",\"title\":\"Amazon Sign-In\",\"transitionType\":\"hard\"},\"timestamp\":\"2024-02-07T12:04:51.189Z\",\"messageId\":\"jidiou-ofs38d-ergqc8-hxn13u\",\""
		"application\":\"Other:www.amazon.com\",\"obfuscatedMarketplaceId\":\"ATVPDKIKX0DER\"}},{\"data\":{\"transitionType\":\"hard\",\"schemaId\":\"csa.PageRender.3\",\"timestamp\":\"2024-02-07T12:04:51.190Z\",\"messageId\":\"u8i4zw-t4nzpm-1s2ry5-f77ovk\",\"application\":\"Other:www.amazon.com\",\"obfuscatedMarketplaceId\":\"ATVPDKIKX0DER\",\"producerId\":\"csa\",\"entities\":{\"page\":{\"id\":\"3if2ii-q77ro5-gt55l-1jrscr\",\"requestId\":\"5B34J2N8S2V9PGCGR72F\",\"meaningful\":\"interactive\",\"url\":\""
		"https://www.amazon.com/ap/signin\",\"server\":\"www.amazon.com\",\"path\":\"/ap/signin\",\"referrer\":\"https://www.amazon.com/ap/signin?openid.pape.max_auth_age=0&openid.return_to=https%3A%2F%2Fwww.amazon.com%2F%3F_encoding%3DUTF8%26ref_%3Dnav_ya_signin&openid.identity=http%3A%2F%2Fspecs.openid.net%2Fauth%2F2.0%2Fidentifier_select&openid.assoc_handle=usflex&openid.mode=checkid_setup&openid.claimed_id=http%3A%2F%2Fspecs.openid.net%2Fauth%2F2.0%2Fidentifier_select&openid.ns="
		"http%3A%2F%2Fspecs.openid.net%2Fauth%2F2.0\",\"title\":\"Amazon Sign-In\",\"transitionType\":\"hard\"},\"session\":{\"id\":\"133-6658273-5713951\"}}}},{\"data\":{\"messageId\":\"6l0o45-jeeje0-wpxlte-f8w2dp\",\"schemaId\":\"csa.InternalCounters.2\",\"c\":{\"baselineCounter2\":{\"f\":1},\"CSMLibrarySize\":{\"f\":9722,\"s\":99101,\"l\":68699,\"c\":4},\"aui:hiResDesktop\":{\"f\":0},\"aui:pagejs:pkgExecTime\":{\"f\":2.700000000069849},\"aui:resource_count\":{\"f\":1,\"s\":55,\"l\":10,\"c\":10},\"aui:sw"
		":sw_message_no_ctrl\":{\"f\":1},\"csm.cookieSize\":{\"f\":599},\"CVE_HTMLPrefilter\":{\"f\":1},\"contactVerificationCVFCreate\":{\"f\":1},\"aui:sw:ppft:error:no_ctrl\":{\"f\":1},\"postbackImageSize\":{\"f\":696}},\"timestamp\":\"2024-02-07T12:04:51.393Z\",\"application\":\"Other:www.amazon.com\",\"obfuscatedMarketplaceId\":\"ATVPDKIKX0DER\",\"producerId\":\"csa\",\"entities\":{\"page\":{\"id\":\"3if2ii-q77ro5-gt55l-1jrscr\",\"requestId\":\"5B34J2N8S2V9PGCGR72F\"},\"session\":{\"id\":\""
		"133-6658273-5713951\"}}}},{\"data\":{\"id\":\"3if2ii-q77ro5-gt55l-1jrscr\",\"producerId\":\"csa\",\"schemaId\":\"csa.PageEntity.1\",\"version\":2,\"attributes\":{\"id\":\"3if2ii-q77ro5-gt55l-1jrscr\",\"requestId\":\"5B34J2N8S2V9PGCGR72F\",\"meaningful\":\"interactive\",\"url\":\"https://www.amazon.com/ap/signin\",\"server\":\"www.amazon.com\",\"path\":\"/ap/signin\",\"referrer\":\"https://www.amazon.com/ap/signin?openid.pape.max_auth_age=0&openid.return_to="
		"https%3A%2F%2Fwww.amazon.com%2F%3F_encoding%3DUTF8%26ref_%3Dnav_ya_signin&openid.identity=http%3A%2F%2Fspecs.openid.net%2Fauth%2F2.0%2Fidentifier_select&openid.assoc_handle=usflex&openid.mode=checkid_setup&openid.claimed_id=http%3A%2F%2Fspecs.openid.net%2Fauth%2F2.0%2Fidentifier_select&openid.ns=http%3A%2F%2Fspecs.openid.net%2Fauth%2F2.0\",\"title\":\"Amazon Sign-In\",\"transitionType\":\"hard\",\"pageType\":\"AuthenticationPortal\",\"subPageType\":\"SignInPwdCollect\",\"pageTypeId\":\"\"},\""
		"timestamp\":\"2024-02-07T12:04:51.325Z\",\"messageId\":\"g10rnu-p5y65m-kes66v-2p5fbe\",\"application\":\"Other:www.amazon.com\",\"obfuscatedMarketplaceId\":\"ATVPDKIKX0DER\"}},{\"data\":{\"messageId\":\"9d0wfk-52fhju-q3wna5-sk3dqt\",\"markers\":{\"pageVisible\":0,\"ue\":2123,\"bodyBegin\":2141,\"criticalFeature\":2148,\"bodyEnd\":2173,\"firstPaint\":2169,\"firstContentfulPaint\":2169,\"pc\":3464,\"tc\":0,\"na_\":0,\"ul_\":2107,\"_ul\":2108,\"rd_\":3466,\"_rd\":3466,\"fe_\":12,\"lk_\":12,\"_lk\":12"
		",\"co_\":12,\"_co\":12,\"sc_\":3466,\"rq_\":14,\"rs_\":2098,\"_rs\":2101,\"dl_\":2113,\"di_\":2364,\"de_\":2365,\"_de\":2365,\"_dc\":3464,\"ld_\":3464,\"_ld\":3466,\"ntd\":2121,\"ty\":2121,\"rc\":2121,\"hob\":2122,\"hoe\":2123,\"loaded\":3464,\"navigationStart\":0,\"unloadEventStart\":2107,\"unloadEventEnd\":2108,\"fetchStart\":12,\"domainLookupStart\":12,\"domainLookupEnd\":12,\"connectStart\":12,\"connectEnd\":12,\"requestStart\":14,\"responseStart\":2098,\"responseEnd\":2101,\"domLoading\":2113"
		",\"domInteractive\":2364,\"domContentLoadedEventStart\":2365,\"domContentLoadedEventEnd\":2365,\"domComplete\":3464,\"loadEventStart\":3464},\"markerTimestamps\":{\"pageVisible\":1707307489044,\"ue\":1707307491167,\"bodyBegin\":1707307491185,\"criticalFeature\":1707307491192,\"bodyEnd\":1707307491217,\"firstPaint\":1707307491213,\"firstContentfulPaint\":1707307491213,\"pc\":1707307492508,\"tc\":1707307489044,\"na_\":1707307489044,\"ul_\":1707307491151,\"_ul\":1707307491152,\"rd_\":1707307492510,\""
		"_rd\":1707307492510,\"fe_\":1707307489056,\"lk_\":1707307489056,\"_lk\":1707307489056,\"co_\":1707307489056,\"_co\":1707307489056,\"sc_\":1707307492510,\"rq_\":1707307489058,\"rs_\":1707307491142,\"_rs\":1707307491145,\"dl_\":1707307491157,\"di_\":1707307491408,\"de_\":1707307491409,\"_de\":1707307491409,\"_dc\":1707307492508,\"ld_\":1707307492508,\"_ld\":1707307492510,\"ntd\":1707307491165,\"ty\":1707307491165,\"rc\":1707307491165,\"hob\":1707307491166,\"hoe\":1707307491167,\"loaded\""
		":1707307492508,\"navigationStart\":1707307489044,\"unloadEventStart\":1707307491151,\"unloadEventEnd\":1707307491152,\"fetchStart\":1707307489056,\"domainLookupStart\":1707307489056,\"domainLookupEnd\":1707307489056,\"connectStart\":1707307489056,\"connectEnd\":1707307489056,\"requestStart\":1707307489058,\"responseStart\":1707307491142,\"responseEnd\":1707307491145,\"domLoading\":1707307491157,\"domInteractive\":1707307491408,\"domContentLoadedEventStart\":1707307491409,\""
		"domContentLoadedEventEnd\":1707307491409,\"domComplete\":1707307492508,\"loadEventStart\":1707307492508},\"navigationStartTimestamp\":\"2024-02-07T12:04:49.044Z\",\"schemaId\":\"csa.PageLatency.5\",\"timestamp\":\"2024-02-07T12:04:51.325Z\",\"application\":\"Other:www.amazon.com\",\"obfuscatedMarketplaceId\":\"ATVPDKIKX0DER\",\"producerId\":\"csa\",\"entities\":{\"page\":{\"id\":\"3if2ii-q77ro5-gt55l-1jrscr\",\"requestId\":\"5B34J2N8S2V9PGCGR72F\",\"pageType\":\"AuthenticationPortal\",\""
		"subPageType\":\"SignInPwdCollect\"},\"session\":{\"id\":\"133-6658273-5713951\"}}}},{\"data\":{\"messageId\":\"vfaovg-kv2jlm-ln52xk-xxq7su\",\"schemaId\":\"csa.Metric.3\",\"metrics\":{\"baselineMetricEvent\":1},\"dimensions\":{},\"timestamp\":\"2024-02-07T12:04:51.326Z\",\"application\":\"Other:www.amazon.com\",\"obfuscatedMarketplaceId\":\"ATVPDKIKX0DER\",\"producerId\":\"csa\",\"entities\":{\"page\":{\"id\":\"3if2ii-q77ro5-gt55l-1jrscr\",\"requestId\":\"5B34J2N8S2V9PGCGR72F\",\"pageType\":\""
		"AuthenticationPortal\",\"subPageType\":\"SignInPwdCollect\"},\"session\":{\"id\":\"133-6658273-5713951\"}}}},{\"data\":{\"navigation\":{\"type\":\"normal\",\"toTabId\":\"y45xqs-v4tsc7-d3onkb-o8oc8f\",\"toPageId\":\"3if2ii-q77ro5-gt55l-1jrscr\",\"transitTime\":14156,\"fromTabId\":\"y45xqs-v4tsc7-d3onkb-o8oc8f\",\"fromPageId\":\"14ax0h-4lukwb-aqvlgk-7x5mei\",\"interactionId\":\"oxlm5m-giu8q-ylquyz-ieo1a6\"},\"schemaId\":\"csa.TabbedBrowsing.2\",\"timestamp\":\"2024-02-07T12:04:51.362Z\",\"messageId"
		"\":\"8aidc-mwhphj-u2vypx-ruao98\",\"application\":\"Other:www.amazon.com\",\"obfuscatedMarketplaceId\":\"ATVPDKIKX0DER\",\"producerId\":\"csa\",\"entities\":{\"page\":{\"id\":\"3if2ii-q77ro5-gt55l-1jrscr\",\"requestId\":\"5B34J2N8S2V9PGCGR72F\",\"pageType\":\"AuthenticationPortal\",\"subPageType\":\"SignInPwdCollect\"},\"session\":{\"id\":\"133-6658273-5713951\"}}}},{\"data\":{\"network\":{\"downlink\":\"7\",\"downlinkMax\":\"null\",\"rtt\":\"100\",\"type\":\"null\",\"effectiveType\":\"4g\",\""
		"saveData\":\"false\"},\"language\":\"en-GB\",\"doNotTrack\":null,\"hardwareConcurrency\":4,\"deviceMemory\":8,\"cookieEnabled\":true,\"webdriver\":false,\"schemaId\":\"csa.Navigator.4\",\"timestamp\":\"2024-02-07T12:04:51.364Z\",\"messageId\":\"yao7oo-2vmtyj-qgv0dg-6l4j96\",\"application\":\"Other:www.amazon.com\",\"obfuscatedMarketplaceId\":\"ATVPDKIKX0DER\",\"producerId\":\"csa\",\"entities\":{\"page\":{\"id\":\"3if2ii-q77ro5-gt55l-1jrscr\",\"requestId\":\"5B34J2N8S2V9PGCGR72F\",\"pageType\":\""
		"AuthenticationPortal\",\"subPageType\":\"SignInPwdCollect\"},\"session\":{\"id\":\"133-6658273-5713951\"}}}},{\"data\":{\"schemaId\":\"csa.ContentView.3\",\"timeToViewed\":45,\"pageFirstPaintToElementViewed\":2357,\"timestamp\":\"2024-02-07T12:04:51.401Z\",\"messageId\":\"nrwvsg-154y5v-vyvccm-lbf79j\",\"application\":\"Other:www.amazon.com\",\"obfuscatedMarketplaceId\":\"ATVPDKIKX0DER\",\"producerId\":\"csa\",\"entities\":{\"page\":{\"id\":\"3if2ii-q77ro5-gt55l-1jrscr\",\"requestId\":\""
		"5B34J2N8S2V9PGCGR72F\",\"pageType\":\"AuthenticationPortal\",\"subPageType\":\"SignInPwdCollect\"},\"session\":{\"id\":\"133-6658273-5713951\"},\"element\":{\"id\":\"hbdhlq-6isw0b-77y1d5-6yi1z\",\"type\":\"widget\",\"funcDeps\":\"aui-da-a-popover\",\"class\":\"a-declarative\"}}}},{\"data\":{\"renderedToMeaningful\":219,\"renderedToViewed\":219,\"schemaId\":\"csa.PageView.4\",\"timestamp\":\"2024-02-07T12:04:51.409Z\",\"messageId\":\"wtyfp3-585i9h-4bmnfv-nxoyuj\",\"application\":\"Other"
		":www.amazon.com\",\"obfuscatedMarketplaceId\":\"ATVPDKIKX0DER\",\"producerId\":\"csa\",\"entities\":{\"page\":{\"id\":\"3if2ii-q77ro5-gt55l-1jrscr\",\"requestId\":\"5B34J2N8S2V9PGCGR72F\",\"meaningful\":\"interactive\",\"url\":\"https://www.amazon.com/ap/signin\",\"server\":\"www.amazon.com\",\"path\":\"/ap/signin\",\"referrer\":\"https://www.amazon.com/ap/signin?openid.pape.max_auth_age=0&openid.return_to=https%3A%2F%2Fwww.amazon.com%2F%3F_encoding%3DUTF8%26ref_%3Dnav_ya_signin&openid.identity="
		"http%3A%2F%2Fspecs.openid.net%2Fauth%2F2.0%2Fidentifier_select&openid.assoc_handle=usflex&openid.mode=checkid_setup&openid.claimed_id=http%3A%2F%2Fspecs.openid.net%2Fauth%2F2.0%2Fidentifier_select&openid.ns=http%3A%2F%2Fspecs.openid.net%2Fauth%2F2.0\",\"title\":\"Amazon Sign-In\",\"transitionType\":\"hard\",\"pageType\":\"AuthenticationPortal\",\"subPageType\":\"SignInPwdCollect\",\"pageTypeId\":\"\"},\"session\":{\"id\":\"133-6658273-5713951\"}}}},{\"data\":{\"schemaId\":\"csa.ContentImpressed.2"
		"\",\"timeToImpressed\":1052,\"pageFirstPaintToElementImpressed\":3364,\"timestamp\":\"2024-02-07T12:04:52.408Z\",\"messageId\":\"ubq3hb-aefcm9-eptgt-yooj7z\",\"application\":\"Other:www.amazon.com\",\"obfuscatedMarketplaceId\":\"ATVPDKIKX0DER\",\"producerId\":\"csa\",\"entities\":{\"page\":{\"id\":\"3if2ii-q77ro5-gt55l-1jrscr\",\"requestId\":\"5B34J2N8S2V9PGCGR72F\",\"pageType\":\"AuthenticationPortal\",\"subPageType\":\"SignInPwdCollect\"},\"session\":{\"id\":\"133-6658273-5713951\"},\"element\":"
		"{\"id\":\"hbdhlq-6isw0b-77y1d5-6yi1z\",\"type\":\"widget\",\"funcDeps\":\"aui-da-a-popover\",\"class\":\"a-declarative\"}}}},{\"data\":{\"renderedToMeaningful\":219,\"renderedToViewed\":219,\"renderedToImpressed\":1233,\"schemaId\":\"csa.PageImpressed.2\",\"timestamp\":\"2024-02-07T12:04:52.423Z\",\"messageId\":\"r1o3ph-if1g79-ef8afy-tdyok0\",\"application\":\"Other:www.amazon.com\",\"obfuscatedMarketplaceId\":\"ATVPDKIKX0DER\",\"producerId\":\"csa\",\"entities\":{\"page\":{\"id\":\""
		"3if2ii-q77ro5-gt55l-1jrscr\",\"requestId\":\"5B34J2N8S2V9PGCGR72F\",\"meaningful\":\"interactive\",\"url\":\"https://www.amazon.com/ap/signin\",\"server\":\"www.amazon.com\",\"path\":\"/ap/signin\",\"referrer\":\"https://www.amazon.com/ap/signin?openid.pape.max_auth_age=0&openid.return_to=https%3A%2F%2Fwww.amazon.com%2F%3F_encoding%3DUTF8%26ref_%3Dnav_ya_signin&openid.identity=http%3A%2F%2Fspecs.openid.net%2Fauth%2F2.0%2Fidentifier_select&openid.assoc_handle=usflex&openid.mode=checkid_setup&"
		"openid.claimed_id=http%3A%2F%2Fspecs.openid.net%2Fauth%2F2.0%2Fidentifier_select&openid.ns=http%3A%2F%2Fspecs.openid.net%2Fauth%2F2.0\",\"title\":\"Amazon Sign-In\",\"transitionType\":\"hard\",\"pageType\":\"AuthenticationPortal\",\"subPageType\":\"SignInPwdCollect\",\"pageTypeId\":\"\"},\"session\":{\"id\":\"133-6658273-5713951\"}}}}]}", 
		LAST);

	web_custom_request("OE_61", 
		"URL=https://fls-na.amazon.com/1/batch/1/OE/", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=https://www.amazon.com/", 
		"Snapshot=t123.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"rid\":\"5B34J2N8S2V9PGCGR72F\",\"sid\":\"133-6658273-5713951\",\"mid\":\"ATVPDKIKX0DER\",\"sn\":\"www.amazon.com\",\"reqs\":[{\"csmcount\":{\"counter\":\"baselineCounter2\",\"value\":1,\"t\":2}},{\"csmcount\":{\"counter\":\"CSMLibrarySize\",\"value\":9722,\"t\":2}},{\"csmcount\":{\"counter\":\"aui:hiResDesktop\",\"value\":0,\"t\":15}},{\"csmcount\":{\"counter\":\"aui:pagejs:pkgExecTime\",\"value\":2.700000000069849,\"t\":16}},{\"csmcount\":{\"counter\":\"aui:resource_count\",\"value\":1,\""
		"t\":16}},{\"csmcount\":{\"counter\":\"aui:resource_count\",\"value\":2,\"t\":17}},{\"csmcount\":{\"counter\":\"aui:resource_count\",\"value\":3,\"t\":17}},{\"csmcount\":{\"counter\":\"aui:resource_count\",\"value\":4,\"t\":17}},{\"csmcount\":{\"counter\":\"aui:resource_count\",\"value\":5,\"t\":17}},{\"csmcount\":{\"counter\":\"aui:resource_count\",\"value\":6,\"t\":17}},{\"csmcount\":{\"counter\":\"aui:resource_count\",\"value\":7,\"t\":17}},{\"csmcount\":{\"counter\":\"aui:resource_count\",\""
		"value\":8,\"t\":17}},{\"csmcount\":{\"counter\":\"aui:resource_count\",\"value\":9,\"t\":18}},{\"csmcount\":{\"counter\":\"aui:resource_count\",\"value\":10,\"t\":18}},{\"csmcount\":{\"counter\":\"aui:sw:sw_message_no_ctrl\",\"value\":1,\"t\":18}},{\"csmcount\":{\"counter\":\"csm.cookieSize\",\"value\":599,\"t\":20}},{\"csmcount\":{\"counter\":\"CSMLibrarySize\",\"value\":3173,\"t\":20}},{\"csmcount\":{\"counter\":\"CSMLibrarySize\",\"value\":17507,\"t\":26}},{\"csmcount\":{\"counter\":\""
		"CSMLibrarySize\",\"value\":68699,\"t\":235}},{\"csmcount\":{\"counter\":\"CVE_HTMLPrefilter\",\"value\":1,\"t\":291}},{\"csmcount\":{\"counter\":\"contactVerificationCVFCreate\",\"value\":1,\"t\":303}},{\"csmcount\":{\"counter\":\"aui:sw:ppft:error:no_ctrl\",\"value\":1,\"t\":333}},{\"csmcount\":{\"counter\":\"postbackImageSize\",\"value\":696,\"t\":1346}},{\"csmcount\":{\"counter\":\"aui:sw:sw_message_no_ctrl\",\"value\":1,\"t\":1354}},{\"csmcount\":{\"counter\":\"aui:aui-supported-rupee\",\""
		"value\":1,\"t\":1355}},{\"csm\":{\"k\":\"chk\",\"f\":1,\"l\":{\"csmcount\":25,\"csm\":1},\"s\":\"full\"}},{\"csmcount\":{\"counter\":\"foresterPayloadSize\",\"t\":0,\"value\":1873}}]}", 
		LAST);

	web_custom_request("com.amazon.csm.csa.prod_11", 
		"URL=https://unagi.amazon.com/1/events/com.amazon.csm.csa.prod", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.amazon.com/", 
		"Snapshot=t124.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"events\":[{\"data\":{\"messageId\":\"6l0o45-jeeje0-wpxlte-f8w2dp\",\"schemaId\":\"csa.InternalCounters.2\",\"c\":{\"aui:sw:sw_message_no_ctrl\":{\"s\":2,\"l\":1,\"c\":2},\"aui:aui-supported-rupee\":{\"f\":1}},\"timestamp\":\"2024-02-07T12:04:52.519Z\",\"application\":\"Other:www.amazon.com\",\"obfuscatedMarketplaceId\":\"ATVPDKIKX0DER\",\"producerId\":\"csa\",\"entities\":{\"page\":{\"id\":\"3if2ii-q77ro5-gt55l-1jrscr\",\"requestId\":\"5B34J2N8S2V9PGCGR72F\",\"pageType\":\""
		"AuthenticationPortal\",\"subPageType\":\"SignInPwdCollect\"},\"session\":{\"id\":\"133-6658273-5713951\"}}}},{\"data\":{\"messageId\":\"9d0wfk-52fhju-q3wna5-sk3dqt\",\"markers\":{\"largestContentfulPaint\":2168,\"largestContentfulPaint.render\":2168,\"visuallyLoaded10\":2157,\"visuallyLoaded20\":2157,\"visuallyLoaded30\":2157,\"visuallyLoaded40\":2157,\"visuallyLoaded50\":2450,\"visuallyLoaded60\":2450,\"visuallyLoaded70\":2450,\"visuallyLoaded80\":2450,\"visuallyLoaded90\":2450,\""
		"visuallyLoaded100\":2450,\"speedIndex\":2316,\"visuallyLoaded0\":0,\"atfSpeedIndex\":2316,\"cumulativeLayoutShiftLastTimestamp\":2451},\"markerTimestamps\":{\"largestContentfulPaint\":1707307491212,\"largestContentfulPaint.render\":1707307491212,\"visuallyLoaded10\":1707307491201,\"visuallyLoaded20\":1707307491201,\"visuallyLoaded30\":1707307491201,\"visuallyLoaded40\":1707307491201,\"visuallyLoaded50\":1707307491494,\"visuallyLoaded60\":1707307491494,\"visuallyLoaded70\":1707307491494,\""
		"visuallyLoaded80\":1707307491494,\"visuallyLoaded90\":1707307491494,\"visuallyLoaded100\":1707307491494,\"speedIndex\":1707307491360,\"visuallyLoaded0\":1707307489044,\"atfSpeedIndex\":1707307491360,\"cumulativeLayoutShiftLastTimestamp\":1707307491495},\"navigationStartTimestamp\":\"2024-02-07T12:04:49.044Z\",\"schemaId\":\"csa.PageLatency.5\",\"timestamp\":\"2024-02-07T12:04:52.521Z\",\"application\":\"Other:www.amazon.com\",\"obfuscatedMarketplaceId\":\"ATVPDKIKX0DER\",\"producerId\":\"csa\",\""
		"entities\":{\"page\":{\"id\":\"3if2ii-q77ro5-gt55l-1jrscr\",\"requestId\":\"5B34J2N8S2V9PGCGR72F\",\"pageType\":\"AuthenticationPortal\",\"subPageType\":\"SignInPwdCollect\"},\"session\":{\"id\":\"133-6658273-5713951\"}}}},{\"data\":{\"messageId\":\"su2k70-c08o4m-rm6jdv-5pox8n\",\"schemaId\":\"csa.ContentLatency.1\",\"markers\":{\"visuallyLoaded50\":2450,\"visuallyLoaded90\":2450},\"timestamp\":\"2024-02-07T12:04:55.026Z\",\"application\":\"Other:www.amazon.com\",\"obfuscatedMarketplaceId\":\""
		"ATVPDKIKX0DER\",\"producerId\":\"csa\",\"entities\":{\"page\":{\"id\":\"3if2ii-q77ro5-gt55l-1jrscr\",\"requestId\":\"5B34J2N8S2V9PGCGR72F\",\"pageType\":\"AuthenticationPortal\",\"subPageType\":\"SignInPwdCollect\"},\"session\":{\"id\":\"133-6658273-5713951\"}}}},{\"data\":{\"messageId\":\"61ippw-3jbivy-thdzq1-scqcjh\",\"schemaId\":\"csa.Metric.3\",\"metrics\":{\"documentCumulativeLayoutShift\":0.002619698895973862},\"dimensions\":{},\"timestamp\":\"2024-02-07T12:04:56.504Z\",\"application\":\""
		"Other:www.amazon.com\",\"obfuscatedMarketplaceId\":\"ATVPDKIKX0DER\",\"producerId\":\"csa\",\"entities\":{\"page\":{\"id\":\"3if2ii-q77ro5-gt55l-1jrscr\",\"requestId\":\"5B34J2N8S2V9PGCGR72F\",\"pageType\":\"AuthenticationPortal\",\"subPageType\":\"SignInPwdCollect\"},\"session\":{\"id\":\"133-6658273-5713951\"}}}}]}", 
		LAST);

	web_concurrent_start(NULL);

	web_url("ATVPDKIKX0DER:133-6658273-5713951:5B34J2N8S2V9PGCGR72F$uedata=s:%2Fap%2Fuedata%3Fat%26v%3D0.261013.0%26id%3D5B34J2N8S2V9PGCGR72F%26ctb%3D1%26m%3D1%26sc%3D5B34J2N8S2V9PGCGR72F%26pc%3D8003%26at%3D8003%26t%3D1707307499168%26csmtags%3Dcsm-feature-touch-enabled", 
		"URL=https://fls-na.amazon.com/1/batch/1/OP/ATVPDKIKX0DER:133-6658273-5713951:5B34J2N8S2V9PGCGR72F$uedata=s:%2Fap%2Fuedata%3Fat%26v%3D0.261013.0%26id%3D5B34J2N8S2V9PGCGR72F%26ctb%3D1%26m%3D1%26sc%3D5B34J2N8S2V9PGCGR72F%26pc%3D8003%26at%3D8003%26t%3D1707307499168%26csmtags%3Dcsm-feature-touch-enabled%3Afalse%26pty%3DAuthenticationPortal%26spty%3DSignInPwdCollect%26pti%3Dundefined%26tid%3D5AFSK1C7VNHSD7KRB97Y%26aftb%3D1:8003", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://www.amazon.com/", 
		"Snapshot=t125.inf", 
		LAST);

	web_url("ATVPDKIKX0DER:133-6658273-5713951:5B34J2N8S2V9PGCGR72F$uedata=s:%2Fap%2Fuedata%3Fat%26v%3D0.261013.0%26id%3D5B34J2N8S2V9PGCGR72F%26ctb%3D1%26m%3D1%26sc%3D5B34J2N8S2V9PGCGR72F%26pc%3D8017%26at%3D8017%26t%3D1707307499182%26pty%3DAuthenticationPortal%26spty%3", 
		"URL=https://fls-na.amazon.com/1/batch/1/OP/ATVPDKIKX0DER:133-6658273-5713951:5B34J2N8S2V9PGCGR72F$uedata=s:%2Fap%2Fuedata%3Fat%26v%3D0.261013.0%26id%3D5B34J2N8S2V9PGCGR72F%26ctb%3D1%26m%3D1%26sc%3D5B34J2N8S2V9PGCGR72F%26pc%3D8017%26at%3D8017%26t%3D1707307499182%26pty%3DAuthenticationPortal%26spty%3DSignInPwdCollect%26pti%3Dundefined%26tid%3D5AFSK1C7VNHSD7KRB97Y%26aftb%3D1%26ui%3D2:8017", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://www.amazon.com/", 
		"Snapshot=t126.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_custom_request("json", 
		"URL=https://update.googleapis.com/service/update2/json?cup2key=13:rkRjPHx0OWRwVZIfnyk07uHsdo8s6afB-OROBNhEF4U&cup2hreq=ea3f5c315f8c8890907076ca6926fb8cfe024bef1c69dd92892998fa02a5615a", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t127.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"request\":{\"@os\":\"win\",\"@updater\":\"chrome\",\"acceptformat\":\"crx3,puff\",\"app\":[{\"appid\":\"ihnlcenocehgdaegdmhbidjhnhdchfmm\",\"brand\":\"GGLS\",\"cohort\":\"1::\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.aeedb246d19256a956fedaa89fb62423ae5bd8855a2a1f3189161cf045645a19\"}]},\"ping\":{\"ping_freshness\":\"{15393abf-0cb2-4be3-abad-31a8b565dd37}\",\"rd\":6246},\"updatecheck\":{},\"version\":\"1.3.36.141\"},{\"appid\":\""
		"neifaoindggfcjicffkgpmnlppeffabd\",\"brand\":\"GGLS\",\"cohort\":\"1:1299:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.c900ba9a2d8318263fd43782ee6fd5fb50bad78bf0eb2c972b5922c458af45ed\"}]},\"ping\":{\"ping_freshness\":\"{96056cca-abfa-479e-9cf2-534e54e7c456}\",\"rd\":6246},\"updatecheck\":{},\"version\":\"1.0.2738.0\"},{\"appid\":\"oimompecagnajdejgnnjijobebaeigek\",\"brand\":\"GGLS\",\"cohort\":\"1:1zdx:\",\"cohortname"
		"\":\"Chrome 106+\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"ping\":{\"ping_freshness\":\"{e8770253-dac2-4517-9d45-2f5f9aa5f684}\",\"rd\":6246},\"updatecheck\":{},\"version\":\"4.10.2710.0\"},{\"appid\":\"gcmjkmgdlgnkkcocmoeiminaijmmjnii\",\"brand\":\"GGLS\",\"cohort\":\"1:bm1:\",\"cohortname\":\"Stable\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.cd1978742a4afdbaaa15bf712d5c90bef4144caa99024df98f6a9ad58043ae85\"}]},\"ping\":{\""
		"ping_freshness\":\"{daa37317-7c24-4b77-afb7-7e03f306383e}\",\"rd\":6246},\"updatecheck\":{},\"version\":\"9.49.1\"},{\"accept_locale\":\"ENGB500000\",\"appid\":\"obedbbhbpmojnkanicioggnmelmoomoc\",\"brand\":\"GGLS\",\"cohort\":\"1:s6f:20ol@0.5\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.b9685d1e3054ce061c8c804b6e8983c6f62deb37d3882c2de2ef300666e91af3\"}]},\"ping\":{\"ping_freshness\":\""
		"{05c22848-0621-4400-b191-c1cb757111c2}\",\"rd\":6246},\"updatecheck\":{},\"version\":\"20230916.567854667.14\"},{\"appid\":\"lmelglejhemejginpboagddgdfbepgmp\",\"brand\":\"GGLS\",\"cohort\":\"1:lwl:27p3@0.1\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.cadbf9a5f27721576d77d35576f37ca01ac34d86bce73958bf71cde62af71b48\"}]},\"ping\":{\"ping_freshness\":\"{7e3cc568-d84a-4710-9341-102106c7864b}\",\"rd\":6246},\"updatecheck\":{}"
		",\"version\":\"432\"},{\"appid\":\"kiabhabjdbkjdpjbpigfodbdjmbglcoo\",\"brand\":\"GGLS\",\"cohort\":\"1:v3l:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":6133,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.4a6508925b2ffec931c1e3931ddeb15ca41d820a8264cd5a962b526e9932bcdf\"}]},\"ping\":{\"ping_freshness\":\"{c4d9f8a1-5a78-4f88-a02e-701b858614f8}\",\"rd\":6246},\"updatecheck\":{},\"version\":\"2024.1.2.1\"},{\"appid\":\"niikhdgajlphfehepabhhblakbdgeefj\",\"brand\":\"GGLS\",\""
		"cohort\":\"1:1uh3:\",\"cohortname\":\"Auto Main Cohort.\",\"enabled\":true,\"installdate\":6133,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.31fc707db886cd7b31724279d1ce873be7f1ef84f9c8b0cb0664743d47e41217\"}]},\"ping\":{\"ping_freshness\":\"{b6ee7b01-b0fa-44f6-b674-9c6cee67233a}\",\"rd\":6246},\"updatecheck\":{},\"version\":\"2024.2.5.0\"},{\"appid\":\"khaoiebndkojlmppeemjhbpbandiljpe\",\"brand\":\"GGLS\",\"cohort\":\"1:cux:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\""
		":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.f4f1eb04881095d1cc8f2e1799a8144c10476dc1088a03ecdb4418644040a554\"}]},\"ping\":{\"ping_freshness\":\"{3fdad28f-8317-4bc2-8fa0-b7cff4c75d35}\",\"rd\":6246},\"updatecheck\":{},\"version\":\"63\"},{\"appid\":\"giekcmmlnklenlaomppkphknjmnnpneh\",\"brand\":\"GGLS\",\"cohort\":\"1:j5l:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\""
		"1.fd515ec0dc30d25a09641b8b83729234bc50f4511e35ce17d24fd996252eaace\"}]},\"ping\":{\"ping_freshness\":\"{414fba68-96c3-4a24-8d72-7122bf53aad3}\",\"rd\":6246},\"updatecheck\":{},\"version\":\"7\"},{\"appid\":\"hfnkpimlhhgieaddgfemjhofmfblmnib\",\"brand\":\"GGLS\",\"cohort\":\"1:jcl:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.90f54a8ca8c3135f647fedbb5f38ecadbbae4d45dafc3b73cde0c96d924a1773\"}]},\"ping\":{\"ping_freshness\""
		":\"{504be788-05e5-4ec8-a982-cc6f9fb8e361}\",\"rd\":6246},\"updatecheck\":{},\"version\":\"8531\"},{\"appid\":\"llkgjffcdpffmhiakmfcdcblohccpfmo\",\"brand\":\"GGLS\",\"cohort\":\"1::\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.3a118962ef814c91f6476bb9f0de58afa63103af6ac1b8729be9b39a86789e96\"}]},\"ping\":{\"ping_freshness\":\"{4fe64cd8-820a-4719-8371-cecadd75662d}\",\"rd\":6246},\"updatecheck\":{},\"version\":\"1.0.0.15\"},{\"appid\":\""
		"laoigpblnllgcgjnjnllmfolckpjlhki\",\"brand\":\"GGLS\",\"cohort\":\"1:10zr:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"ping\":{\"ping_freshness\":\"{86493676-4922-47cf-af4c-55954ac2be98}\",\"rd\":6246},\"updatecheck\":{},\"version\":\"1.0.7.1652906823\"},{\"appid\":\"efniojlnjndmcbiieegkicadnoecjjef\",\"brand\":\"GGLS\",\"cohort\":\"1:18ql:\",\"cohortname\":\"Auto Stage3\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":["
		"{\"fp\":\"1.e4bdca96fb46d22bc12f5bc5bdb5cdb518555fd1762653f8afc96d06b34ec74b\"}]},\"ping\":{\"ping_freshness\":\"{abb190f2-ed50-4335-a190-6f5a22966919}\",\"rd\":6246},\"updatecheck\":{},\"version\":\"852\"},{\"appid\":\"ehgidpndbllacpjalkiimkbadgjfnnmc\",\"brand\":\"GGLS\",\"cohort\":\"1:ofl:\",\"cohortname\":\"stable64\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.a8a79d350c2a5e3bc36226633a8e0bed0dfab184e77f38fc8f0820ebacf8eafc\"}]},\"ping\":{\""
		"ping_freshness\":\"{c8144e88-f1f9-4cb0-b709-29131fe90317}\",\"rd\":6246},\"updatecheck\":{},\"version\":\"2018.8.8.0\"},{\"appid\":\"ggkkehgbnfjpeggfpleeakpidbkibbmn\",\"brand\":\"GGLS\",\"cohort\":\"1:ut9/1a0f:23ml@0.1\",\"cohortname\":\"M108 and Above\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.c45cd56a0a8da0883c8f9757b31891d6c628f38cb80724015ffdf33b419a73f3\"}]},\"ping\":{\"ping_freshness\":\"{07d9dd49-6aef-4d4a-95a9-5d3be62dc67d}\",\"rd\""
		":6246},\"updatecheck\":{},\"version\":\"2023.11.27.1202\"},{\"appid\":\"jflookgnkcckhobaglndicnbbgbonegd\",\"brand\":\"GGLS\",\"cohort\":\"1:s7x:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.363351f0d0ca05b48f43d4adac95ad01d955bb2988c015733e70e09625d47065\"}]},\"ping\":{\"ping_freshness\":\"{dd3ae393-f3e5-487c-a905-3a9009c23332}\",\"rd\":6246},\"updatecheck\":{},\"version\":\"3018\"},{\"appid\":\""
		"jamhcnnkihinmdlkakkaopbjbbcngflc\",\"brand\":\"GGLS\",\"cohort\":\"1:wvr:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.c52c62a7c50daf7d3f73ec16977cd4b0ea401710807d5dbe3850941dd1b73a70\"}]},\"ping\":{\"ping_freshness\":\"{26fc6b87-fc54-4c66-ab50-33349b4545a9}\",\"rd\":6246},\"updatecheck\":{},\"version\":\"120.0.6050.0\"},{\"appid\":\"ojhpjlocmbogdgmfpkhlaaeamibhnphh\",\"brand\":\"GGLS\",\"cohort\":\"1:w0x:\",\"cohortname"
		"\":\"All users\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.545666a4efd056351597bb386aea1368105ededc976ed5650d8682daab9f37ff\"}]},\"ping\":{\"ping_freshness\":\"{3e4bdaca-b84b-43c7-8ff0-f3ce76cbe9f6}\",\"rd\":6246},\"updatecheck\":{},\"version\":\"3\"},{\"appid\":\"jflhchccmppkfebkiaminageehmchikm\",\"brand\":\"GGLS\",\"cohort\":\"1:26yf:\",\"cohortname\":\"Stable\",\"enabled\":true,\"installdate\":6156,\"lang\":\"en-GB\",\"packages\":{\""
		"package\":[{\"fp\":\"1.1db172c73ae73d79dec3af374adec6dae1047112d5ec949045ad5bdf2b642e79\"}]},\"ping\":{\"ping_freshness\":\"{58e05ac9-25e7-42a7-b898-915e4fb1ab58}\",\"rd\":6246},\"updatecheck\":{},\"version\":\"2024.2.5.1\"},{\"appid\":\"eeigpngbgcognadeebkilcpcaedhellh\",\"brand\":\"GGLS\",\"cohort\":\"1:w59:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.c64c9c1008f3ba5f6e18b3ca524bc98dcd8acfae0a2720a8f1f3ef0f8d643d05\"}]"
		"},\"ping\":{\"ping_freshness\":\"{0f253cfe-b3a4-4d2e-9c45-f648bd73fc48}\",\"rd\":6246},\"updatecheck\":{},\"version\":\"2020.11.2.164946\"},{\"appid\":\"gonpemdgkjcecdgbnaabipppbmgfggbe\",\"brand\":\"GGLS\",\"cohort\":\"1:z1x:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.48fecfa3c6f59eb6c34fdd5e8f19e0678699e2f27dc8ebfa7025c246d4575c68\"}]},\"ping\":{\"ping_freshness\":\"{4884d1b0-737c-44cc-8f24-ee5a8ead22a8}\",\"rd\":6246"
		"},\"updatecheck\":{},\"version\":\"2024.1.17.0\"}],\"arch\":\"x64\",\"dedup\":\"cr\",\"domainjoined\":false,\"hw\":{\"avx\":true,\"physmemory\":12,\"sse\":true,\"sse2\":true,\"sse3\":true,\"sse41\":true,\"sse42\":true,\"ssse3\":true},\"ismachine\":true,\"nacl_arch\":\"x86-64\",\"os\":{\"arch\":\"x86_64\",\"platform\":\"Windows\",\"version\":\"10.0.19045.3324\"},\"prodversion\":\"121.0.6167.140\",\"protocol\":\"3.1\",\"requestid\":\"{71d5ecee-c85f-4a15-a3a6-49d03a7c7562}\",\"sessionid\":\""
		"{e28a22a0-0364-44e7-9117-7e649ae56dcb}\",\"updater\":{\"autoupdatecheckenabled\":true,\"ismachine\":true,\"lastchecked\":0,\"laststarted\":0,\"name\":\"Omaha\",\"updatepolicy\":-1,\"version\":\"1.3.36.363\"},\"updaterversion\":\"121.0.6167.140\"}}", 
		LAST);

	web_concurrent_start(NULL);

	web_url("ATVPDKIKX0DER:133-6658273-5713951:5B34J2N8S2V9PGCGR72F$uedata=s:%2Fap%2Fuedata%3Fld%26v%3D0.261013.0%26id%3D5B34J2N8S2V9PGCGR72F%26ctb%3D1%26sc0%3Dsiege%3Acse%3AencryptData%26bb0%3D11833%26cf0%3D11858%26pc0%3D11858%26ld0%3D11858%26t0%3D1707307503023%26pty%", 
		"URL=https://fls-na.amazon.com/1/batch/1/OP/ATVPDKIKX0DER:133-6658273-5713951:5B34J2N8S2V9PGCGR72F$uedata=s:%2Fap%2Fuedata%3Fld%26v%3D0.261013.0%26id%3D5B34J2N8S2V9PGCGR72F%26ctb%3D1%26sc0%3Dsiege%3Acse%3AencryptData%26bb0%3D11833%26cf0%3D11858%26pc0%3D11858%26ld0%3D11858%26t0%3D1707307503023%26pty%3DAuthenticationPortal%26spty%3DSignInPwdCollect%26pti%3Dundefined%26tid%3D5AFSK1C7VNHSD7KRB97Y%26aftb%3D1:11858", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://www.amazon.com/", 
		"Snapshot=t128.inf", 
		LAST);

	web_url("ATVPDKIKX0DER:133-6658273-5713951:5B34J2N8S2V9PGCGR72F$uedata=s:%2Fap%2Fuedata%3Fld%26v%3D0.261013.0%26id%3D5B34J2N8S2V9PGCGR72F%26ctb%3D1%26sc0%3Dsiege%3Acse%3AencryptData%3AAuthPortalSigninPasswordNA%26bb0%3D11833%26cf0%3D11858%26pc0%3D11858%26ld0%3D1185", 
		"URL=https://fls-na.amazon.com/1/batch/1/OP/ATVPDKIKX0DER:133-6658273-5713951:5B34J2N8S2V9PGCGR72F$uedata=s:%2Fap%2Fuedata%3Fld%26v%3D0.261013.0%26id%3D5B34J2N8S2V9PGCGR72F%26ctb%3D1%26sc0%3Dsiege%3Acse%3AencryptData%3AAuthPortalSigninPasswordNA%26bb0%3D11833%26cf0%3D11858%26pc0%3D11858%26ld0%3D11858%26t0%3D1707307503023%26pty%3DAuthenticationPortal%26spty%3DSignInPwdCollect%26pti%3Dundefined%26tid%3D5AFSK1C7VNHSD7KRB97Y%26aftb%3D1:11858", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://www.amazon.com/", 
		"Snapshot=t129.inf", 
		LAST);

	web_url("ATVPDKIKX0DER:133-6658273-5713951:5B34J2N8S2V9PGCGR72F$uedata=s:%2Fap%2Fuedata%3Fld%26v%3D0.261013.0%26id%3D5B34J2N8S2V9PGCGR72F%26ctb%3D1%26sc0%3Dsiege%3Acse%3AencryptString%26bb0%3D11833%26cf0%3D11859%26pc0%3D11859%26ld0%3D11859%26t0%3D1707307503024%26pt", 
		"URL=https://fls-na.amazon.com/1/batch/1/OP/ATVPDKIKX0DER:133-6658273-5713951:5B34J2N8S2V9PGCGR72F$uedata=s:%2Fap%2Fuedata%3Fld%26v%3D0.261013.0%26id%3D5B34J2N8S2V9PGCGR72F%26ctb%3D1%26sc0%3Dsiege%3Acse%3AencryptString%26bb0%3D11833%26cf0%3D11859%26pc0%3D11859%26ld0%3D11859%26t0%3D1707307503024%26pty%3DAuthenticationPortal%26spty%3DSignInPwdCollect%26pti%3Dundefined%26tid%3D5AFSK1C7VNHSD7KRB97Y%26aftb%3D1:11859", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://www.amazon.com/", 
		"Snapshot=t130.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_custom_request("com.amazon.csm.csa.prod_12", 
		"URL=https://unagi.amazon.com/1/events/com.amazon.csm.csa.prod", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.amazon.com/", 
		"Snapshot=t131.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"events\":[{\"data\":{\"messageId\":\"9d0wfk-52fhju-q3wna5-sk3dqt\",\"markers\":{\"pc\":10138,\"at\":10138},\"markerTimestamps\":{\"pc\":1707307499182,\"at\":1707307499182},\"navigationStartTimestamp\":\"2024-02-07T12:04:49.044Z\",\"schemaId\":\"csa.PageLatency.5\",\"timestamp\":\"2024-02-07T12:04:59.168Z\",\"application\":\"Other:www.amazon.com\",\"obfuscatedMarketplaceId\":\"ATVPDKIKX0DER\",\"producerId\":\"csa\",\"entities\":{\"page\":{\"id\":\"3if2ii-q77ro5-gt55l-1jrscr\",\"requestId\""
		":\"5B34J2N8S2V9PGCGR72F\",\"pageType\":\"AuthenticationPortal\",\"subPageType\":\"SignInPwdCollect\"},\"session\":{\"id\":\"133-6658273-5713951\"}}}},{\"data\":{\"messageId\":\"6l0o45-jeeje0-wpxlte-f8w2dp\",\"schemaId\":\"csa.InternalCounters.2\",\"c\":{\"postbackImageSize\":{\"s\":1159,\"l\":214,\"c\":3},\"SignInSubmitOnDesktop\":{\"f\":1}},\"timestamp\":\"2024-02-07T12:04:59.168Z\",\"application\":\"Other:www.amazon.com\",\"obfuscatedMarketplaceId\":\"ATVPDKIKX0DER\",\"producerId\":\"csa\",\""
		"entities\":{\"page\":{\"id\":\"3if2ii-q77ro5-gt55l-1jrscr\",\"requestId\":\"5B34J2N8S2V9PGCGR72F\",\"pageType\":\"AuthenticationPortal\",\"subPageType\":\"SignInPwdCollect\"},\"session\":{\"id\":\"133-6658273-5713951\"}}}},{\"data\":{\"messageId\":\"5ulez5-du4ecb-27e3ie-olbv18\",\"schemaId\":\"csa.Metric.3\",\"metrics\":{\"firstInputDelay\":0.40000000002328306},\"dimensions\":{},\"timestamp\":\"2024-02-07T12:05:00.056Z\",\"application\":\"Other:www.amazon.com\",\"obfuscatedMarketplaceId\":\""
		"ATVPDKIKX0DER\",\"producerId\":\"csa\",\"entities\":{\"page\":{\"id\":\"3if2ii-q77ro5-gt55l-1jrscr\",\"requestId\":\"5B34J2N8S2V9PGCGR72F\",\"pageType\":\"AuthenticationPortal\",\"subPageType\":\"SignInPwdCollect\"},\"session\":{\"id\":\"133-6658273-5713951\"}}}},{\"data\":{\"schemaId\":\"csa.ContentInteraction.1\",\"interaction\":\"click\",\"interactionData\":{\"interactionX\":\"641\",\"interactionY\":\"251\",\"parentChain\":\"HTML/BODY/DIV/DIV/DIV/DIV/DIV/DIV/DIV/DIV/FORM/DIV/DIV/SPAN/SPAN/"
		"INPUT\"},\"messageId\":\"g1w2h5-t3g9w8-84nxih-90mkie\",\"attribution\":\"//*[@id='signInSubmit']\",\"timestamp\":\"2024-02-07T12:05:02.975Z\",\"application\":\"Other:www.amazon.com\",\"obfuscatedMarketplaceId\":\"ATVPDKIKX0DER\",\"producerId\":\"csa\",\"entities\":{\"page\":{\"id\":\"3if2ii-q77ro5-gt55l-1jrscr\",\"requestId\":\"5B34J2N8S2V9PGCGR72F\",\"pageType\":\"AuthenticationPortal\",\"subPageType\":\"SignInPwdCollect\"},\"session\":{\"id\":\"133-6658273-5713951\"}}}},{\"data\":{\"messageId\""
		":\"61ippw-3jbivy-thdzq1-scqcjh\",\"schemaId\":\"csa.Metric.3\",\"metrics\":{\"documentCumulativeLayoutShiftToFirstInput\":0.002619698895973862},\"dimensions\":{},\"timestamp\":\"2024-02-07T12:05:02.986Z\",\"application\":\"Other:www.amazon.com\",\"obfuscatedMarketplaceId\":\"ATVPDKIKX0DER\",\"producerId\":\"csa\",\"entities\":{\"page\":{\"id\":\"3if2ii-q77ro5-gt55l-1jrscr\",\"requestId\":\"5B34J2N8S2V9PGCGR72F\",\"pageType\":\"AuthenticationPortal\",\"subPageType\":\"SignInPwdCollect\"},\"session"
		"\":{\"id\":\"133-6658273-5713951\"}}}},{\"data\":{\"activity\":{\"scrollCounts\":0,\"reachedDepth\":593,\"horizontalScrollDistance\":0,\"dwellTime\":11886},\"dimensions\":{\"availableScreenWidth\":1280,\"availableScreenHeight\":680,\"documentWidth\":1280,\"documentHeight\":593,\"screenWidth\":1280,\"screenHeight\":720,\"viewportWidth\":1280,\"viewportHeight\":593},\"schemaId\":\"csa.PageInteractionsSummary.1\",\"timestamp\":\"2024-02-07T12:05:03.029Z\",\"messageId\":\"aty5o4-7xkbt6-a5ys3l-5x7icn\""
		",\"application\":\"Other:www.amazon.com\",\"obfuscatedMarketplaceId\":\"ATVPDKIKX0DER\",\"producerId\":\"csa\",\"entities\":{\"page\":{\"id\":\"3if2ii-q77ro5-gt55l-1jrscr\",\"requestId\":\"5B34J2N8S2V9PGCGR72F\",\"pageType\":\"AuthenticationPortal\",\"subPageType\":\"SignInPwdCollect\"},\"session\":{\"id\":\"133-6658273-5713951\"}}}},{\"data\":{\"messageId\":\"2cfclo-b45dw7-boe0vh-9majb5\",\"schemaId\":\"csa.Metric.3\",\"metrics\":{\"totalBlockingTime\":0,\"totalBlockingTimeInclLCP\":177,\""
		"maxBlockingTime\":-1},\"dimensions\":{},\"timestamp\":\"2024-02-07T12:05:03.029Z\",\"application\":\"Other:www.amazon.com\",\"obfuscatedMarketplaceId\":\"ATVPDKIKX0DER\",\"producerId\":\"csa\",\"entities\":{\"page\":{\"id\":\"3if2ii-q77ro5-gt55l-1jrscr\",\"requestId\":\"5B34J2N8S2V9PGCGR72F\",\"pageType\":\"AuthenticationPortal\",\"subPageType\":\"SignInPwdCollect\"},\"session\":{\"id\":\"133-6658273-5713951\"}}}}]}", 
		LAST);

	web_concurrent_start(NULL);

	web_url("ATVPDKIKX0DER:133-6658273-5713951:5B34J2N8S2V9PGCGR72F$uedata=s:%2Fap%2Fuedata%3Fld%26v%3D0.261013.0%26id%3D5B34J2N8S2V9PGCGR72F%26ctb%3D1%26sc0%3Dsiege%3Acse%3AencryptString%3AAuthPortalSigninPasswordNA%26bb0%3D11833%26cf0%3D11859%26pc0%3D11859%26ld0%3D11", 
		"URL=https://fls-na.amazon.com/1/batch/1/OP/ATVPDKIKX0DER:133-6658273-5713951:5B34J2N8S2V9PGCGR72F$uedata=s:%2Fap%2Fuedata%3Fld%26v%3D0.261013.0%26id%3D5B34J2N8S2V9PGCGR72F%26ctb%3D1%26sc0%3Dsiege%3Acse%3AencryptString%3AAuthPortalSigninPasswordNA%26bb0%3D11833%26cf0%3D11859%26pc0%3D11859%26ld0%3D11859%26t0%3D1707307503024%26pty%3DAuthenticationPortal%26spty%3DSignInPwdCollect%26pti%3Dundefined%26tid%3D5AFSK1C7VNHSD7KRB97Y%26aftb%3D1:11859", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://www.amazon.com/", 
		"Snapshot=t132.inf", 
		LAST);

	web_url("ATVPDKIKX0DER:133-6658273-5713951:5B34J2N8S2V9PGCGR72F$uedata=s:%2Fap%2Fuedata%3Fld%26v%3D0.261013.0%26id%3D5B34J2N8S2V9PGCGR72F%26ctb%3D1%26sc0%3Dsiege%3Acse%3AgenerateProcessedForm%26bb0%3D11831%26cf0%3D11860%26pc0%3D11860%26ld0%3D11860%26t0%3D1707307503", 
		"URL=https://fls-na.amazon.com/1/batch/1/OP/ATVPDKIKX0DER:133-6658273-5713951:5B34J2N8S2V9PGCGR72F$uedata=s:%2Fap%2Fuedata%3Fld%26v%3D0.261013.0%26id%3D5B34J2N8S2V9PGCGR72F%26ctb%3D1%26sc0%3Dsiege%3Acse%3AgenerateProcessedForm%26bb0%3D11831%26cf0%3D11860%26pc0%3D11860%26ld0%3D11860%26t0%3D1707307503025%26pty%3DAuthenticationPortal%26spty%3DSignInPwdCollect%26pti%3Dundefined%26tid%3D5AFSK1C7VNHSD7KRB97Y%26aftb%3D1:11860", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://www.amazon.com/", 
		"Snapshot=t133.inf", 
		LAST);

	web_url("ATVPDKIKX0DER:133-6658273-5713951:5B34J2N8S2V9PGCGR72F$uedata=s:%2Fap%2Fuedata%3Fld%26v%3D0.261013.0%26id%3D5B34J2N8S2V9PGCGR72F%26ctb%3D1%26sc0%3Dsiege%3Acse%3AgenerateProcessedForm%3AAuthenticationPortalSigninNA%26bb0%3D11831%26cf0%3D11861%26pc0%3D11861%", 
		"URL=https://fls-na.amazon.com/1/batch/1/OP/ATVPDKIKX0DER:133-6658273-5713951:5B34J2N8S2V9PGCGR72F$uedata=s:%2Fap%2Fuedata%3Fld%26v%3D0.261013.0%26id%3D5B34J2N8S2V9PGCGR72F%26ctb%3D1%26sc0%3Dsiege%3Acse%3AgenerateProcessedForm%3AAuthenticationPortalSigninNA%26bb0%3D11831%26cf0%3D11861%26pc0%3D11861%26ld0%3D11861%26t0%3D1707307503026%26pty%3DAuthenticationPortal%26spty%3DSignInPwdCollect%26pti%3Dundefined%26tid%3D5AFSK1C7VNHSD7KRB97Y%26aftb%3D1:11861", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://www.amazon.com/", 
		"Snapshot=t134.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_custom_request("OE_62", 
		"URL=https://fls-na.amazon.com/1/batch/1/OE/", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=https://www.amazon.com/", 
		"Snapshot=t135.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"rid\":\"5B34J2N8S2V9PGCGR72F\",\"sid\":\"133-6658273-5713951\",\"mid\":\"ATVPDKIKX0DER\",\"sn\":\"www.amazon.com\",\"reqs\":[{\"csmcount\":{\"counter\":\"postbackImageSize\",\"value\":249,\"t\":8003}},{\"csmcount\":{\"counter\":\"postbackImageSize\",\"value\":214,\"t\":8017}},{\"cel\":{\"k\":\"res_mcm\",\"t\":11597,\"m\":5}},{\"csmcount\":{\"counter\":\"SignInSubmitOnDesktop\",\"value\":1,\"t\":11841}},{\"csm\":{\"k\":\"chk\",\"f\":2,\"l\":{\"csmcount\":28,\"csm\":2,\"cel\":1},\"s\":\""
		"full\"}},{\"csmcount\":{\"counter\":\"foresterPayloadSize\",\"t\":0,\"value\":489}}]}", 
		LAST);

	web_add_cookie("session-id-time=2338027505l; DOMAIN=unagi.amazon.com");

	web_custom_request("com.amazon.csm.csa.prod_13", 
		"URL=https://unagi.amazon.com/1/events/com.amazon.csm.csa.prod", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.amazon.com/", 
		"Snapshot=t136.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"events\":[{\"data\":{\"messageId\":\"2cfclo-b45dw7-boe0vh-9majb5\",\"schemaId\":\"csa.Metric.3\",\"metrics\":{\"totalBlockingTime\":0,\"totalBlockingTimeInclLCP\":0,\"maxBlockingTime\":-1},\"dimensions\":{},\"timestamp\":\"2024-02-07T12:05:05.420Z\",\"application\":\"Other:www.amazon.com\",\"obfuscatedMarketplaceId\":\"ATVPDKIKX0DER\",\"producerId\":\"csa\",\"entities\":{\"page\":{\"id\":\"3if2ii-q77ro5-gt55l-1jrscr\",\"requestId\":\"5B34J2N8S2V9PGCGR72F\",\"pageType\":\""
		"AuthenticationPortal\",\"subPageType\":\"SignInPwdCollect\"},\"session\":{\"id\":\"133-6658273-5713951\"}}}},{\"data\":{\"activity\":{\"scrollCounts\":0,\"reachedDepth\":593,\"horizontalScrollDistance\":0,\"dwellTime\":2393},\"dimensions\":{\"availableScreenWidth\":1280,\"availableScreenHeight\":680,\"documentWidth\":1280,\"documentHeight\":593,\"screenWidth\":1280,\"screenHeight\":720,\"viewportWidth\":1280,\"viewportHeight\":593},\"schemaId\":\"csa.PageInteractionsSummary.1\",\"timestamp\":\""
		"2024-02-07T12:05:05.421Z\",\"messageId\":\"xyu1ac-k0hamm-5w5voy-bif4yy\",\"application\":\"Other:www.amazon.com\",\"obfuscatedMarketplaceId\":\"ATVPDKIKX0DER\",\"producerId\":\"csa\",\"entities\":{\"page\":{\"id\":\"3if2ii-q77ro5-gt55l-1jrscr\",\"requestId\":\"5B34J2N8S2V9PGCGR72F\",\"pageType\":\"AuthenticationPortal\",\"subPageType\":\"SignInPwdCollect\"},\"session\":{\"id\":\"133-6658273-5713951\"}}}}]}", 
		LAST);

	web_concurrent_start(NULL);

	web_url("mPGmT0r6IeTyIee.png", 
		"URL=https://m.media-amazon.com/images/S/sash/mPGmT0r6IeTyIee.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=https://images-na.ssl-images-amazon.com/", 
		"Snapshot=t137.inf", 
		LAST);

	web_url("ATVPDKIKX0DER:133-6658273-5713951:872T2YKBQ37B6SB0SKCW$uedata=s:%2Fap%2Fuedata%3Fld%26v%3D0.261013.0%26id%3D872T2YKBQ37B6SB0SKCW%26sc0%3Daui%3Asw%3Appft%3Acallback_ricb%26bb0%3D16%26pc0%3D272%26ld0%3D272%26t0%3D1707307505708%26ctb%3D1:481", 
		"URL=https://fls-na.amazon.com/1/batch/1/OP/ATVPDKIKX0DER:133-6658273-5713951:872T2YKBQ37B6SB0SKCW$uedata=s:%2Fap%2Fuedata%3Fld%26v%3D0.261013.0%26id%3D872T2YKBQ37B6SB0SKCW%26sc0%3Daui%3Asw%3Appft%3Acallback_ricb%26bb0%3D16%26pc0%3D272%26ld0%3D272%26t0%3D1707307505708%26ctb%3D1:481", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://www.amazon.com/", 
		"Snapshot=t138.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_custom_request("com.amazon.csm.csa.prod_14", 
		"URL=https://unagi.amazon.com/1/events/com.amazon.csm.csa.prod", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.amazon.com/", 
		"Snapshot=t139.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"events\":[{\"data\":{\"id\":\"v31liq-yzr5w5-v4abjy-k1lunn\",\"producerId\":\"csa\",\"schemaId\":\"csa.PageEntity.1\",\"version\":1,\"attributes\":{\"id\":\"v31liq-yzr5w5-v4abjy-k1lunn\",\"requestId\":\"872T2YKBQ37B6SB0SKCW\",\"meaningful\":\"interactive\",\"url\":\"https://www.amazon.com/ap/signin\",\"server\":\"www.amazon.com\",\"path\":\"/ap/signin\",\"referrer\":\"https://www.amazon.com/ap/signin\",\"title\":\"Amazon Sign-In\",\"transitionType\":\"hard\"},\"timestamp\":\"2024-02-07T12"
		":05:05.459Z\",\"messageId\":\"h5y2jy-q9d2w1-sge2k-423cmd\",\"application\":\"Other:www.amazon.com\",\"obfuscatedMarketplaceId\":\"ATVPDKIKX0DER\"}},{\"data\":{\"transitionType\":\"hard\",\"schemaId\":\"csa.PageRender.3\",\"timestamp\":\"2024-02-07T12:05:05.459Z\",\"messageId\":\"1qkr2u-zftp1s-ockgbp-ypoeok\",\"application\":\"Other:www.amazon.com\",\"obfuscatedMarketplaceId\":\"ATVPDKIKX0DER\",\"producerId\":\"csa\",\"entities\":{\"page\":{\"id\":\"v31liq-yzr5w5-v4abjy-k1lunn\",\"requestId\":\""
		"872T2YKBQ37B6SB0SKCW\",\"meaningful\":\"interactive\",\"url\":\"https://www.amazon.com/ap/signin\",\"server\":\"www.amazon.com\",\"path\":\"/ap/signin\",\"referrer\":\"https://www.amazon.com/ap/signin\",\"title\":\"Amazon Sign-In\",\"transitionType\":\"hard\"},\"session\":{\"id\":\"133-6658273-5713951\"}}}},{\"data\":{\"messageId\":\"180p0h-18hz0j-3txfyz-7lt4pz\",\"schemaId\":\"csa.InternalCounters.2\",\"c\":{\"baselineCounter2\":{\"f\":1},\"CSMLibrarySize\":{\"f\":9743,\"s\":99122,\"l\":68699,\""
		"c\":4},\"aui:hiResDesktop\":{\"f\":0},\"aui:pagejs:pkgExecTime\":{\"f\":1.6999999999534339},\"aui:resource_count\":{\"f\":1,\"s\":55,\"l\":10,\"c\":10},\"aui:sw:sw_message_no_ctrl\":{\"f\":1},\"csm.cookieSize\":{\"f\":599},\"CVE_HTMLPrefilter\":{\"f\":1},\"contactVerificationCVFCreate\":{\"f\":1},\"aui:sw:ppft:error:no_ctrl\":{\"f\":1},\"postbackImageSize\":{\"f\":696}},\"timestamp\":\"2024-02-07T12:05:05.522Z\",\"application\":\"Other:www.amazon.com\",\"obfuscatedMarketplaceId\":\"ATVPDKIKX0DER\""
		",\"producerId\":\"csa\",\"entities\":{\"page\":{\"id\":\"v31liq-yzr5w5-v4abjy-k1lunn\",\"requestId\":\"872T2YKBQ37B6SB0SKCW\"},\"session\":{\"id\":\"133-6658273-5713951\"}}}},{\"data\":{\"id\":\"v31liq-yzr5w5-v4abjy-k1lunn\",\"producerId\":\"csa\",\"schemaId\":\"csa.PageEntity.1\",\"version\":2,\"attributes\":{\"id\":\"v31liq-yzr5w5-v4abjy-k1lunn\",\"requestId\":\"872T2YKBQ37B6SB0SKCW\",\"meaningful\":\"interactive\",\"url\":\"https://www.amazon.com/ap/signin\",\"server\":\"www.amazon.com\",\""
		"path\":\"/ap/signin\",\"referrer\":\"https://www.amazon.com/ap/signin\",\"title\":\"Amazon Sign-In\",\"transitionType\":\"hard\",\"pageType\":\"AuthenticationPortal\",\"subPageType\":\"SignInPwdCollect\",\"pageTypeId\":\"\"},\"timestamp\":\"2024-02-07T12:05:05.490Z\",\"messageId\":\"4qo7hs-81uaxc-6akzsl-m0leh5\",\"application\":\"Other:www.amazon.com\",\"obfuscatedMarketplaceId\":\"ATVPDKIKX0DER\"}},{\"data\":{\"messageId\":\"vzyycy-p7qn5s-4f6unn-dfqt3e\",\"markers\":{\"pageVisible\":0,\"ue\":2401"
		",\"bodyBegin\":2417,\"criticalFeature\":2444,\"bodyEnd\":2450,\"firstPaint\":2443,\"firstContentfulPaint\":2443,\"pc\":2877,\"tc\":0,\"na_\":0,\"ul_\":2385,\"_ul\":2386,\"rd_\":2879,\"_rd\":2879,\"fe_\":17,\"lk_\":17,\"_lk\":17,\"co_\":17,\"_co\":17,\"sc_\":2879,\"rq_\":20,\"rs_\":2376,\"_rs\":2379,\"dl_\":2390,\"di_\":2502,\"de_\":2502,\"_de\":2502,\"_dc\":2876,\"ld_\":2877,\"_ld\":2879,\"ntd\":2399,\"ty\":2399,\"rc\":2399,\"hob\":2400,\"hoe\":2402,\"loaded\":2877,\"navigationStart\":0,\""
		"unloadEventStart\":2385,\"unloadEventEnd\":2386,\"fetchStart\":17,\"domainLookupStart\":17,\"domainLookupEnd\":17,\"connectStart\":17,\"connectEnd\":17,\"requestStart\":20,\"responseStart\":2376,\"responseEnd\":2379,\"domLoading\":2390,\"domInteractive\":2502,\"domContentLoadedEventStart\":2502,\"domContentLoadedEventEnd\":2502,\"domComplete\":2876,\"loadEventStart\":2877},\"markerTimestamps\":{\"pageVisible\":1707307503037,\"ue\":1707307505438,\"bodyBegin\":1707307505454,\"criticalFeature\""
		":1707307505481,\"bodyEnd\":1707307505487,\"firstPaint\":1707307505480,\"firstContentfulPaint\":1707307505480,\"pc\":1707307505914,\"tc\":1707307503037,\"na_\":1707307503037,\"ul_\":1707307505422,\"_ul\":1707307505423,\"rd_\":1707307505916,\"_rd\":1707307505916,\"fe_\":1707307503054,\"lk_\":1707307503054,\"_lk\":1707307503054,\"co_\":1707307503054,\"_co\":1707307503054,\"sc_\":1707307505916,\"rq_\":1707307503057,\"rs_\":1707307505413,\"_rs\":1707307505416,\"dl_\":1707307505427,\"di_\":1707307505539"
		",\"de_\":1707307505539,\"_de\":1707307505539,\"_dc\":1707307505913,\"ld_\":1707307505914,\"_ld\":1707307505916,\"ntd\":1707307505436,\"ty\":1707307505436,\"rc\":1707307505436,\"hob\":1707307505437,\"hoe\":1707307505439,\"loaded\":1707307505914,\"navigationStart\":1707307503037,\"unloadEventStart\":1707307505422,\"unloadEventEnd\":1707307505423,\"fetchStart\":1707307503054,\"domainLookupStart\":1707307503054,\"domainLookupEnd\":1707307503054,\"connectStart\":1707307503054,\"connectEnd\""
		":1707307503054,\"requestStart\":1707307503057,\"responseStart\":1707307505413,\"responseEnd\":1707307505416,\"domLoading\":1707307505427,\"domInteractive\":1707307505539,\"domContentLoadedEventStart\":1707307505539,\"domContentLoadedEventEnd\":1707307505539,\"domComplete\":1707307505913,\"loadEventStart\":1707307505914},\"navigationStartTimestamp\":\"2024-02-07T12:05:03.037Z\",\"schemaId\":\"csa.PageLatency.5\",\"timestamp\":\"2024-02-07T12:05:05.490Z\",\"application\":\"Other:www.amazon.com\",\""
		"obfuscatedMarketplaceId\":\"ATVPDKIKX0DER\",\"producerId\":\"csa\",\"entities\":{\"page\":{\"id\":\"v31liq-yzr5w5-v4abjy-k1lunn\",\"requestId\":\"872T2YKBQ37B6SB0SKCW\",\"pageType\":\"AuthenticationPortal\",\"subPageType\":\"SignInPwdCollect\"},\"session\":{\"id\":\"133-6658273-5713951\"}}}},{\"data\":{\"messageId\":\"yiv8g9-b1l1d6-vps02b-i9o6hl\",\"schemaId\":\"csa.Metric.3\",\"metrics\":{\"baselineMetricEvent\":1},\"dimensions\":{},\"timestamp\":\"2024-02-07T12:05:05.490Z\",\"application\":\""
		"Other:www.amazon.com\",\"obfuscatedMarketplaceId\":\"ATVPDKIKX0DER\",\"producerId\":\"csa\",\"entities\":{\"page\":{\"id\":\"v31liq-yzr5w5-v4abjy-k1lunn\",\"requestId\":\"872T2YKBQ37B6SB0SKCW\",\"pageType\":\"AuthenticationPortal\",\"subPageType\":\"SignInPwdCollect\"},\"session\":{\"id\":\"133-6658273-5713951\"}}}},{\"data\":{\"navigation\":{\"type\":\"normal\",\"toTabId\":\"y45xqs-v4tsc7-d3onkb-o8oc8f\",\"toPageId\":\"v31liq-yzr5w5-v4abjy-k1lunn\",\"transitTime\":14131,\"fromTabId\":\""
		"y45xqs-v4tsc7-d3onkb-o8oc8f\",\"fromPageId\":\"3if2ii-q77ro5-gt55l-1jrscr\",\"interactionId\":\"g1w2h5-t3g9w8-84nxih-90mkie\"},\"schemaId\":\"csa.TabbedBrowsing.2\",\"timestamp\":\"2024-02-07T12:05:05.493Z\",\"messageId\":\"6xn7gj-llgn2k-ghcu70-r6w0r7\",\"application\":\"Other:www.amazon.com\",\"obfuscatedMarketplaceId\":\"ATVPDKIKX0DER\",\"producerId\":\"csa\",\"entities\":{\"page\":{\"id\":\"v31liq-yzr5w5-v4abjy-k1lunn\",\"requestId\":\"872T2YKBQ37B6SB0SKCW\",\"pageType\":\"AuthenticationPortal"
		"\",\"subPageType\":\"SignInPwdCollect\"},\"session\":{\"id\":\"133-6658273-5713951\"}}}},{\"data\":{\"network\":{\"downlink\":\"7\",\"downlinkMax\":\"null\",\"rtt\":\"100\",\"type\":\"null\",\"effectiveType\":\"4g\",\"saveData\":\"false\"},\"language\":\"en-GB\",\"doNotTrack\":null,\"hardwareConcurrency\":4,\"deviceMemory\":8,\"cookieEnabled\":true,\"webdriver\":false,\"schemaId\":\"csa.Navigator.4\",\"timestamp\":\"2024-02-07T12:05:05.496Z\",\"messageId\":\"cbw1lg-s8l7ps-gy31na-4kfcep\",\""
		"application\":\"Other:www.amazon.com\",\"obfuscatedMarketplaceId\":\"ATVPDKIKX0DER\",\"producerId\":\"csa\",\"entities\":{\"page\":{\"id\":\"v31liq-yzr5w5-v4abjy-k1lunn\",\"requestId\":\"872T2YKBQ37B6SB0SKCW\",\"pageType\":\"AuthenticationPortal\",\"subPageType\":\"SignInPwdCollect\"},\"session\":{\"id\":\"133-6658273-5713951\"}}}},{\"data\":{\"schemaId\":\"csa.ContentView.3\",\"timeToViewed\":48,\"pageFirstPaintToElementViewed\":2502,\"timestamp\":\"2024-02-07T12:05:05.539Z\",\"messageId\":\""
		"whwh0-wz994n-gw74a4-25zcyu\",\"application\":\"Other:www.amazon.com\",\"obfuscatedMarketplaceId\":\"ATVPDKIKX0DER\",\"producerId\":\"csa\",\"entities\":{\"page\":{\"id\":\"v31liq-yzr5w5-v4abjy-k1lunn\",\"requestId\":\"872T2YKBQ37B6SB0SKCW\",\"pageType\":\"AuthenticationPortal\",\"subPageType\":\"SignInPwdCollect\"},\"session\":{\"id\":\"133-6658273-5713951\"},\"element\":{\"id\":\"4dzs5h-5d6xi1-kcaqi3-9ptjht\",\"type\":\"widget\",\"funcDeps\":\"aui-da-a-popover\",\"class\":\"a-declarative\"}}}},{"
		"\"data\":{\"renderedToMeaningful\":80,\"renderedToViewed\":80,\"schemaId\":\"csa.PageView.4\",\"timestamp\":\"2024-02-07T12:05:05.539Z\",\"messageId\":\"orc0n1-nd55w5-24uep8-ywjmoy\",\"application\":\"Other:www.amazon.com\",\"obfuscatedMarketplaceId\":\"ATVPDKIKX0DER\",\"producerId\":\"csa\",\"entities\":{\"page\":{\"id\":\"v31liq-yzr5w5-v4abjy-k1lunn\",\"requestId\":\"872T2YKBQ37B6SB0SKCW\",\"meaningful\":\"interactive\",\"url\":\"https://www.amazon.com/ap/signin\",\"server\":\"www.amazon.com\","
		"\"path\":\"/ap/signin\",\"referrer\":\"https://www.amazon.com/ap/signin\",\"title\":\"Amazon Sign-In\",\"transitionType\":\"hard\",\"pageType\":\"AuthenticationPortal\",\"subPageType\":\"SignInPwdCollect\",\"pageTypeId\":\"\"},\"session\":{\"id\":\"133-6658273-5713951\"}}}}]}", 
		LAST);

	web_url("ATVPDKIKX0DER:133-6658273-5713951:872T2YKBQ37B6SB0SKCW$uedata=s:%2Fap%2Fuedata%3Fld%26v%3D0.261013.0%26id%3D872T2YKBQ37B6SB0SKCW%26sw%3D1280%26sh%3D720%26vw%3D1280%26vh%3D593%26m%3D1%26sc%3D872T2YKBQ37B6SB0SKCW%26ue%3D2%26bb%3D18%26cf%3D45%26be%3D51%26fp%3", 
		"URL=https://fls-na.amazon.com/1/batch/1/OP/ATVPDKIKX0DER:133-6658273-5713951:872T2YKBQ37B6SB0SKCW$uedata=s"
		":%2Fap%2Fuedata%3Fld%26v%3D0.261013.0%26id%3D872T2YKBQ37B6SB0SKCW%26sw%3D1280%26sh%3D720%26vw%3D1280%26vh%3D593%26m%3D1%26sc%3D872T2YKBQ37B6SB0SKCW%26ue%3D2%26bb%3D18%26cf%3D45%26be%3D51%26fp%3D44%26fcp%3D44%26pc%3D478%26tc%3D-2399%26na_%3D-2399%26ul_%3D-14%26_ul%3D-13%26rd_%3D-1707307505436%26_rd%3D-1707307505436%26fe_%3D-2382%26lk_%3D-2382%26_lk%3D-2382%26co_%3D-2382%26_co%3D-2382%26sc_%3D-1707307505436%26rq_%3D-2379%26rs_%3D-23%26_rs%3D-20%26dl_%3D-9%26di_%3D103%26de_%3D103%26_de%3D103%26_dc%3D"
		"477%26ld_%3D478%26_ld%3D-1707307505436%26ntd%3D0%26ty%3D0%26rc%3D0%26hob%3D1%26hoe%3D3%26ld%3D478%26t%3D1707307505914%26ctb%3D1%26rt%3Dcf%3A14-11-3-0-2-14-1__ld%3A14-11-3-0-2-14-0%26csmtags%3Daui%7Caui%3Aaui_build_date%3A3.23.1-2023-12-20%7Cfls-na-amazon-com%7Cadblk_yes%7Caui%3Asw%3Apage_proxy%3Ano_ctrl%26viz%3Dvisible%3A2%26pty%3DAuthenticationPortal%26spty%3DSignInPwdCollect%26pti%3Dundefined%26tid%3D5AFSK1C7VNHSD7KRB97Y%26aftb%3D1:481", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://www.amazon.com/", 
		"Snapshot=t140.inf", 
		LAST);

	web_custom_request("OE_63", 
		"URL=https://fls-na.amazon.com/1/batch/1/OE/", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=https://www.amazon.com/", 
		"Snapshot=t141.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"rid\":\"872T2YKBQ37B6SB0SKCW\",\"sid\":\"133-6658273-5713951\",\"mid\":\"ATVPDKIKX0DER\",\"sn\":\"www.amazon.com\",\"reqs\":[{\"csmcount\":{\"counter\":\"baselineCounter2\",\"value\":1,\"t\":3}},{\"csmcount\":{\"counter\":\"CSMLibrarySize\",\"value\":9743,\"t\":3}},{\"csmcount\":{\"counter\":\"aui:hiResDesktop\",\"value\":0,\"t\":13}},{\"csmcount\":{\"counter\":\"aui:pagejs:pkgExecTime\",\"value\":1.6999999999534339,\"t\":14}},{\"csmcount\":{\"counter\":\"aui:resource_count\",\"value\":1,"
		"\"t\":14}},{\"csmcount\":{\"counter\":\"aui:resource_count\",\"value\":2,\"t\":14}},{\"csmcount\":{\"counter\":\"aui:resource_count\",\"value\":3,\"t\":14}},{\"csmcount\":{\"counter\":\"aui:resource_count\",\"value\":4,\"t\":15}},{\"csmcount\":{\"counter\":\"aui:resource_count\",\"value\":5,\"t\":15}},{\"csmcount\":{\"counter\":\"aui:resource_count\",\"value\":6,\"t\":15}},{\"csmcount\":{\"counter\":\"aui:resource_count\",\"value\":7,\"t\":15}},{\"csmcount\":{\"counter\":\"aui:resource_count\",\""
		"value\":8,\"t\":15}},{\"csmcount\":{\"counter\":\"aui:resource_count\",\"value\":9,\"t\":15}},{\"csmcount\":{\"counter\":\"aui:resource_count\",\"value\":10,\"t\":15}},{\"csmcount\":{\"counter\":\"aui:sw:sw_message_no_ctrl\",\"value\":1,\"t\":16}},{\"csmcount\":{\"counter\":\"csm.cookieSize\",\"value\":599,\"t\":18}},{\"csmcount\":{\"counter\":\"CSMLibrarySize\",\"value\":3173,\"t\":18}},{\"csmcount\":{\"counter\":\"CSMLibrarySize\",\"value\":17507,\"t\":25}},{\"csmcount\":{\"counter\":\""
		"CSMLibrarySize\",\"value\":68699,\"t\":91}},{\"csmcount\":{\"counter\":\"CVE_HTMLPrefilter\",\"value\":1,\"t\":239}},{\"csmcount\":{\"counter\":\"contactVerificationCVFCreate\",\"value\":1,\"t\":239}},{\"csmcount\":{\"counter\":\"aui:sw:ppft:error:no_ctrl\",\"value\":1,\"t\":272}},{\"csmcount\":{\"counter\":\"postbackImageSize\",\"value\":696,\"t\":481}},{\"csmcount\":{\"counter\":\"aui:sw:sw_message_no_ctrl\",\"value\":1,\"t\":488}},{\"csmcount\":{\"counter\":\"aui:aui-supported-rupee\",\"value\""
		":1,\"t\":490}},{\"csm\":{\"k\":\"chk\",\"f\":1,\"l\":{\"csmcount\":25,\"csm\":1},\"s\":\"full\"}},{\"csmcount\":{\"counter\":\"foresterPayloadSize\",\"t\":0,\"value\":1870}}]}", 
		LAST);

	web_concurrent_start(NULL);

	web_url("ATVPDKIKX0DER:133-6658273-5713951:872T2YKBQ37B6SB0SKCW$uedata=s:%2Fap%2Fuedata%3Fat%26v%3D0.261013.0%26id%3D872T2YKBQ37B6SB0SKCW%26ctb%3D1%26m%3D1%26sc%3D872T2YKBQ37B6SB0SKCW%26pc%3D1824%26at%3D1824%26t%3D1707307507260%26csmtags%3Dcsm-feature-touch-enabled", 
		"URL=https://fls-na.amazon.com/1/batch/1/OP/ATVPDKIKX0DER:133-6658273-5713951:872T2YKBQ37B6SB0SKCW$uedata=s:%2Fap%2Fuedata%3Fat%26v%3D0.261013.0%26id%3D872T2YKBQ37B6SB0SKCW%26ctb%3D1%26m%3D1%26sc%3D872T2YKBQ37B6SB0SKCW%26pc%3D1824%26at%3D1824%26t%3D1707307507260%26csmtags%3Dcsm-feature-touch-enabled%3Afalse%26pty%3DAuthenticationPortal%26spty%3DSignInPwdCollect%26pti%3Dundefined%26tid%3D5AFSK1C7VNHSD7KRB97Y%26aftb%3D1:1825", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://www.amazon.com/", 
		"Snapshot=t142.inf", 
		LAST);

	web_url("ATVPDKIKX0DER:133-6658273-5713951:872T2YKBQ37B6SB0SKCW$uedata=s:%2Fap%2Fuedata%3Fat%26v%3D0.261013.0%26id%3D872T2YKBQ37B6SB0SKCW%26ctb%3D1%26m%3D1%26sc%3D872T2YKBQ37B6SB0SKCW%26pc%3D1871%26at%3D1871%26t%3D1707307507307%26pty%3DAuthenticationPortal%26spty%3", 
		"URL=https://fls-na.amazon.com/1/batch/1/OP/ATVPDKIKX0DER:133-6658273-5713951:872T2YKBQ37B6SB0SKCW$uedata=s:%2Fap%2Fuedata%3Fat%26v%3D0.261013.0%26id%3D872T2YKBQ37B6SB0SKCW%26ctb%3D1%26m%3D1%26sc%3D872T2YKBQ37B6SB0SKCW%26pc%3D1871%26at%3D1871%26t%3D1707307507307%26pty%3DAuthenticationPortal%26spty%3DSignInPwdCollect%26pti%3Dundefined%26tid%3D5AFSK1C7VNHSD7KRB97Y%26aftb%3D1%26ui%3D2:1872", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://www.amazon.com/", 
		"Snapshot=t143.inf", 
		LAST);

	web_concurrent_end(NULL);

	return 0;
}