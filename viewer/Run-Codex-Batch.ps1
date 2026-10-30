param(
    [int]$Start = 0,
    [ValidateRange(1,100)][int]$Count = 3,
    [string]$ExportSource = "D:\Downloads\BruteForce-Decompilation\FunctionExport",
    [string]$Workspace = "D:\Downloads\BruteForce-Decompilation\LiveReview",
    [switch]$HighWarningsFirst,
    [string]$CodexPath = ""
)
$ErrorActionPreference = 'Stop'
Set-Location -LiteralPath $PSScriptRoot

if (-not (Test-Path -LiteralPath $ExportSource)) {
    $candidates = @(
        'D:\Downloads\FunctionExport.zip',
        'D:\Downloads\BruteForce-Decompilation\FunctionExport.zip'
    )
    $match = $candidates | Where-Object { Test-Path -LiteralPath $_ } | Select-Object -First 1
    if ($match) { $ExportSource = $match }
    else { throw 'Cannot find FunctionExport folder or ZIP. Supply -ExportSource.' }
}

# The Codex Windows desktop application is separate from the optional Codex CLI.
# A freshly installed npm global command may not yet be present on this process PATH.
$cli = $null
if ($CodexPath) {
    if (-not (Test-Path -LiteralPath $CodexPath -PathType Leaf)) {
        throw "Requested Codex executable does not exist: $CodexPath"
    }
    $cli = (Resolve-Path -LiteralPath $CodexPath).Path
}
if (-not $cli) {
    foreach ($name in @('codex.cmd', 'codex.exe', 'codex')) {
        $command = Get-Command $name -ErrorAction SilentlyContinue |
            Where-Object { $_.CommandType -eq 'Application' } |
            Select-Object -First 1
        if ($command) { $cli = $command.Source; break }
    }
}
if (-not $cli) {
    $paths = @()
    if ($env:APPDATA) { $paths += (Join-Path $env:APPDATA 'npm\codex.cmd') }
    if (Get-Command npm -ErrorAction SilentlyContinue) {
        try {
            $prefix = (& npm prefix -g 2>$null | Select-Object -First 1)
            if ($LASTEXITCODE -eq 0 -and $prefix) {
                $paths += (Join-Path ($prefix.Trim()) 'codex.cmd')
            }
        } catch { }
    }
    foreach ($p in ($paths | Select-Object -Unique)) {
        if (Test-Path -LiteralPath $p -PathType Leaf) {
            $cli = (Resolve-Path -LiteralPath $p).Path
            break
        }
    }
}
if (-not $cli) {
    Write-Host 'Codex CLI not found. Codex for Windows desktop does not necessarily install the CLI.' -ForegroundColor Yellow
    Write-Host 'Install the optional CLI, then sign in:' -ForegroundColor Yellow
    Write-Host '    npm install -g @openai/codex@latest'
    Write-Host '    $env:PATH = "$(npm prefix -g);$env:PATH"'
    Write-Host '    codex --version'
    Write-Host '    codex login'
    Write-Host 'Your existing Ghidra exports, viewer and C++17 drafts are unchanged.'
    throw 'Codex CLI unavailable'
}

$python = if (Get-Command py -ErrorAction SilentlyContinue) { 'py' }
    elseif (Get-Command python -ErrorAction SilentlyContinue) { 'python' }
    else { throw 'Python 3 is required.' }

Write-Host "Using Codex CLI: $cli" -ForegroundColor Cyan
& $cli --version
if ($LASTEXITCODE -ne 0) { throw 'Codex CLI could not start. Check your installation.' }

$argsForScript = @(
    '--source', $ExportSource,
    '--workspace', $Workspace,
    '--start', "$Start",
    '--count', "$Count",
    '--codex', $cli
)
if ($HighWarningsFirst) { $argsForScript += '--high-warnings-first' }
Write-Host "Submitting at most $Count function pseudocodes to Codex; results will be unverified C++17 drafts." -ForegroundColor Cyan
if ($python -eq 'py') { & py -3 "$PSScriptRoot\codex_batch.py" @argsForScript }
else { & python "$PSScriptRoot\codex_batch.py" @argsForScript }
if ($LASTEXITCODE -ne 0) { throw "Codex batch failed with exit code $LASTEXITCODE" }
