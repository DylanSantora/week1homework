#include "Parser.h"

Parser::Parser() {

}

string Parser::getCommandRef(string cmd){



	if (cmd == "cat"){
		return "prints content of file";
	}

	if (cmd == "ls"){
		return "lists files in directory";
	}

	if (cmd == "mkdir"){
		return "creates directory";
	}

	if (cmd == "rm dir"){
		return "deletes directory";
	}


	return "reference";
}
