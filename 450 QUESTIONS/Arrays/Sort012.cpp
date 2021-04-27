    void sort012(int a[], int n)
    {
        // coode here 
        int count[3] = { 0, 0, 0 };
   for (int i = 0; i < n; i++)
    {
    if (a[i] == 0)
	{
	  count[0]++;
	}
      else if (a[i] == 1)
	{
	  count[1]++;
	}
      else if (a[i] == 2)
	{
	  count[2]++;
	}
    }
  
  
  int *a0 = (int *) malloc (count[0] * sizeof (int));
  int *a2 = (int *) malloc (count[2] * sizeof (int));
  int *a1 = (int *) malloc (count[1] * sizeof (int));

  int i0, i1, i2;
  i0 = 0;
  i1 = 0;
  i2 = 0;
  for (int i = 0; i < n; i++)
    {
      if (a[i] == 0)
	{
	  a0[i0] = a[i];
	  i0++;
	}
      else if (a[i] == 1)
	{
	  a1[i1] = a[i];
	  i1++;
	}
      else
	{
	  a2[i2] = a[i];
	  i2++;
	}
    }

    int nth = 0;
    for(int i=0;i<count[0];i++){
       
        a[i] = a0[i];
        nth++;
    }
    for(int i=0;i<count[1];i++){
       
        a[nth] = a1[i];
        nth++;
    }
    for(int i=0;i<count[2];i++){
        
        a[nth] = a2[i];
        nth++;
    }
    }
    