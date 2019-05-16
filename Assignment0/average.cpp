double average(const double data[], int length){
double sum=0;
double average=0;
for (int i=0;i<length;i++){
	sum=sum+data[i];
}
	 average=sum/length;
return average;
}
