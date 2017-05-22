void ShellInsert(SqList&L,int dk)
{
  int i,j;
  for(i=dk+1;i<=L.length;++i)
  {
    if LT(L.r[i].key,L.r[i-dk].key)
    {
      L.r[0]=L.r[i];
      for(j=i-dk;j>0&&LT(L.r[0].key,L.key[j].key);j-=dk)
      L.r[j+dk]=L.r[j];
      L.r[j+dk]=L.r[0];
    }
  
  }

}


void bubble(int a[],int n)
{
  int i,j,t;
  Status change;
  for(i=n-1;change=TRUE;i>1&&change;--i)
  {
    change = FALSE;
    for(j=0;j<i;++j;)
    if(a[j]>a[j+1])
    {
      t=a[j];
      a[j]=a[j+1];
      a[j+1]=t;
      change = TRUE;
    
    }
  
  }

}

void Qsort(SqList&L,int low,int high)
{
  int pivotloc;
  if(low<high)
  {
    pivotloc=partition(L,low,high);
    Qsort(L,low,pivotloc-1);
    Qsort(L,pivotloc+1,high);
  
  
  }



}
int Partition(SqList&L,int low,int high)
{
  RedType t;
  KeyType pivotkey;
  pivotkey = L.r[low].key;
  while(low<high)
  {
    while(low<high&&L.r[high].key>pivokey)
      --high;
     t=L.r[low];
     L.r[low]=L.r[high];
     L.r[high]=t;
     
  while(low<high&&L.r[low].key<=pivokey)
  ++low;
  t=L.r[low];
  L.r[low]=L.r[high];
  L.r[high]=t;
  
  
  }
  return low;




}

int selectMinKey(SqList L,int i)
{
  KeyType min;
  int j,k;
  k=i;
  min = L.r[i].key;
  for(j=i+1;j<=L.length;j++)
  {
    if(L.r[j].key<min)
  {
    k=j;
    min = L.r[j].key;
  
  
  }
  return k;
  }




}

void selectsort(SqList&L)
{

  int i,j;
  RedType t;
  for(i=1;i<L.length;++i)
  {
    j=selectMinKey(L,i);
    if(i!=j)
    {
      t=L.r[i];
      L.r[i]=L.r[j];
      L.r[j]=r;
    
    }
  
  }



}

void HeapAdjust(HeapType &H,int s,int m)
{
  RedType rc;
  int j;
  rc=H.r[s];
  for(j=2*s;j<=m;j*=2)
  {
    if(j<m&&LT(H.r[j].key,Hr.r[j+1].key))
      ++j;
     if(!LT(rc.key,H.r[j].key))
       break;
      H.r[s]=H.r[j];
      s=j;
  
  
  }
  H.r[s] = rc;
  
  

}
void heapsort(HeapType &H)
{
  RedType t;
  int i;
  for(i=H.length/2;i>0;--i)
  {
    HeapAdjust(H,i,H.length);
    for(i=H.length;i>1;--i)
    {
      t=H.r[1];
      H.r[1]=H.r[i];
      H.r[i]=t;
      HeapAdjust(H,1,i-1);
    }
  
  
  }




}
