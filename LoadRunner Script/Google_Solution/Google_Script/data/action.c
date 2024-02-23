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

	web_url("seed", 
		"URL=https://clientservices.googleapis.com/chrome-variations/seed?osname=win&channel=stable&milestone=121", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t9.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://www.gstatic.com/og/_/js/k=og.qtm.en_US.ZEEp2pdSHOQ.2019.O/rt=j/m=qabr,q_d,qcwid,qapid,qald,q_dg/exm=qaaw,qadd,qaid,qein,qhaw,qhba,qhbr,qhch,qhga,qhid,qhin/d=1/ed=1/rs=AA2YrTvRRKYp7I5vTn-AtFvme6Qlo6hq9Q", "Referer=https://www.google.com/", ENDITEM, 
		LAST);

	web_add_cookie("1P_JAR=2024-02-05-10; DOMAIN=play.google.com");

	web_add_cookie("AEC=Ae3NU9OO84Xpvrg4AVCNpjM9m1K7pJuIJQFcZI_whZC4m9gQRBikwssXvw; DOMAIN=play.google.com");

	web_add_cookie("NID=511=Gq9hDyLlzjNhjwdvdX_jmtaB5YtS9U8oWFOWzN0IsTYIX2ws5eN83fmt3NWGrlRQ8cMcHIB3VPWsqsP9KQ0HNemdDwQy-LukqIxzbLQmVSJXZVbF31l8KIXa7DY1qzM-UE0oHZP08heiqbUSz2GiQUap4gmJqIgf02m2Bj8gxwsw89LkDkxylXJK; DOMAIN=play.google.com");

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

	web_custom_request("command", 
		"URL=https://clients4.google.com/chrome-sync/command/?client=Google+Chrome&client_id=57oxOBvCz9pMOcr26yQsbg%3D%3D", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/vnd.google.octet-stream-compressible", 
		"Referer=", 
		"Snapshot=t11.inf", 
		"ContentEncoding=gzip", 
		"Mode=HTML", 
		"EncType=application/octet-stream", 
		"BodyBinary=\n\\x16nandinis7399@gmail.com\\x10c\\x18\\x02*'\\x12\\x04\\x08\\x00\\x10\\x00\\x18\\x012\\x04\\x08\\xDE\\xD8\\x122\\x13\\x08\\x81\\xF5\\x02\\x12\r \\x00\\x88\\x01\\x8F\\xBA\\xD2\\xCE\\x99\\xC2\\xD4\\xB4\\x01@\\x00H\\x07:%z00000165-a8aa-aecb-0000-00005b8f87daR\\x12\n\\x02\\x08\\x05\n\\x02\\x08\t\n\\x02\\x08\n\\x10\\x01\\x18\\x00 \\x00Z\\x81\\x01\n\\x7F\\x12}Chrome WIN 121.0.6167.140 (a5856993c61543d4acbee5f848f1750607e87ba0-refs/branch-heads/6167@{#1684}) channel(stable),gzip(gfe)"
		"b'AIzaSyBOti4mM-6x9WDnZIjIeyEU21OpBXqWBgwj\\x02\\x10\\x00", 
		EXTRARES, 
		"Url=https://encrypted-tbn3.gstatic.com/images?q=tbn:ANd9GcQyOqARvJ5ODGOAg4NOKD7nGQ_wFDazMrH30KQi3QE81jLS9PpHnI4AGhhAXLN5XTN3pts", "Referer=https://www.google.com/", ENDITEM, 
		"Url=https://encrypted-tbn3.gstatic.com/images?q=tbn:ANd9GcRtTAzc2YkpjeeHuAZMrdHXdjLC08MmdAY8f-kcSqO9yjz_IHpIsYE2-ICyu9vsgxXPXxo", "Referer=https://www.google.com/", ENDITEM, 
		"Url=https://encrypted-tbn3.gstatic.com/images?q=tbn:ANd9GcQfckeP2jtbHJlXra0Abnq7Kbf0eQ6iVg8Snltj4_Sdb0EFjwHyP8A", "Referer=https://www.google.com/", ENDITEM, 
		LAST);

	return 0;
}