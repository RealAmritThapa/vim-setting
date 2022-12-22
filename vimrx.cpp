set number 
set autoindent
set ruler
set cursorcolumn
set smartindent
set shiftwidth=4
set tabstop=4
set softtabstop=4
set smarttab
set expandtab
set relativenumber "Shows the numbers of lines up and down"
set nu "shows the line currently on"
syntax on
set laststatus=2
set scrolloff=8
set background=dark
set scrolloff=8
set wrap
set linebreak
"*************** PLUGINS *****************
call plug#begin()
Plug 'tpope/vim-sensible'
Plug 'arcticicestudio/nord-vim' "colortheme
Plug 'tomasr/molokai'
Plug 'sickill/vim-monokai'
Plug 'morhetz/gruvbox' "colortheme
Plug 'tomasiser/vim-code-dark' "colortheme
Plug 'itchyny/lightline.vim'
Plug 'preservim/nerdtree'
"Plug 'townk/vim-autoclose'
Plug 'vim-scripts/AutoComplPop'
Plug 'raimondi/delimitmate'
call plug#end()

" ******************************************
colorscheme gruvbox
let g:lightline = {
      \ 'colorscheme': 'wombat',
      \ }
"**************** cursor *******************
let &t_SI = "\e[6 q" "steady bar in insert mode
let &t_EI = "\e[2 q" " block in edit mode
" *****************************************


