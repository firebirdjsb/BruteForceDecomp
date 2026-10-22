/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 99E3313981C8236C06309DDED68ECF6A13022E0B9119F1274E6325FDC921C135
 * Entry: 0x0029d6c0, Ghidra index: 9461, label: FUN_0029d6c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_LAB_00403cc8;
extern uint32_t PTR_LAB_00403ce4;
/* WARNING: Removing unreachable block (ram,0x0029d6d3) */

undefined4 FUN_0029d6c0(int param_1,int param_2)

{
  int iVar1;
  
  *(int *)(param_1 + 4) = param_2;
  iVar1 = cpuid_Version_info(1);
  if ((*(uint *)(iVar1 + 8) & 0x2000000) == 0) {
    *(undefined **)(param_1 + 0x20) = (&PTR_LAB_00403ce4)[param_2];
    return 0;
  }
  *(undefined **)(param_1 + 0x20) = (&PTR_LAB_00403cc8)[param_2];
  return 0;
}
