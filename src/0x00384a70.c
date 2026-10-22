/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 73795139B98974CAF74D12CE7E8A6EA7D44BF1A807D6512E4B2A309F0DEE080C
 * Entry: 0x00384a70, Ghidra index: 13655, label: FUN_00384a70
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00384a70(void)

{
  undefined4 *puVar1;
  int *in_ECX;
  int in_EDX;
  int *piVar2;
  
  if (*(char *)(in_EDX + 0x11) == '\0') {
    piVar2 = in_ECX + 0x103;
    puVar1 = (undefined4 *)(*in_ECX + 0x20);
  }
  else {
    piVar2 = in_ECX + 0x104;
    puVar1 = (undefined4 *)(*in_ECX + 0x28);
  }
  *(int *)(in_EDX + 0x18) = *piVar2;
  *piVar2 = in_EDX;
  if (*(int *)(in_EDX + 0x18) == 0) {
    *(undefined4 *)(in_EDX + 0xc) = 0;
  }
  else {
    *(undefined4 *)(in_EDX + 0xc) = *(undefined4 *)(*(int *)(in_EDX + 0x18) + 0x14);
  }
  *puVar1 = *(undefined4 *)(in_EDX + 0x14);
  return;
}
