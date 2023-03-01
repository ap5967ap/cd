#include <sys/time.h>
#include <sys/resource.h>
typedef struct {
	struct timeval start;
	struct timeval end;
} TimeStruct;
void set_time_start(TimeStruct * times);
void set_time_end(TimeStruct * times);
long get_time_usage(TimeStruct * times);
void set_time_start(TimeStruct * times){
	struct rusage usage;
	int r = getrusage(RUSAGE_SELF , &usage);
	times->start=usage.ru_utime;
}
void set_time_end(TimeStruct * times){
	struct rusage usage;
	int r = getrusage(RUSAGE_SELF , &usage);
	times->end=usage.ru_utime;
}
long get_time_usage(TimeStruct * times){
	return times->end.tv_sec*1000000+times->end.tv_usec
		- times->start.tv_sec*1000000+-times->start.tv_usec;
}
int main(){
    set_time_end
}