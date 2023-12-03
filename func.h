struct fridge{
 char prod[40];
 int exp_date;
 int weight;
};
void write(struct fridge *arr, int n);
void read(struct fridge **arr, int *n);
void create(struct fridge **arr, int *n);
void search(struct fridge *arr, int n);
