#ifndef _AUTH_CLIENT_H
#define _AUTH_CLIENT_H

extern int authorise_client(struct async *as,
	struct conf *conf, char **server_version);

#endif
