Action()
{

	web_set_sockets_option("SSL_VERSION", "AUTO");

	web_url("rs=AA2YrTungzasoekTaLKrPFUaQFpakqDmnA", 
		"URL=https://www.gstatic.com/og/_/ss/k=og.qtm.8RUPaHb7e5o.L.W.O/m=qcwid/excm=qaaw,qadd,qaid,qein,qhaw,qhba,qhbr,qhch,qhga,qhid,qhin/d=1/ed=1/ct=zgms/rs=AA2YrTungzasoekTaLKrPFUaQFpakqDmnA", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=https://www.google.com/", 
		"Snapshot=t8.inf", 
		LAST);

	

	
	web_custom_request("log", 
		"URL=https://play.google.com/log?format=json&hasfast=true", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=https://www.google.com/", 
		"Snapshot=t10.inf", 
		"Mode=HTML", 
		"EncType=application/x-www-form-urlencoded;charset=UTF-8", 
		"Body=[[1,null,null,null,null,null,null,null,null,null,[null,null,null,null,\"en-IN\",null,null,null,[[[\"Not A(Brand\",\"99\"],[\"Google Chrome\",\"121\"],[\"Chromium\",\"121\"]],0,\"Windows\",\"10.0.0\",\"x86\",\"\",\"121.0.6167.140\"],[1,0,0,0,0]]],373,[[\"1707157031189\",null,null,null,null,null,null,\"[108,40400,538,1,\\\"602241693.0\\\",\\\"2rjAZYPKOLWjg8UPj46E0AI\\\",null,null,null,\\\"en\\\",\\\"IND\\\",0,8,2050,null,0,0,null,\\\"og-3881ea1a-f980-43f0-9a69-29ac5cf4ae60\\\",null,null,null,"
		"null,null,null,null,0,null,null,null,19037050,null,null,null,null,0,[1],1,null,null,null,null,null,null,null,null,null,null,null,[0,2],null,null,null,null,0,null,[2,5,\\\"sl\\\",8],null,null,0,0,1]\",null,null,null,null,null,null,-19800,[null,null,null,\"[null,null,[3700949,3701289]]\"],null,null,null,null,1],[\"1707157031193\",null,null,null,null,null,null,\"[107,40400,538,1,\\\"602241693.0\\\",\\\"2rjAZYPKOLWjg8UPj46E0AI\\\",null,null,null,\\\"en\\\",\\\"IND\\\",0,8,2053,null,0,0,null,\\\""
		"og-3881ea1a-f980-43f0-9a69-29ac5cf4ae60\\\",null,null,null,null,null,null,null,8,null,null,null,19037050,null,null,null,null,0,[2],2,null,null,null,null,null,null,null,null,null,null,null,[0,2],null,null,null,null,0,null,[2,5,\\\"sl\\\",8],null,null,0,0,1]\",null,null,null,null,null,null,-19800,[null,null,null,\"[null,null,[3700949,3701289]]\"],null,null,null,null,2]],\"1707157032202\",null,null,null,null,null,null,null,null,null,null,null,null,null,[[null,[null,null,null,null,null,null,null,null,"
		"null,null,null,null,122505695]],9]]", 
		EXTRARES, 
		"Url=https://encrypted-tbn0.gstatic.com/images?q=tbn:ANd9GcT375qtPUYZr0WqxFfh87bLvb-B0jFIiul_rGBFJyMb2eP8yx_JZy5Z_6c&s=10", "Referer=https://www.google.com/", ENDITEM, 
		"Url=https://encrypted-tbn0.gstatic.com/images?q=tbn:ANd9GcSt4Zvuqg17L8xiVfbOLSa2Ljl60znIOJHhMXuDqX70yrRBHrTowpAOX2w&s=10", "Referer=https://www.google.com/", ENDITEM, 
		"Url=https://encrypted-tbn0.gstatic.com/images?q=tbn:ANd9GcQVfrZ_Wi3Wlz-FheZb7H1rvV_Phb3RILFi9rUYWFc&s=10", "Referer=https://www.google.com/", ENDITEM, 
		"Url=https://encrypted-tbn0.gstatic.com/images?q=tbn:ANd9GcRRdujh2UdhAHzLTIQgeAH4ncG4o6eMqB5SGIoiy5VMH8Xn_5eCd9Euze8&s=10", "Referer=https://www.google.com/", ENDITEM, 
		"Url=https://encrypted-tbn0.gstatic.com/images?q=tbn:ANd9GcT5bCs10a0XxK1ikEHN655AT_iHkXWJhAsmMUB_IEk&s=10", "Referer=https://www.google.com/", ENDITEM, 
		"Url=https://fonts.gstatic.com/s/googlesans/v14/4UaGrENHsxJlGDuGo1OIlL3Owp4.woff2", "Referer=https://www.google.com/", ENDITEM, 
		LAST);
	
	return 0;
}