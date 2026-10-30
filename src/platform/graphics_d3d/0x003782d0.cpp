/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0D4AD23419C9F69BA23F6D9B0C14C5A8AB18F958F8A9CBC35DF5E87E615E38CE
 * Entry: 0x003782d0, Ghidra index: 13467, label: FUN_003782d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_003782d0(void)

{
  int *in_EAX;
  int in_ECX;
  
  if (in_EAX[0x6e] == 0) {
    if ((((in_EAX[0x6d] & 0x1000000U) == 0) || ((in_EAX[2] & 0xc0000000U) == 0x80000000)) ||
       (in_EAX[0x74] != 0)) {
      if ((((in_EAX[2] & 0xc0000000U) == 0x80000000) && ((in_EAX[0x6d] & 0x200000U) != 0)) &&
         (in_EAX[0x74] == 0)) {
        in_ECX = in_ECX - in_EAX[1];
      }
    }
    else {
      in_ECX = in_ECX - ((uint)in_EAX[1] >> 1);
    }
    *(int *)(*in_EAX + 0x600800) = in_ECX;
  }
  return;
}
