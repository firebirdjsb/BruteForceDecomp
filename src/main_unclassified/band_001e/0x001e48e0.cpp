/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8866BEFBCD5D7EE5C9642B87D1105CD829F3530B3AC7F3DB41BCA78028975D1F
 * Entry: 0x001e48e0, Ghidra index: 6785, label: FUN_001e48e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t *DAT_004432f8;
extern uint32_t PTR_DAT_0040757c;
extern char s_d__version_bin_0040756c[];
extern char s_z__cacheinfo_bin_00407558[];
/* Guest entry has two DWORDs (caller 0x1ea424..0x1ea42b, RET 8).
 * ABI_UNVERIFIED: this ordinary C signature is a source adapter, not an Xbox
 * entry binding. S is entry ESP; EBP saves the buffer originally at S+4.
 * argument_words models the writable S+4/S+8 pair without exposing a native
 * pointer-sized parameter object to four-byte guest output writes. */
void FUN_001e48e0(char *param_1, uint32_t param_2)
{
  uint32_t argument_words[2];
  uint32_t local_c, local_8, local_4;
  uint32_t object_word, saved_word, compare_word;
  uint32_t *table_word;
  uint8_t reformat;
  int32_t result;

  local_4 = XAPILIB__XGetLanguage(); /* S-4, 0x1e48fe. */
  local_c = 0;                     /* S-12, first four-byte read destination. */
  local_8 = UINT32_C(0xe0c43d05);   /* S-8, first open/read output. */
  argument_words[0] = 0;           /* S+4 overwritten at 0x1e4917. */
  argument_words[1] = param_2;     /* S+8, low byte tested at 0x1e4949. */

  /* Each vtable entry is a guest DWORD at the stated BYTE offset. code()
   * remains ABI_UNVERIFIED: the original indirect target/cleanup is unresolved.
   * 0x1e48ef..0x1e4922 pushes both output addresses, not only three arguments. */
  result = (int32_t)((code *)(uintptr_t)*(uint32_t *)(uintptr_t)
                    (uint32_t)(*DAT_004432f8 + 0x0cU))
      (DAT_004432f8, s_d__version_bin_0040756c, UINT32_C(0x80000000),
       &local_8, &argument_words[0]);
  if (result >= 0) {
    object_word = argument_words[0];
    ((code *)(uintptr_t)*(uint32_t *)(uintptr_t)
     (uint32_t)(*(uint32_t *)(uintptr_t)object_word + 0x10U))
        ((void *)(uintptr_t)object_word, &local_c, 4, &local_8);
    object_word = argument_words[0];
    ((code *)(uintptr_t)*(uint32_t *)(uintptr_t)
     (uint32_t)(*(uint32_t *)(uintptr_t)object_word + 0x0cU))
        ((void *)(uintptr_t)object_word);
  }
  reformat = 1;
  if ((uint8_t)argument_words[1] == 0) {
    argument_words[1] = UINT32_C(0xe0c43d05); /* S+8 at 0x1e495e. */
    object_word = argument_words[0];
    if (object_word != 0) {
      ((code *)(uintptr_t)*(uint32_t *)(uintptr_t)
       (uint32_t)(*(uint32_t *)(uintptr_t)object_word + 8U))
          ((void *)(uintptr_t)object_word);
      argument_words[0] = 0;
    }
    result = (int32_t)((code *)(uintptr_t)*(uint32_t *)(uintptr_t)
                      (uint32_t)(*DAT_004432f8 + 0x0cU))
        (DAT_004432f8, s_z__cacheinfo_bin_00407558, UINT32_C(0x80000000),
         &argument_words[1], &argument_words[0]);
    if (result >= 0) {
      object_word = argument_words[0];
      ((code *)(uintptr_t)*(uint32_t *)(uintptr_t)
       (uint32_t)(*(uint32_t *)(uintptr_t)object_word + 0x10U))
          ((void *)(uintptr_t)object_word, param_1, 0x34, &argument_words[1]);
      if (argument_words[1] == 0x34U) { /* 52-byte count, 0x1e49a3. */
        memcpy(&saved_word, param_1 + 0x0c, 4);
        memset(param_1 + 0x0c, 0, 4);
        /* ABI_UNVERIFIED: original 0x1e49b0..0x1e49b5 supplies ECX=param_1,
         * ESI=param_1+0x34 to 0x238370. This retained ordinary C call cannot
         * express that register contract; it is not a verified checksum call. */
        compare_word = FUN_00238370();
        if (compare_word == saved_word) {
          /* The original restores these four bytes ONLY on checksum equality. */
          memcpy(param_1 + 0x0c, &saved_word, 4);
          if ((uint8_t)param_1[0] == 0x83U) {
            memcpy(&compare_word, param_1 + 4, 4);
            if (compare_word == local_4) {
              memcpy(&compare_word, param_1 + 8, 4);
              if (compare_word == local_c && local_c != 0) {
                reformat = (uint8_t)(1U - ((uint8_t)FUN_001e4a70(param_1) != 0));
              }
            }
          }
        }
      }
      object_word = argument_words[0];
      ((code *)(uintptr_t)*(uint32_t *)(uintptr_t)
       (uint32_t)(*(uint32_t *)(uintptr_t)object_word + 0x0cU))
          ((void *)(uintptr_t)object_word);
      if (reformat == 0) goto LAB_001e4a25;
    }
  }
  result = XAPILIB__XFormatUtilityDrive();
  if (result != 0) {
    memset(param_1, 0, 0x34); /* REP STOSD of thirteen four-byte words. */
    param_1[0] = (char)0x83;
    /* 0x1e4a13 stores ESI=0 here; four bytes were already zeroed above. */
    compare_word = XAPILIB__XGetLanguage();
    memcpy(param_1 + 4, &compare_word, 4);
  }
  memcpy(param_1 + 8, &local_c, 4); /* S-12 DWORD, not a native pointer. */
LAB_001e4a25:
  /* 0x1e4a25..0x1e4a47 traverses guest DWORDs at 0x40757c, stride four. */
  table_word = &PTR_DAT_0040757c;
  while (*table_word != 0) {
    FUN_001e4e30(param_1, (void *)(uintptr_t)*table_word, 0, 1);
    table_word = (uint32_t *)((unsigned char *)table_word + 4);
  }
  object_word = argument_words[0];
  if (object_word != 0) {
    ((code *)(uintptr_t)*(uint32_t *)(uintptr_t)
     (uint32_t)(*(uint32_t *)(uintptr_t)object_word + 8U))
        ((void *)(uintptr_t)object_word);
  }
}
