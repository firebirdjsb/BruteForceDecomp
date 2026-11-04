/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2BF476F452490DE8746D7C6721F904DBA61CE2D3702F08C2A532AAB8F6968D12
 * Entry: 0x002596e0, Ghidra index: 8503, label: FUN_002596e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Source-aligned draft declaration only: guest Xbox ABI_UNVERIFIED. */
extern void FUN_00252c60(void);
void FUN_002596e0(int param_1)

{
  int in_EAX;
  int *in_ECX;
  int unaff_ESI;
  
  if ((in_EAX < 7) && (param_1 < 0x1f)) {
    (**(code **)(*in_ECX + 0x14))();
    return;
  }
  (**(code **)(*in_ECX + 0x14))();
  if (7 < in_EAX) {
    (**(code **)(*in_ECX + 0x14))();
  }
  if (0x1f < unaff_ESI) {
    FUN_00252c60();
  }
  return;
}
