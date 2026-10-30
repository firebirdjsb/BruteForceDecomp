/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D11B363670EDC01AAC24A63C652DFD09768143FA13DC2D2743AC1F614CD60716
 * Entry: 0x002980d0, Ghidra index: 9358, label: FUN_002980d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_004045f4;
extern uint32_t DAT_00469888;
extern char s_function___p_004042b4[];
extern char s_table___p_004042c4[];
extern char s_userdata___p_004042a4[];
extern uint32_t switchD_002980f3_default[];
void FUN_002980d0(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  char *pcVar4;
  undefined1 local_48 [68];
  
  if ((*(int *)(DAT_00469888 + 0x14) < 1) || (iVar1 = *(int *)(DAT_00469888 + 0x10) + 1, iVar1 == 0)
     ) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3 = (undefined4 *)(*(int *)(DAT_00469888 + 4) + -0x10 + iVar1 * 0x10);
  }
  switch(*puVar3) {
  case 0:
    uVar2 = *(undefined4 *)(puVar3[2] + 0x14);
    pcVar4 = s_userdata___p_004042a4;
    break;
  case 0xfffffff9:
    uVar2 = puVar3[2];
    pcVar4 = s_function___p_004042b4;
    break;
  case 0xfffffffa:
    FUN_00289bc0(&DAT_004045f4);
    return;
  case 0xfffffffb:
    uVar2 = puVar3[2];
    pcVar4 = s_function___p_004042b4;
    break;
  case 0xfffffffc:
    uVar2 = puVar3[2];
    pcVar4 = s_function___p_004042b4;
    break;
  case 0xfffffffd:
    uVar2 = puVar3[2];
    pcVar4 = s_table___p_004042c4;
    break;
  case 0xfffffffe:
    FUN_00289d80();
    return;
  case 0xffffffff:
    uVar2 = FUN_00289a40();
    FUN_00289bc0(uVar2);
    return;
  default:
    goto switchD_002980f3_default;
  }
  FUN_002eaa86(local_48,pcVar4,uVar2);
switchD_002980f3_default:
  FUN_00289bc0(local_48);
  return;
}
