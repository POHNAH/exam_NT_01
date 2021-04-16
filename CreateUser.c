CreateUser()
{
	web_url("sign up now", 
		"URL=http://localhost:1080/cgi-bin/login.pl?username=&password=&getInfo=true", 
		"TargetFrame=body", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/WebTours/home.html", 
		"Snapshot=t2.inf", 
		"Mode=HTML", 
		LAST);
	
//	lr_output_message(lr_eval_string("{login}"));
//	lr_output_message(lr_eval_string("{pass}"));
//	lr_output_message(lr_eval_string("{name}"));
//	lr_output_message(lr_eval_string("{surname}"));
//	lr_output_message(lr_eval_string("{adr1}"));
//	lr_output_message(lr_eval_string("{adr2}"));
//
	web_submit_data("login.pl", 
		"Action=http://localhost:1080/cgi-bin/login.pl", 
		"Method=POST", 
		"TargetFrame=info", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/login.pl?username=&password=&getInfo=true", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=username", "Value={login}", ENDITEM, 
		"Name=password", "Value={pass}", ENDITEM, 
		"Name=passwordConfirm", "Value={pass}", ENDITEM, 
		"Name=firstName", "Value={name}", ENDITEM, 
		"Name=lastName", "Value={surname}", ENDITEM, 
		"Name=address1", "Value={adr1}", ENDITEM, 
		"Name=address2", "Value={adr2}", ENDITEM, 
		"Name=register.x", "Value=52", ENDITEM, 
		"Name=register.y", "Value=14", ENDITEM, 
		LAST);
	
	vuser_end();

	return 0;
}
