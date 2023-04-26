#include<stdio.h> /* header file */
main(){ /* main function */

	int cnt=4;/* initialization of integer variable */

	for(int lc=1;lc<=cnt;lc++){ /* loop starts from lc=0 till lc less than 4 */

		printf("%d ",cnt*cnt); /* print square of cnt */

		if(lc==cnt){ /* if lc equal to cnt */

			cnt--;/* post decrament of cnt */
			printf("\n"); /* new iteration on new line */
			lc=0;/* assigning lc=0 */

			if(cnt==0){ /* if cnt equal to 0 */
				lc=5; /* assign lc=4*/
			}
		}
	}
}

