//tha valw mono th zhtoumenh synarthsh

int cnt(int code)
{
	node *p,found=0,cnt=0;
	
	p=head;
	while(p!=NULL)
	{
		if(p->code==code)
		 	found=1;
		
		if(found==1)
			cnt++;
		
		p=p->next;
	}
	if (found==1)
		return cnt;
	else 
		return -1;
}
