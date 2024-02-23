/* -------------------------------------------------------------------------------
	Script Title       : 
	Script Description : 
                        
                        
	Recorder Version   : 0
   ------------------------------------------------------------------------------- */

vuser_init()
{

	web_set_sockets_option("SSL_VERSION", "AUTO");

	web_url("seed", 
		"URL=https://clientservices.googleapis.com/chrome-variations/seed?osname=win&channel=stable&milestone=121", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		LAST);

	web_set_sockets_option("TLS_SNI", "0");

	web_url("katalon-demo-cura.herokuapp.com", 
		"URL=https://katalon-demo-cura.herokuapp.com/", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t2.inf", 
		"Mode=HTML", 
		LAST);

	web_concurrent_start(NULL);

	web_url("header.jpg", 
		"URL=https://katalon-demo-cura.herokuapp.com//img/header.jpg", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/jpeg", 
		"Referer=https://katalon-demo-cura.herokuapp.com//css/theme.css", 
		"Snapshot=t3.inf", 
		LAST);

	web_url("6xK3dSBYKcSV-LCoeQqfX1RYOo3qOK7l.woff2", 
		"URL=https://fonts.gstatic.com/s/sourcesanspro/v22/6xK3dSBYKcSV-LCoeQqfX1RYOo3qOK7l.woff2", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=font/woff2", 
		"Referer=https://fonts.googleapis.com/", 
		"Snapshot=t4.inf", 
		LAST);

	web_url("6xKydSBYKcSV-LCoeQqfX1RYOo3ig4vwlxdu.woff2", 
		"URL=https://fonts.gstatic.com/s/sourcesanspro/v22/6xKydSBYKcSV-LCoeQqfX1RYOo3ig4vwlxdu.woff2", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=font/woff2", 
		"Referer=https://fonts.googleapis.com/", 
		"Snapshot=t5.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_set_sockets_option("TLS_SNI", "1");

	lr_think_time(5);

	web_custom_request("command", 
		"URL=https://clients4.google.com/chrome-sync/command/?client=Google+Chrome&client_id=57oxOBvCz9pMOcr26yQsbg%3D%3D", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/vnd.google.octet-stream-compressible", 
		"Referer=", 
		"Snapshot=t6.inf", 
		"ContentEncoding=gzip", 
		"Mode=HTML", 
		"EncType=application/octet-stream", 
		"BodyBinary=\n\\x16nandinis7399@gmail.com\\x10c\\x18\\x02*'\\x12\\x04\\x08\\x00\\x10\\x00\\x18\\x012\\x04\\x08\\xDE\\xD8\\x122\\x13\\x08\\x81\\xF5\\x02\\x12\r \\x00\\x88\\x01\\x8F\\xBA\\xD2\\xCE\\x99\\xC2\\xD4\\xB4\\x01@\\x00H\\x07:%z00000165-a8aa-aecb-0000-00005b8f87daR\\x12\n\\x02\\x08\\x05\n\\x02\\x08\t\n\\x02\\x08\n\\x10\\x01\\x18\\x00 \\x00Z\\x81\\x01\n\\x7F\\x12}Chrome WIN 121.0.6167.161 (8e23a63b5dead78825bec5ef48f4aeb5698ce21a-refs/branch-heads/6167@{#1764}) channel(stable),gzip(gfe)"
		"b'AIzaSyBOti4mM-6x9WDnZIjIeyEU21OpBXqWBgwj\\x02\\x10\\x00", 
		LAST);

	web_set_sockets_option("TLS_SNI", "0");

	/* make appointment */

	lr_think_time(23);

	web_url("profile.php", 
		"URL=https://katalon-demo-cura.herokuapp.com/profile.php", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://katalon-demo-cura.herokuapp.com/", 
		"Snapshot=t7.inf", 
		"Mode=HTML", 
		LAST);

	lr_think_time(26);

	web_custom_request("json", 
		"URL=http://update.googleapis.com/service/update2/json?cup2key=13:VXOqd3aA-g7SR9e7QbItyPggjbPdHlWEvCLkj0j2hTA&cup2hreq=acb7d8579a60f272b28448e7d5660851d50a863dfa6a2c76b97935a247472f5d", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t8.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"request\":{\"@os\":\"win\",\"@updater\":\"chrome\",\"acceptformat\":\"crx3,puff\",\"app\":[{\"appid\":\"neifaoindggfcjicffkgpmnlppeffabd\",\"brand\":\"GGLS\",\"cohort\":\"1:1299:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.c900ba9a2d8318263fd43782ee6fd5fb50bad78bf0eb2c972b5922c458af45ed\"}]},\"ping\":{\"ping_freshness\":\"{5eda6ae1-bb40-40c3-a753-c2056f0c6ea1}\",\"rd\":6251},\"updatecheck\":{},\"version\":\""
		"1.0.2738.0\"},{\"appid\":\"oimompecagnajdejgnnjijobebaeigek\",\"brand\":\"GGLS\",\"cohort\":\"1:1zdx:\",\"cohortname\":\"Chrome 106+\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"ping\":{\"ping_freshness\":\"{d6974e7a-dac3-42b8-a789-b5db713b4a0c}\",\"rd\":6251},\"updatecheck\":{},\"version\":\"4.10.2710.0\"},{\"appid\":\"gcmjkmgdlgnkkcocmoeiminaijmmjnii\",\"brand\":\"GGLS\",\"cohort\":\"1:bm1:\",\"cohortname\":\"Stable\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\""
		"packages\":{\"package\":[{\"fp\":\"1.cd1978742a4afdbaaa15bf712d5c90bef4144caa99024df98f6a9ad58043ae85\"}]},\"ping\":{\"ping_freshness\":\"{71ff01ae-3205-4390-a209-36227cbbf8a9}\",\"rd\":6251},\"updatecheck\":{},\"version\":\"9.49.1\"},{\"appid\":\"lmelglejhemejginpboagddgdfbepgmp\",\"brand\":\"GGLS\",\"cohort\":\"1:lwl:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\""
		"1.d714e27bbcdedab3f9f9ca92462ee6dc8ca779849aefdd27af92009a9d55a38f\"}]},\"ping\":{\"ping_freshness\":\"{e8f0e9a9-8dc7-473e-b8e6-68f12b56c604}\",\"rd\":6251},\"updatecheck\":{},\"version\":\"433\"},{\"appid\":\"ihnlcenocehgdaegdmhbidjhnhdchfmm\",\"brand\":\"GGLS\",\"cohort\":\"1::\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.aeedb246d19256a956fedaa89fb62423ae5bd8855a2a1f3189161cf045645a19\"}]},\"ping\":{\"ping_freshness\":\""
		"{6c2899d1-1edd-4c77-b188-2c5e5322ec14}\",\"rd\":6251},\"updatecheck\":{},\"version\":\"1.3.36.141\"},{\"appid\":\"kiabhabjdbkjdpjbpigfodbdjmbglcoo\",\"brand\":\"GGLS\",\"cohort\":\"1:v3l:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":6133,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.4a6508925b2ffec931c1e3931ddeb15ca41d820a8264cd5a962b526e9932bcdf\"}]},\"ping\":{\"ping_freshness\":\"{497b8fe8-c867-4c38-8a1a-bd71e4f69f99}\",\"rd\":6251},\"updatecheck\":{},\"version\":\""
		"2024.1.2.1\"},{\"appid\":\"khaoiebndkojlmppeemjhbpbandiljpe\",\"brand\":\"GGLS\",\"cohort\":\"1:cux:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.f4f1eb04881095d1cc8f2e1799a8144c10476dc1088a03ecdb4418644040a554\"}]},\"ping\":{\"ping_freshness\":\"{07f015f8-f745-4fd8-b86a-78370f07b5a2}\",\"rd\":6251},\"updatecheck\":{},\"version\":\"63\"},{\"appid\":\"llkgjffcdpffmhiakmfcdcblohccpfmo\",\"brand\":\"GGLS\",\"cohort\":\"1::\""
		",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.3a118962ef814c91f6476bb9f0de58afa63103af6ac1b8729be9b39a86789e96\"}]},\"ping\":{\"ping_freshness\":\"{ec0103ec-06cc-4237-9336-e279037c7a7b}\",\"rd\":6251},\"updatecheck\":{},\"version\":\"1.0.0.15\"},{\"appid\":\"giekcmmlnklenlaomppkphknjmnnpneh\",\"brand\":\"GGLS\",\"cohort\":\"1:j5l:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\""
		":\"1.fd515ec0dc30d25a09641b8b83729234bc50f4511e35ce17d24fd996252eaace\"}]},\"ping\":{\"ping_freshness\":\"{e1da28e3-4051-46ea-90b7-345f9f8995eb}\",\"rd\":6251},\"updatecheck\":{},\"version\":\"7\"},{\"appid\":\"ehgidpndbllacpjalkiimkbadgjfnnmc\",\"brand\":\"GGLS\",\"cohort\":\"1:ofl:\",\"cohortname\":\"stable64\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.a8a79d350c2a5e3bc36226633a8e0bed0dfab184e77f38fc8f0820ebacf8eafc\"}]},\"ping\":{\""
		"ping_freshness\":\"{73b39f16-1eea-4317-8890-0aee60fa9899}\",\"rd\":6251},\"updatecheck\":{},\"version\":\"2018.8.8.0\"},{\"appid\":\"laoigpblnllgcgjnjnllmfolckpjlhki\",\"brand\":\"GGLS\",\"cohort\":\"1:10zr:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"ping\":{\"ping_freshness\":\"{405477c7-b7a6-4e28-96b2-65f9fad01e33}\",\"rd\":6251},\"updatecheck\":{},\"version\":\"1.0.7.1652906823\"},{\"appid\":\"jflookgnkcckhobaglndicnbbgbonegd\",\"brand\":\"GGLS\",\""
		"cohort\":\"1:s7x:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.363351f0d0ca05b48f43d4adac95ad01d955bb2988c015733e70e09625d47065\"}]},\"ping\":{\"ping_freshness\":\"{66df3be0-9bf7-4fcf-91c7-768086a4d6a6}\",\"rd\":6251},\"updatecheck\":{},\"version\":\"3018\"},{\"appid\":\"ggkkehgbnfjpeggfpleeakpidbkibbmn\",\"brand\":\"GGLS\",\"cohort\":\"1:ut9/1a0f:23ml@0.1\",\"cohortname\":\"M108 and Above\",\"enabled\":true,\""
		"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.c45cd56a0a8da0883c8f9757b31891d6c628f38cb80724015ffdf33b419a73f3\"}]},\"ping\":{\"ping_freshness\":\"{7556c4e9-eb52-4eb4-8080-6c0734773d4e}\",\"rd\":6251},\"updatecheck\":{},\"version\":\"2023.11.27.1202\"},{\"appid\":\"ojhpjlocmbogdgmfpkhlaaeamibhnphh\",\"brand\":\"GGLS\",\"cohort\":\"1:w0x:\",\"cohortname\":\"All users\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\""
		"1.545666a4efd056351597bb386aea1368105ededc976ed5650d8682daab9f37ff\"}]},\"ping\":{\"ping_freshness\":\"{0c1e97e5-5a54-49d7-ad3d-e00cc5b120c8}\",\"rd\":6251},\"updatecheck\":{},\"version\":\"3\"},{\"appid\":\"efniojlnjndmcbiieegkicadnoecjjef\",\"brand\":\"GGLS\",\"cohort\":\"1:18ql:\",\"cohortname\":\"Auto Stage3\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.9324e37832b4647cfe6dd5c305addbd1aebad06a25acf8cab9423efe9424cbf2\"}]},\"ping\":{\""
		"ping_freshness\":\"{ef816ab7-de60-474d-ae22-1f60c9bc7a0d}\",\"rd\":6251},\"updatecheck\":{},\"version\":\"857\"},{\"appid\":\"jflhchccmppkfebkiaminageehmchikm\",\"brand\":\"GGLS\",\"cohort\":\"1:26yf:\",\"cohortname\":\"Stable\",\"enabled\":true,\"installdate\":6156,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.fd0c10a9d39acddc0fd6a083a23ff8a1521d45ac1328d60a7bd1a89b379b82bc\"}]},\"ping\":{\"ping_freshness\":\"{758d1ae7-c116-4383-bfa2-52cbbde6df0c}\",\"rd\":6251},\"updatecheck\":{},\""
		"version\":\"2024.2.10.1\"},{\"appid\":\"jamhcnnkihinmdlkakkaopbjbbcngflc\",\"brand\":\"GGLS\",\"cohort\":\"1:wvr:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.c52c62a7c50daf7d3f73ec16977cd4b0ea401710807d5dbe3850941dd1b73a70\"}]},\"ping\":{\"ping_freshness\":\"{3ee51b42-8d5a-4254-9ebc-39639926fd81}\",\"rd\":6251},\"updatecheck\":{},\"version\":\"120.0.6050.0\"},{\"appid\":\"hfnkpimlhhgieaddgfemjhofmfblmnib\",\"brand\":\""
		"GGLS\",\"cohort\":\"1:jcl:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.90f54a8ca8c3135f647fedbb5f38ecadbbae4d45dafc3b73cde0c96d924a1773\"}]},\"ping\":{\"ping_freshness\":\"{71b8d2f5-c7de-4977-a2a2-25b9efb1a2fd}\",\"rd\":6251},\"updatecheck\":{},\"version\":\"8531\"},{\"appid\":\"eeigpngbgcognadeebkilcpcaedhellh\",\"brand\":\"GGLS\",\"cohort\":\"1:w59:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5887,\""
		"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.c64c9c1008f3ba5f6e18b3ca524bc98dcd8acfae0a2720a8f1f3ef0f8d643d05\"}]},\"ping\":{\"ping_freshness\":\"{c1673e17-fc60-4749-91ae-ad43dc35b84e}\",\"rd\":6251},\"updatecheck\":{},\"version\":\"2020.11.2.164946\"},{\"accept_locale\":\"ENGB500000\",\"appid\":\"obedbbhbpmojnkanicioggnmelmoomoc\",\"brand\":\"GGLS\",\"cohort\":\"1:s6f:20ol@0.5\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":["
		"{\"fp\":\"1.b9685d1e3054ce061c8c804b6e8983c6f62deb37d3882c2de2ef300666e91af3\"}]},\"ping\":{\"ping_freshness\":\"{5bd73dda-f35b-45aa-8dce-a8df2c35f3e5}\",\"rd\":6251},\"updatecheck\":{},\"version\":\"20230916.567854667.14\"},{\"appid\":\"gonpemdgkjcecdgbnaabipppbmgfggbe\",\"brand\":\"GGLS\",\"cohort\":\"1:z1x:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.06e71f675912f15e683ea65e2a1ec902ff07d67953b8dbf4542f93baf98a29bc\"}]"
		"},\"ping\":{\"ping_freshness\":\"{f86f8099-3a53-46d9-b17c-91d254c0a34e}\",\"rd\":6251},\"updatecheck\":{},\"version\":\"2024.2.8.0\"},{\"appid\":\"niikhdgajlphfehepabhhblakbdgeefj\",\"brand\":\"GGLS\",\"cohort\":\"1:1uh3:\",\"cohortname\":\"Auto Main Cohort.\",\"enabled\":true,\"installdate\":6133,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.396f0c6d34d7135fea2ed14b699555b8f2dfb667e899ce8c79850d18760e8f06\"}]},\"ping\":{\"ping_freshness\":\"{8c610ec4-147f-47d0-9894-c7c0b992d2dc}\",\""
		"rd\":6251},\"updatecheck\":{},\"version\":\"2024.2.7.0\"}],\"arch\":\"x64\",\"dedup\":\"cr\",\"domainjoined\":false,\"hw\":{\"avx\":true,\"physmemory\":12,\"sse\":true,\"sse2\":true,\"sse3\":true,\"sse41\":true,\"sse42\":true,\"ssse3\":true},\"ismachine\":true,\"nacl_arch\":\"x86-64\",\"os\":{\"arch\":\"x86_64\",\"platform\":\"Windows\",\"version\":\"10.0.19045.3324\"},\"prodversion\":\"121.0.6167.161\",\"protocol\":\"3.1\",\"requestid\":\"{94d17712-c96c-437e-9188-1e8fd88e2b41}\",\"sessionid\":\""
		"{86ed6227-0777-4428-bed8-0df94d3d75ea}\",\"updater\":{\"autoupdatecheckenabled\":true,\"ismachine\":true,\"lastchecked\":0,\"laststarted\":0,\"name\":\"Omaha\",\"updatepolicy\":-1,\"version\":\"1.3.36.363\"},\"updaterversion\":\"121.0.6167.161\"}}", 
		LAST);

	return 0;
}
