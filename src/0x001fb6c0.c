/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: CE4251F173408B85A418AA88949FA5EAA57EC33F0F95BFE775394B863C6191D1
 * Entry: 0x001fb6c0, Ghidra index: 7113, label: FUN_001fb6c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_LAB_0039641c;
extern uint32_t PTR_LAB_00396434;
undefined4 * FUN_001fb6c0(void)

{
  int in_EAX;
  undefined4 *puVar1;
  int iVar2;
  
  if (in_EAX == 1) {
    iVar2 = FUN_002ea01d(0x38);
    if (iVar2 != 0) {
      puVar1 = (undefined4 *)FUN_001fb280();
      return puVar1;
    }
  }
  else if (in_EAX == 3) {
    puVar1 = (undefined4 *)FUN_002ea01d(0x20);
    if (puVar1 != (undefined4 *)0x0) {
      puVar1[1] = 0xffffffff;
      puVar1[2] = 1;
      puVar1[3] = 0;
      puVar1[4] = 0x7fffffff;
      puVar1[5] = 0;
      *(undefined1 *)(puVar1 + 6) = 0;
      *puVar1 = &PTR_LAB_00396434;
      puVar1[7] = 0;
      return puVar1;
    }
  }
  else if (in_EAX == 6) {
    iVar2 = FUN_002ea01d(0x24);
    if (iVar2 != 0) {
      puVar1 = (undefined4 *)FUN_001fb430();
      return puVar1;
    }
  }
  else {
    puVar1 = (undefined4 *)FUN_002ea01d(0x1c);
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = &PTR_LAB_0039641c;
      puVar1[1] = 0xffffffff;
      puVar1[2] = 1;
      puVar1[3] = 0;
      puVar1[4] = 0x7fffffff;
      puVar1[5] = 0;
      *(undefined1 *)(puVar1 + 6) = 0;
      return puVar1;
    }
  }
  return (undefined4 *)0x0;
}
