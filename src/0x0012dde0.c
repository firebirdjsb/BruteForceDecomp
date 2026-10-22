/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 04714A48F44EB6B3DBADF3E0CC15E1EBC7FE0139E788FB8504742CC43E0B8274
 * Entry: 0x0012dde0, Ghidra index: 3804, label: FUN_0012dde0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
float10 FUN_0012dde0(void)

{
  int in_EAX;
  int iVar1;
  int in_ECX;
  
  iVar1 = in_EAX * 0x10 + in_ECX;
  if (*(int *)(iVar1 + 0x264) != 0) {
    return (float10)*(float *)(iVar1 + 0x26c);
  }
  return (float10)-1.0;
}
