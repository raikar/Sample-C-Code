#include "stdafx.h"
#include "iostream"
using namespace std;

struct EmployeeInfo //1K
{
	char name[10]; //10K
	int id[5]; //20K
	float salary; //4K

};
int main(int argc, char **argv) {
	EmployeeInfo *emp_ptr; /*struct containing img data, 10kB each*/
	int num_imgs;
	
		//num_imgs = get_num_imgs();
	num_imgs = 10000;
	emp_ptr = (EmployeeInfo*)malloc(sizeof(EmployeeInfo)*num_imgs); //sizeof(EmployeeInfo)=36K
	
}