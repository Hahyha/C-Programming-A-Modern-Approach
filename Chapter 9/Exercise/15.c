double median(double x, double y, double z) {
  double temp;
    
	if(x <= y)
		if(y <= z) temp = y;
		else if(x <= z) temp = z;
		else temp = x;
	if(z <= y) temp = y;
	if(x <= z) temp = x;

	return temp;
}
