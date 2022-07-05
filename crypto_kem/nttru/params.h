#ifndef PARAMS_H
#define PARAMS_H

#define N 768
#define Q 7681
#define LOGQ 13
#define ROOT_OF_UNITY 20

#define SEEDBYTES 32
#define SHAREDKEYBYTES 32
#define COINBYTES (N/2)
#define MSGBYTES (N/4)
#define PUBLICKEYBYTES (LOGQ*N/8)
#define SECRETKEYBYTES (LOGQ*N/8 + PUBLICKEYBYTES)
#define CIPHERTEXTBYTES (LOGQ*N/8)

#endif