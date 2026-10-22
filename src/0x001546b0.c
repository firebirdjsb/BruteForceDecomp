/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 443A989A3414F2E5A828EF40423F06BCC98E1216BCDB6A91D647828F2D137A61
 * Entry: 0x001546b0, Ghidra index: 4442, label: FUN_001546b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_001546b0(void)

{
  int in_EAX;
  
  if (((in_EAX != 2) && (in_EAX != 0x1a)) && (in_EAX != 0x1f)) {
    return 0;
  }
  return 1;
}
