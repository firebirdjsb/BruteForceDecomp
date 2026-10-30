/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1EF04EE935FAB4FEDD301BBCEDD54F7ACF88E71C5B0210FF054BAC5A4F515083
 * Entry: 0x001fb980, Ghidra index: 7121, label: FUN_001fb980
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_001fb980(void)

{
  char cVar1;
  int unaff_EBX;
  
  if (unaff_EBX == 0) {
    return 0;
  }
  cVar1 = FUN_001fb770();
  if (cVar1 != '\0') {
    cVar1 = FUN_001fb810();
    if (cVar1 != '\0') {
      cVar1 = FUN_001fb850();
      if (cVar1 != '\0') {
        cVar1 = FUN_001fb7d0();
        if (cVar1 != '\0') {
          cVar1 = FUN_001fb890();
          if (cVar1 != '\0') {
            cVar1 = FUN_001fb8b0(unaff_EBX);
            if (cVar1 != '\0') {
              cVar1 = FUN_001fb910(unaff_EBX);
              if (cVar1 != '\0') {
                return 1;
              }
            }
          }
        }
      }
    }
  }
  return 0;
}
