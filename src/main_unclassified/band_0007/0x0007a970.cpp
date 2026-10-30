/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0B0A385B5A882DEC6CA90E5BD97C8CCB7889EF187B15C746CAB73233BA5708BC
 * Entry: 0x0007a970, Ghidra index: 1458, label: FUN_0007a970
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00400538;
extern uint32_t DAT_0040054c;
extern uint32_t DAT_0040dd4c;
extern uint32_t *DAT_004432f8;
extern char s__s_s_s_0040dd8c[];
extern char s_campaign_0040dd68[];
bool FUN_0007a970(void)

{
  char cVar1;
  int *piStack_108;
  undefined4 *puStack_104;
  undefined1 local_100 [256];
  
  puStack_104 = DAT_00400538;
  if (DAT_0040054c < 0x10) {
    puStack_104 = &DAT_00400538;
  }
  piStack_108 = (int *)s_campaign_0040dd68;
  FUN_002eaa19(local_100,0x100,s__s_s_s_0040dd8c);
  puStack_104 = (undefined4 *)local_100;
  piStack_108 = DAT_004432f8;
  cVar1 = (**(code **)(*DAT_004432f8 + 0x24))();
  if (cVar1 != '\0') {
    return true;
  }
  FUN_002eaa19(&piStack_108,0x100,&DAT_0040dd4c);
  cVar1 = (**(code **)(*DAT_004432f8 + 0x24))(DAT_004432f8,&piStack_108);
  return cVar1 != '\0';
}
