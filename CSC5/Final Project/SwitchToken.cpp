char SwitchToken(char token	//INPUT - Holds 'X' or 'O' token
				)
{
	//Changes the token to O
	if(token=='X')
	{
		token = 'O';
	}

	//Changes the token to X
	else if (token=='O')
	{
		token ='X';
	}

	//If no one has gone the token is by default X
	else
		token = 'X';

	return token;
}
