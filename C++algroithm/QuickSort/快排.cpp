//#include<iostream>
//using namespace std;
//void quick_sort(int q[],int l,int r) {
//	if (l >= r)return;
//	//q[l]�Ƿֽ��,��������ȡ
//	int x = q[l]; int i = l - 1, j = r + 1;
//	while (i < j) {
//		do i++; while (q[i] < x);
//		do j--; while (q[j] > x);
//		if (i < j)swap(q[i], q[j]);
//	}
//	quick_sort(q, l, j); quick_sort(q, j + 1, r);
//}
//int main() {
//	int n;
//	cin >> n;
//	int* p = new int[n];
//	for (int i = 0; i < n; i++) cin >> p[i];
//	quick_sort(p, 0, n - 1);
//	for (int i = 0; i < n;i++)cout << p[i];
//	return 0;
//}
////�������·ֽ��Ƿ������޻���,�������е����������ֵ�һ��,
////��ʹ������ߵ���q[l]��Ϊ�ֽ��ʱ,����Ҳ����ȫ�����ȵ�һ������,��ᷢ�����޻���,ȡ�ұ�ͬ��
////�������е�����ȫ����Ȼᵼ��ָ���±곬��
//// ����do-while����i��j����ƫ��������Ϊ�����whileѭ���Ļ�����ָ��ָ����������ڷֽ�ֵ�Ļ��ᵼ������ѭ��
////�ݹ���밴��������ʽ,��Ϊ���һ��ѭ���������Ѿ��ɹ����ֳ�0��j��j+1��r����