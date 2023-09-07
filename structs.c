/*An example of s tructure that can be used while creating or dealing with hash tables*/
/**
 * struct_node - The node of the hash table
 * @key: the key value
 * @next: pointer to the next node
 * 
*/
typedef struct node{
    char *key;
    char *value;
    struct node *next;
} hash_node;

/**
 * struct_node - the node of the hash table
 * @size: size of the hash table
 * @array: array of items in the hash table
 * 
*/
typedef struct table{
    unsigned long int size;
    hash_node **array;
} hash_table;

