#include "hash_table.h"
#include <stdio.h>

int main() {
    ht_hash_table* ht = ht_new();
    ht_insert(ht, "key1", "value1");
    ht_insert(ht, "key1", "value1");
    ht_insert(ht, "key2", "value2");
    ht_insert(ht, "key3", "value3");
    printf("hello insert 3 keys\n");
    for (int i = 0; i < ht->size; i++) {
        ht_item* item = ht->items[i];
        if (item != NULL) {
            printf("first table index %d key %s value %s\n", i, item->key, item->value);
        }
    }
    ht_hash_table* ht2 = ht_new();
    ht_insert(ht, "key4", "value1");
    ht_insert(ht, "key5", "value2");
    ht_insert(ht, "key6", "value3");
    for (int i = 0; i < ht2->size; i++) {
        ht_item* item = ht2->items[i];
        if (item != NULL) {
            ht_insert(ht2, item->key, item->value);
        }
    }
    for (int i = 0; i < ht->size; i++) {
        ht_item* item = ht->items[i];
        if (item != NULL) {
            printf("Joined table index %d key %s value %s\n", i, item->key, item->value);
        }
    }
    ht_del_hash_table(ht);
    ht_del_hash_table(ht2);
}