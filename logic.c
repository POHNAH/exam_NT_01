logic()
{
	Enter();
	CreateUser();
	
	vuser_init();
	
	if (rand()%2 == 0) {
		CreateTicket();
	}
	vuser_end();
	
	return 0;
}
