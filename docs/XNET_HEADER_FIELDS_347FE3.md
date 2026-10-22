# XNET header writer `0x00347FE3`

Original body SHA-256: `EC56BFF4FD6BED844A35C3BB0EB5FB7FD4CF1F5AF59DD305C6244A4E31BC8214` over 97 original XBE bytes. Original code consumes incoming **ECX** as context, plus three stack words, and ends in `ret 12`.

Observed writes to an output buffer obtained from the first word of a handle object: +0=0x45, +1=context[0x16], +2/+3=zero, +4/+5=high/low byte of the incremented context counter at +0x8B0, +6/+7=zero, +8=context[0x17], +9=low byte of third stack argument, +12..+15=zero, +16..+19=second stack argument in little endian. **Bytes +10/+11 remain untouched**.

The original uses `xadd` without a `lock` prefix for the 32-bit counter. The C model preserves the observable arithmetic and fields only for isolated execution. Concurrency effects, complete record protocol semantics, and Xbox game/runtime behavior have **not** been proven.

Strict host C11 and Windows i386-target syntax checks passed locally. An isolated record-buffer test verified the fields above with the intervening bytes left unchanged. This new definition has the same ECX-context and stack-argument count as the existing XNET shared interface; wider dependencies remain unresolved.
