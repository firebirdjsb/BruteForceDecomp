/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C734C9E8B6B5527042C00E9D2FCC47C4E96BF313BB2C6ED40BC71DDA137AACAD
 * Entry: 0x00258a20, Ghidra index: 8480, label: FUN_00258a20
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern char s_ablock___u___d___d___d_00406260[];
extern char s_lrg_allocated____________________00406278[];
void FUN_00258a20(int param_1)

{
  char cVar1;
  undefined4 *puVar2;
  char *pcVar3;
  undefined4 unaff_EDI;
  undefined1 local_108 [4];
  char local_104 [260];
  
  FUN_002eaa19(local_104,0x104,s_lrg_allocated____________________00406278);
  pcVar3 = local_104;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  XAPILIB__WriteFile(unaff_EDI,local_104,(int)pcVar3 - (int)(local_104 + 1),local_108,0);
  for (puVar2 = *(undefined4 **)(param_1 + 0xc); puVar2 != (undefined4 *)0x0;
      puVar2 = (undefined4 *)puVar2[1]) {
    FUN_002eaa19(local_104,0x104,s_ablock___u___d___d___d_00406260,puVar2,*puVar2,puVar2[3] & 0xfff,
                 (int)puVar2[3] >> 0xc);
    pcVar3 = local_104;
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    XAPILIB__WriteFile(unaff_EDI,local_104,(int)pcVar3 - (int)(local_104 + 1),local_108,0);
  }
  return;
}
