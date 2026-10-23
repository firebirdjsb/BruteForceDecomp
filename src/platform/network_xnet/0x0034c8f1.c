/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C7948BE380DE995C00DDCE09266DD2A45F33D3628E49648A481105D4EEB7D6AC
 * Entry: 0x0034c8f1, Ghidra index: 12974, label: FUN_0034c8f1
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_0034c8f1(short param_1,short param_2)

{
  int iVar1;
  
  if ((param_1 == -0x17fd) && (param_2 == -0x17fd)) {
    iVar1 = 0;
  }
  else {
    iVar1 = 2 - (uint)((ushort)(CONCAT11((undefined1)param_1,param_1._1_1_) - 1000U |
                               CONCAT11((undefined1)param_2,param_2._1_1_) - 1000U) < 0x100);
  }
  return iVar1;
}
