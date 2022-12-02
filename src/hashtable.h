struct HashtablePayload {
  const void *pKey;       /* Key content for indexes.  NULL for tables */
  sqlite3_int64 nKey;     /* Size of pKey for indexes.  PRIMARY KEY for tabs */
  const void *pData;      /* Data for tables. */
  sqlite3_value *aMem;    /* First of nMem value in the unpacked pKey */
  u16 nMem;               /* Number of aMem[] value.  Might be zero */
  int nData;              /* Size of pData.  0 if none. */
  int nZero;              /* Extra zero data appended after pData,nData */
};

typedef struct Hashtable Hashtable;
typedef struct HtCursor HtCursor;
typedef struct HtShared HtShared;
typedef struct HashtablePayload HashtablePayload;