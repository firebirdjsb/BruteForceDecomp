/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 32251A10926C1EA6251B34308BC5F5777EF4E7C0CCB8E3314DDE6503C0DB8082
 * Entry: 0x00295ab0, Ghidra index: 9330, label: FUN_00295ab0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include "bf_xbe_data_label_00404598.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_003b6c30;
extern uint32_t PTR_DAT_003b6c3c;
extern char s___100s__last_token_read_____50s__00404560[];
extern char s_pragma_too_long_00404514[];
void FUN_00295ab0(char *param_1)

{
  byte bVar1;
  int *piVar2;
  char *pcVar3;
  uint *in_EAX;
  uint uVar4;
  char *pcVar5;
  undefined1 local_50 [80];
  
  pcVar3 = param_1;
  param_1 = (char *)0x0;
  FUN_00295a00();
  while( true ) {
    if (DAT_003b6c30 < 2) {
      uVar4 = *(ushort *)(PTR_DAT_003b6c3c + *in_EAX * 2) & 0x107;
    }
    else {
      uVar4 = FUN_002eba73(*in_EAX,0x107);
    }
    if ((uVar4 == 0) && (*in_EAX != 0x5f)) break;
    if (0x4f < (int)param_1) {
      pcVar3[0x50] = '\0';
      FUN_002953d0();
      pcVar5 = pcVar3;
      if (*pcVar3 == '\0') {
        pcVar5 = BF_XBE_DATA_00404598;
      }
      FUN_00295370(s___100s__last_token_read_____50s__00404560,s_pragma_too_long_00404514,pcVar5,
                   in_EAX[7],local_50);
    }
    pcVar3[(int)param_1] = (char)*in_EAX;
    param_1 = (char *)((int)param_1 + 1);
    *(int *)in_EAX[6] = *(int *)in_EAX[6] + -1;
    piVar2 = (int *)in_EAX[6];
    if (*piVar2 < 0) {
      uVar4 = (*(code *)piVar2[2])(piVar2);
      *in_EAX = uVar4;
    }
    else {
      bVar1 = *(byte *)piVar2[1];
      piVar2[1] = (int)((byte *)piVar2[1] + 1);
      *in_EAX = (uint)bVar1;
    }
  }
  pcVar3[(int)param_1] = '\0';
  return;
}
