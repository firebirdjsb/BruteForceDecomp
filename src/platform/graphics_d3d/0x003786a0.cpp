/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: EEFA02683B29BD75F81AB2591812724413B20FB46C43096CA7D38524B69A0853
 * Entry: 0x003786a0, Ghidra index: 13472, label: FUN_003786a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0037bd48;
extern uint32_t DAT_0037c878;
int FUN_003786a0(void)

{
  uint in_ECX;
  uint in_EDX;
  uint uVar1;
  uint unaff_EDI;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(unaff_EDI & 0xf) {
  case 1:
    uVar1 = 0xc;
    if ((in_EDX & 0x10) == 0) break;
  case 0:
    uVar1 = 4;
    break;
  case 2:
    if (*(int *)(&DAT_0037c878 + (in_EDX & 3) * 4) == 0) {
      uVar1 = 0xffffffff;
    }
    else {
      uVar1 = (in_EDX & 3) + 8;
    }
    break;
  case 3:
    uVar1 = 1;
    break;
  case 4:
    DAT_0037bd48 = DAT_0037bd48 | 0x40;
    uVar1 = 5;
    break;
  case 5:
    uVar1 = 0xd;
  }
  return ((in_ECX | in_EDX | unaff_EDI) >> 1 & 0x10 | ((in_ECX ^ unaff_EDI) & 0x10) << 1 |
          in_ECX & 0x40 | uVar1) << ((byte)(in_ECX >> 0xd) & 0x18);
}
