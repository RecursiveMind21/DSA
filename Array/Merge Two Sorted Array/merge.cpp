double median(vector<int>& a, vector<int>& b) {

		int size = a.size() + b.size();
		double ans = 0;
		float arr[size];
		int i = 0;
		int j = 0;
		int k = 0;
		while(i<a.size() && j<b.size()){
	    	if(a[i] >= b[j]){
				arr[k] = b[j];
				j++;
	   		 }
			else{
				arr[k] = a[i];
				i++;
			}
			k++;
		}
		while(i<a.size()){
			arr[k] = a[i];
			k++;
			i++;
		}
		while(j<b.size()){
			arr[k] = a[j];
			k++;
			j++;
		}

		if(size%2==0){
			int mid1 = size/2;
			int mid2 = mid1 - 1;
			ans = (arr[mid1] + arr[mid2])/2;
		}
		else{
			int mid = size/2;
			ans = arr[mid];
		}

	return ans;
}