	int a[2][2],b[2][2],c[2][2],i,k,j,sum;
	printf("\n Enter first\n");
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("\n a[%d][%d]=",i,j);
			scanf("%d",&a[i][j]);
		}
		
	}
	printf("\n Enter sec\n");
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("\n b[%d][%d]=",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			sum=0;
			for(k=0;k<2;k++){
				sum+=a[i][k]*b[k][j];
			}
			c[i][j]=sum;
		}
	}
	printf("\n mutiplication of array\n");
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("\ta[%d][%d]=%d",i,j,c[i][j]);
		}
		printf("\n");
	}
