/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5CB1114BD2056C9DA7B4978883178BB0C7FD561890AEAFF211FB48966FB0F695
 * Entry: 0x000d03a0, Ghidra index: 2573, label: FUN_000d03a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern void FUN_000d05d0(void);

extern uint32_t DAT_0046d328;
void FUN_000d03a0(void)

{
  undefined4 *puVar1;
  undefined4 in_EAX;
  undefined4 *puVar2;
  undefined4 *in_ECX;
  int iVar3;
  
  *in_ECX = 0;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  in_ECX[3] = 0;
  in_ECX[5] = 0;
  in_ECX[6] = 0;
  in_ECX[7] = 0;
  in_ECX[8] = 0;
  in_ECX[9] = 0;
  in_ECX[0xb] = 0;
  in_ECX[0xc] = 0;
  in_ECX[0xe] = in_EAX;
  in_ECX[0xf] = 0;
  FUN_000d05d0();
  puVar2 = &DAT_0046d328;
  iVar3 = in_ECX[8];
  while (iVar3 != 0) {
    puVar1 = (undefined4 *)in_ECX[8];
    in_ECX[8] = *puVar1;
    *puVar1 = 0;
    puVar1[1] = 0;
    iVar3 = in_ECX[8];
  }
  in_ECX[8] = 0;
  in_ECX[9] = 0;
  iVar3 = 10000;
  do {
    *puVar2 = 0;
    if ((undefined4 *)in_ECX[9] == (undefined4 *)0x0) {
      puVar2[1] = 0;
      in_ECX[8] = puVar2;
    }
    else {
      *(undefined4 *)in_ECX[9] = puVar2;
      puVar2[1] = in_ECX[9];
    }
    in_ECX[9] = puVar2;
    puVar2 = puVar2 + 3;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  in_ECX[0xd] = 0;
  in_ECX[0x10] = 0xffffffff;
  return;
}
