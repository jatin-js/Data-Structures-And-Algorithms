/*int BFS(int A[][8], int n, int root){
	struct Queue* q=new struct Queue;
	init(q);
	
	int visited[8]={0}, v;
	enQueue(q, root);
	visited[root]=1;
	while(q->front && q->rear){
		deQueue(q, &root);
		cout<<root<<' ';	
		for(v=1;v<=n;v++)
			if(A[root][v]==1 && visited[v]==0){
				enQueue(q, v);
				visited[v]=1;
			}
		
	}
	/*cout<<root<<' ';
	visited[root]=1;
	enQueue(q, root);
	while(q->front && q->rear){
		deQueue(q, &root);
		for(v=1;v<=n;v++)
			if(A[root][v]==1 && visited[v]==0){
				cout<<v<<' ';
				visited[v]=1;
				enQueue(q, v);
			}
		
	}

	
	
	return 1;

}
*/


/*int DFS(int A[][8], int n, int root){

	struct Node* top=NULL;
	int v;
	int visited[8]={0};
	push(&top, root);
	visited[root]=1;	
	while(top){
		pop(&top, &root);
		cout<<root<<' ';
		for(v=n;v>=1;v--){
			if(A[root][v]==1 && visited[v]==0){
				visited[v]=1;					
				push(&top, v);	
			}	
		}
	}
	return 1;
}*/



int DFSRec(int A[][8], int n, int root){vgv
	int static visited[8]={0};
	if(visited[root]) return 0;	
	cout<<root<<' ';	
	visited[root]=1;
	int v;
	for(v=1;v<=n;v++){
		if(A[root][v]==1 && visited[v]==0)
			DFSRec(A, n, v);		
	}
	return 1;			
}
