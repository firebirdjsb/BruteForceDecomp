/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 63A4619AF01C8BB251ECDCF6AE5A185714F60D1FC99E03B50586AEF48367467A
 * Entry: 0x00121010, Ghidra index: 3650, label: FUN_00121010
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00121010(void)

{
  int iVar1;
  int unaff_EBX;
  int *piVar2;
  
  piVar2 = (int *)(*(int *)(unaff_EBX + 0x2e8) + 0x88);
  FUN_0014a610();
  iVar1 = (**(code **)(*piVar2 + 0x5c))();
  (**(code **)(**(int **)(iVar1 + 0x15c) + 0x1c))(piVar2);
  (**(code **)(*piVar2 + 0x38))();
  *(undefined1 *)(unaff_EBX + 0x6a0) = 0;
  *(byte *)(*(int *)(unaff_EBX + 0x2e8) + 0x1c8) =
       *(byte *)(*(int *)(unaff_EBX + 0x2e8) + 0x1c8) & 0xfe;
  *(undefined1 *)(unaff_EBX + 0x7e8) = 0;
  return;
}
