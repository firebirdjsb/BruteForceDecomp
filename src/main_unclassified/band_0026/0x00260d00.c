/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1089186194DFDA3F2CBD6D8779E7DA9AE8380A403D14492D40D535EDC47414EA
 * Entry: 0x00260d00, Ghidra index: 8629, label: FUN_00260d00
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0046b258;
int FUN_00260d00(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int unaff_retaddr;
  
  RtlEnterCriticalSection(&DAT_0046b258);
  if (*(undefined4 **)(unaff_retaddr + 0xc) == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    puVar4 = (undefined4 *)**(undefined4 **)(unaff_retaddr + 0xc);
  }
  iVar3 = 0;
  for (; puVar4 != *(undefined4 **)(unaff_retaddr + 0xc); puVar4 = (undefined4 *)*puVar4) {
    iVar1 = *(int *)(puVar4[2] + 0x14);
    iVar2 = 0;
    if (iVar1 != 0) {
      iVar2 = (*(int *)(puVar4[2] + 0x18) - iVar1) / 0x18;
    }
    iVar3 = iVar3 + iVar2;
  }
  RtlLeaveCriticalSection(&DAT_0046b258);
  return iVar3;
}
