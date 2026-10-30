/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0B65C6C72A5D46015613D301A58EF0CDD682BBD5B7541B83C1EB77FDAE83ECB1
 * Entry: 0x001553f0, Ghidra index: 4464, label: FUN_001553f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_DAT_00400864;
extern uint32_t PTR_FUN_0039acb8;
extern uint32_t PTR_LAB_0039afd4;
void FUN_001553f0(void)

{
  int *piVar1;
  uint uVar2;
  undefined4 *in_ECX;
  
  *in_ECX = PTR_FUN_0039acb8;
  uVar2 = (uint)(*(ushort *)((int)in_ECX + 0x22) >> 5);
  *(uint *)(PTR_DAT_00400864 + uVar2 * 4) =
       *(uint *)(PTR_DAT_00400864 + uVar2 * 4) &
       ~(1 << ((byte)*(ushort *)((int)in_ECX + 0x22) & 0x1f));
  FUN_0008f720();
  if (in_ECX[3] != 0) {
    piVar1 = (int *)(in_ECX[3] + 0x10);
    *piVar1 = *piVar1 + -1;
  }
  if (in_ECX[0xf] != 0) {
    FUN_0008f6e0();
  }
  *in_ECX = &PTR_LAB_0039afd4;
  return;
}
