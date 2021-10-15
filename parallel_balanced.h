#include "mpi.h"

void master(int N, int R, int node_count, char init_mode);
void worker(int N, int R, int node_count, int id);
int get_stop(MPI_Request stop_request);
void send_stop(MPI_Request* result_requests, int node_count);
int get_results(MPI_Request* result_requests, int node_count);
void send_result(int stop, int result);
int *get_task(int task_size);
int send_tasks(int *A, int N, int node_count);
MPI_Request* initialise_requests(int node_count);
int *initialise(int N, char init_mode);