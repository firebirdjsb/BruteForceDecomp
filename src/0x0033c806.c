/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1EE5D61E7E572A1CD8DD48F101119BD83F6497B90C24CD9225EC9467EDDB8CD3
 * Entry: 0x0033c806, Ghidra index: 12562, label: FUN_0033c806
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_004b0948;
extern uint32_t DAT_004b094a;
extern uint32_t DAT_004b094c;
extern uint32_t DAT_004b094e;
extern uint32_t DAT_004b0950;
void FUN_0033c806(void)

{
  int *in_ECX;
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  
  puVar2 = (undefined4 *)in_ECX[3];
  for (iVar1 = (in_ECX[4] & 0x7fffffU) << 7; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  for (iVar1 = 0; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined1 *)puVar2 = 0;
    puVar2 = (undefined4 *)((int)puVar2 + 1);
  }
  *(uint *)in_ECX[5] = (uint)*(ushort *)(&DAT_004b0948 + *in_ECX * 10);
  *(uint *)(in_ECX[5] + 4) = (uint)*(ushort *)(&DAT_004b094a + *in_ECX * 10);
  *(uint *)(in_ECX[5] + 8) = (uint)*(ushort *)(&DAT_004b094c + *in_ECX * 10);
  *(uint *)(in_ECX[5] + 0xc) = (uint)*(ushort *)(&DAT_004b094e + *in_ECX * 10);
  *(uint *)(in_ECX[5] + 0x10) = (uint)*(ushort *)(&DAT_004b0950 + *in_ECX * 10);
  *(undefined4 *)(in_ECX[5] + 0x14) = 1;
  uVar3 = 0;
  if (*(int *)(in_ECX[5] + 4) != 0) {
    do {
      FUN_0033bda0(uVar3);
      uVar3 = uVar3 + 1;
      *(undefined1 *)(in_ECX[0x20b] * 0x200 + in_ECX[0x20c] + in_ECX[3]) = 0x2a;
    } while (uVar3 < *(uint *)(in_ECX[5] + 4));
  }
  uVar3 = 0;
  if (*(int *)in_ECX[5] != 0) {
    do {
      FUN_0033be1d(uVar3);
      uVar3 = uVar3 + 1;
      *(undefined1 *)(in_ECX[0x20b] * 0x200 + in_ECX[0x20c] + in_ECX[3]) = 0x2a;
    } while (uVar3 < *(uint *)in_ECX[5]);
  }
  return;
}
