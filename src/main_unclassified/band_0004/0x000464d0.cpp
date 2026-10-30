/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9532FFFBF4A76ADD61CED0E3D3FBA83CD7E6AB7DA1F4C6D3DA7305E3883642E8
 * Entry: 0x000464d0, Ghidra index: 548, label: FUN_000464d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern void FUN_00015fe0(void);
extern void FUN_00055b50(void);
extern void FUN_0001c1a0(int32_t param_1);

undefined4 FUN_000464d0(void)

{
  int iVar1;
  int in_EAX;
  
  FUN_00015fe0();
  FUN_00055b50();
  iVar1 = *(int *)(in_EAX + 0x358);
  FUN_0001c1a0(*(undefined4 *)(*(int *)(iVar1 + 4) + 4));
  *(int *)(*(int *)(iVar1 + 4) + 4) = *(int *)(iVar1 + 4);
  *(undefined4 *)(iVar1 + 8) = 0;
  *(undefined4 *)*(undefined4 *)(iVar1 + 4) = *(undefined4 *)(iVar1 + 4);
  *(int *)(*(int *)(iVar1 + 4) + 8) = *(int *)(iVar1 + 4);
  FUN_0001a4e0();
  return 1;
}
